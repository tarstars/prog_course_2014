#include "util.h"

#include "mat3.h"
#include "poly.h"

Mat3 christ(Tens4 const &tens, Vec3 const &dir)
{
    Mat3 m;

    return m;
}

Poly charPoly(Mat3 const &m)
{
    double a=0.,b=0.,c=0.;  // -x^3 + a*x^2 + b*x +c

    for(int i=0; i<3; ++i)    a+=m.At(i,i);

    for(int i=0; i<3; ++i)
    {
        b-=m.At(i,i)*m.At((i+1)%3,(i+1)%3);
        //b+=m.At(0,i)*m.At(1,(3+i-1)%3)*m.At(2,(3+i-2)%3)/m.At(i,i);
    }
    b+=m.At(1,2)*m.At(2,1)+m.At(0,1)*m.At(1,0)+m.At(0,2)*m.At(2,0);

    for(int i=0; i<3; ++i)
    {
        c+=m.At(0,i)*m.At(1,(i+1)%3)*m.At(2,(i+2)%3);
        c-=m.At(0,i)*m.At(1,(3+i-1)%3)*m.At(2,(3+i-2)%3);
    }

    Poly p(c,b,a,-1.);
    return p;
}
