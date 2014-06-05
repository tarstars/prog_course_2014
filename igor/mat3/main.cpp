#include "Coeff.h"
#include "mat3.h"
#include "Tens4.h"
#include "util.h"
#include "Vec3.h"
#include "poly.h"
#include <stdlib.h>

int main()
{
// Tens4 ten(Coeff::paratellurite());
// Vec3 dir(1, 1, 0);
// Mat3 chr = christ(ten, dir); //todo

    //Poly pol = charPoly(chr); //todo
    complex<double> r1, r2, r3;

    Mat3 m;
    Poly pol;

    for(int i=0;i<3;++i)
        for(int j=0;j<3;++j)
        m.Set(i,j,rand()%10);

    cout << m;
    pol=charPoly(m);
    cout << pol << endl;

    try
    {
        pol.Roots(&r1,&r2,&r3);
        cout << r1 << " " << r2 << " " << r3 << endl;
    }
    catch(const char* msg)
    {
        cout << msg;
    }
}

