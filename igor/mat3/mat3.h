#ifndef MAT3_H_INCLUDED
#define MAT3_H_INCLUDED

#include <iostream>

class Mat3
{
    double mat[3][3];
public:
    Mat3();
    Mat3(const Mat3&);
    double At(int, int) const;
    void Set(int, int, double);
    void T();

    friend std::ostream& operator<<(std::ostream&, const Mat3&);
    friend const Mat3 operator+(const Mat3&, const Mat3&);
    friend const Mat3 operator-(const Mat3&, const Mat3&);
    friend const Mat3 operator*(const Mat3&, const Mat3&);
   // friend const Mat3 operator-(const Mat3&, const Mat3&);
};


#endif // MAT3_H_INCLUDED
