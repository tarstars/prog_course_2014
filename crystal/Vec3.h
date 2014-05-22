#include <iostream>

using namespace std;

class Vec3 {

public:
float x, y, z;

public:
	Vec3(float x, float y, float z);
	Vec3(const Vec3& a);
	Vec3& operator=(const Vec3& a);

	friend const Vec3 operator+(const Vec3& a, const Vec3& b);
	friend std::ostream& operator<<(std::ostream& os, const Vec3& a);
	friend float At(Vec3& a, int q);
	friend void Set(Vec3& a, int q, float val);
	friend float rad(Vec3& a);
};





