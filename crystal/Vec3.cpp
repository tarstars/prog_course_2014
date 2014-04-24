#include "Vec3.h"

#include <iostream>
#include <cmath>

using namespace std;

Vec3::Vec3(double xx, double yy, double zz) : x(xx), y(yy), z(zz) {
}

//Vec3::Vec3(const Vec3& a) : x(a.x), y(a.y), z(a.z) {}

/*
Vec3&
Vec3::operator=(const Vec3& a) {
  x = a.x;
  y = a.y;
  z = a.z;
  return *this;
  }*/



double Vec3::rad() const {
  return sqrt(x*x + y*y + z*z);
}

double Vec3::At(int q) {
  switch (q)
    {
    case 1:	return x;
    case 2:	return y;
    case 3:	return z;
    }
}

void Vec3::Set(int q, double val) {
	switch (q)
	{
		case 1:
			 x = val;
		break;

		case 2:
			 y = val;
		break;

		case 3:
			 z = val;
		break;
	}
}

const Vec3 operator+(const Vec3& a, const Vec3& b) {
	return Vec3(a.x + b.x, a.y + b.y, a.z + b.z);
}

ostream&
operator<<(ostream& os, const Vec3& a) {
	return os << a.x << " " << a.y << " " << a.z << endl;
}
