#include "poly.h"

using namespace std;

Poly::Poly()
{
    for(int i=0; i<4; ++i)
    {
        c[i]=0.;
    }
}

Poly::Poly(double const& c0, double const & c1, double const & c2, double const & c3)
{
    c[0]=c0;
    c[1]=c1;
    c[2]=c2;
    c[3]=c3;
}

Poly::Poly(double *cc)
{
    for(int i=0; i<4; ++i)
    {
        c[i]=cc[i]; //*cc++
    }
}

Poly::Poly(const Poly& p)
{
    for(int i=0; i<4; ++i)
    {
        c[i]=p.c[i];
    }
}

ostream& operator<<(ostream& os, const Poly& p)
{
    os << p.c[3] << " * x^3 + " << p.c[2] << " * x^2 + " << p.c[1] << " * x + " << p.c[0];
    return os;
}

double Poly::At(int n) const
{
    return c[n];
}

void Poly::Set(int n, double cc)
{
    c[n]=cc;
}

void Poly::Roots(complex <double> *root1, complex <double> *root2, complex <double> *root3) const
{
    double a,b,C,Q,R,S,fi,T;
    complex <double> Im;
    Im = complex<double>(0.0,1.0);

    if(c[3]==0) throw("Not cubic!");

    a=c[2]/c[3];
    b=c[1]/c[3];
    C=c[0]/c[3];

    Q=(a*a-3.*b)/9.;
    R=(2.*a*a*a-9.*a*b+27.*C)/54.;
    S=Q*Q*Q-R*R;

    if(S==0)
    {
        T=pow(R,1/3.);
        *root1=-2.*T-a/3.;
        *root2=T-a/3.;
        *root3=T-a/3.;
    }
    else
    {
        if(S>0.)
        {
            fi=acos(R/sqrt(Q*Q*Q))/3.;
            *root1=-2.*sqrt(Q)*cos(fi)-a/3.;
            *root2=-2.*sqrt(Q)*cos(fi+2./3.*pi)-a/3.;
            *root3=-2.*sqrt(Q)*cos(fi-2./3.*pi)-a/3.;
        }
        else
        {
            if(Q==0)
            {
                T=-pow(C-a*a*a/27.,1./3.);
                *root1=T;
                *root2=-(a+T)/2.+0.5*Im*sqrt(abs((a-3.*T)*(a+T)-4.*b));
                *root3=-(a+T)/2.-0.5*Im*sqrt(abs((a-3.*T)*(a+T)-4.*b));
            }
            else
            {
                if(Q>0)
                {
                    fi=acosh(abs(R)/sqrt(abs(Q*Q*Q)))/3.;
                    T=sign(R)*sqrt(abs(Q))*cosh(fi);
                    *root1=-2.*T-a/3.;
                    *root2=T-a/3.+Im*sqrt(3.*abs(Q))*sinh(fi);
                    *root3=T-a/3.-Im*sqrt(3.*abs(Q))*sinh(fi);
                }
                else
                {
                    fi=asinh(abs(R)/sqrt(abs(Q*Q*Q)))/3.;
                    T=sign(R)*sqrt(abs(Q))*sinh(fi);
                    *root1=-2.*T-a/3.;
                    *root2=T-a/3.+Im*sqrt(3.*abs(Q))*cosh(fi);
                    *root3=T-a/3.-Im*sqrt(3.*abs(Q))*cosh(fi);
                }
            }
        }
    }

}

double sign(double x)
{
    return (x<0)?-1:1;
}

