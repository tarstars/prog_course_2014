#include "mat3.h"

using namespace std;

Mat3::Mat3()
{
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            mat[i][j]=0;
        }
    }
}

Mat3::Mat3(const Mat3& a)
{
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            mat[i][j]=a.mat[i][j];
        }
    }
}

ostream& operator<<(ostream& os, const Mat3& a)
{
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            os << a.mat[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

double Mat3::At(int p, int q)
{
    return mat[p][q];
}

void Mat3::Set(int p, int q, double val)
{
    mat[p][q]=val;
}

const Mat3 operator+(const Mat3& a, const Mat3& b)
{
    Mat3 ret;
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            ret.mat[i][j]=a.mat[i][j]+b.mat[i][j];
        }
    }
    return ret;
}

const Mat3 operator-(const Mat3& a, const Mat3& b)
{
    Mat3 ret;
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            ret.mat[i][j]=a.mat[i][j]-b.mat[i][j];
        }
    }
    return ret;
}


const Mat3 operator*(const Mat3& a, const Mat3& b)
{
    Mat3 ret;
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            for(int n=0;n<3;++n)
            {
                ret.mat[i][j]+=a.mat[i][n]*b.mat[n][j];
            }
        }
    }
    return ret;
}

void Mat3::T()
{
    double c;
    for(int i=1;i<3;++i)
    {
        for(int j=0;j<i;++j)
        {
            c=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=c;
        }
    }
}
