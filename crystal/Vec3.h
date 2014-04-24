#pragma once

#include <iostream>

using namespace std;

class Vec3 {
  double x, y, z;
public:
 Vec3():x(0), y(0), z(0) {}
  Vec3(double x, double y, double z);
  //Vec3(const Vec3& a);
  //Vec3& operator=(const Vec3& a);

  friend const Vec3 operator+(const Vec3& a, const Vec3& b);
  friend std::ostream& operator<<(std::ostream& os, const Vec3& a);
  double At(int q);
  void Set(int q, double val);
  double rad() const;
};





