#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Vec2 {
  T x, y;
public:
  Vec2(T xx, T yy) : x(xx), y(yy) {
  }

  friend ostream& operator<<(ostream& os, const Vec2& r) {
    return os << r.x << " " << r.y;
  }

  Vec2 operator+(const Vec2& r) {
    return Vec2(x+r.x, y+r.y);
  }
};

int main() {
  Vec2<string> a("мама мыла ", "сестра била ");
  Vec2<string> b("раму", "брата");
  
  Vec2<string> c = a + b;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "a + b = c = " << c << endl;
}
