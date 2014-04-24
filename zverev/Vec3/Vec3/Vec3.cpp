#include "Vec3.h"

#include <iostream>
#include <cmath>

using namespace std;

Vec3::Vec3(float xx, float yy, float zz) : x(xx), y(yy), z(zz) {
}

Vec3::Vec3(const Vec3& a) : x(a.x), y(a.y), z(a.z) {}

Vec3&
Vec3::operator=(const Vec3& a) {
  x = a.x;
  y = a.y;
  z = a.z;
  return *this;
}



float rad(Vec3& a) {
	return sqrt(a.x*a.x + a.y*a.y + a.z*a.z);
}

float At(Vec3& a, int q) {

	switch (q)
	{
		case 1:
			return a.x;
		break;

		case 2:
			return a.y;
		break;

		case 3:
			return a.z;
		break;
	}
}

void Set(Vec3& a, int q, float val) {
	switch (q)
	{
		case 1:
			 a.x = val;
		break;

		case 2:
			 a.y = val;
		break;

		case 3:
			 a.z = val;
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