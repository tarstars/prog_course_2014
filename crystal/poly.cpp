#include "poly.h"

using namespace std;

Poly::Poly()
{
    for(int i=0;i<4;++i)
    {
        c[i]=0.;
    }
}

Poly::Poly(complex <double> const& c0, complex <double> const & c1, complex <double> const & c2, complex <double> const & c3)
{
    c[0]=c0;
    c[1]=c1;
    c[2]=c2;
    c[3]=c3;
}

Poly::Poly(complex <double> *cc)
{
    for(int i=0;i<4;++i)
    {
      c[i]=cc[i]; //*cc++
    }
}

Poly::Poly(const Poly& p)
{
    for(int i=0;i<4;++i)
    {
        c[i]=p.c[i];
    }
}

ostream& operator<<(ostream& os, const Poly& p)
{
    os << p.c[3] << " * x^3 + " << p.c[2] << " * x^2 + " << p.c[1] << " * x + " << p.c[0];
    return os;
}

complex <double> Poly::At(int n)
{
    return c[n];
}

void Poly::Set(int n, complex <double> cc)
{
    c[n]=cc;
}
/*
Poly Poly::Canon()
{
    Poly ret;

    ret.c[3]=1.;
    ret.c[2]=0.;
    ret.c[1]=c[1]/c[3] - c[2]*c[2]/3./c[3]/c[3];
    ret.c[0]=2.*c[2]*c[2]*c[2]/27./c[3]/c[3]/c[3] - c[2]*c[1]/3./c[3]/c[3] + c[0]/c[3];

    return ret;
}
*/
void Poly::Roots(complex <double> *root1, complex <double> *root2, complex <double> *root3)
{
    complex <double> a,b,p,q,Q, Im;

    Im = complex<double>(0.0,1.0);

    p=c[1]/c[3] - c[2]*c[2]/3./c[3]/c[3];
    q=2.*c[2]*c[2]*c[2]/27./c[3]/c[3]/c[3] - c[2]*c[1]/3./c[3]/c[3] + c[0]/c[3];
    Q=p*p*p/27. + q*q/4.;
    a=pow(-q/2.+sqrt(Q) , 1./3.);

    b=-p/3./a;

    *root1=a+b - c[2]/3./c[3];
    *root2=-(a+b)/2.+Im*(a+b)/2.*sqrt(3.) - c[2]/3./c[3];
    *root3=-(a+b)/2.-Im*(a+b)/2.*sqrt(3.) - c[2]/3./c[3];
}
