#include <iostream>
#include "mat3.h"

using namespace std;

int main()
{
    Mat3 m,n,k;

    n.Set(1,2,5);
    m.Set(2,1,6);

    k=n-m;
    cout << k;
    k.T();
    cout << k;
    return 0;
}
