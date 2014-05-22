#include "Coeff.h"
#include "mat3.h"
#include "Tens4.h"
#include "util.h"
#include "Vec3.h"


int main() {
  Tens4 ten(Coeff::paratellurite());
  Vec3 dir(1, 1, 0);
  Mat3 chr = christ(ten, dir); //todo
  
  //Poly pol = charPoly(chr); //todo
  //complex<double> r1, r2, r3;
  //pol.Roots(&r1, &r2, &r3);
}

