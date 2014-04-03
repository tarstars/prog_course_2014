#include "CImg.h"
using namespace cimg_library;
int main() {
  int n = 512;

  CImg<unsigned char> image(n, n, 1, 3, 0);
  const unsigned char red[] = { 255,0,0 }, green[] = { 0,255,0 }, blue[] = { 0,0,255 };

  for(int p = 0; p < n; ++p) {
    for(int q = 0; q <= p; ++q) {
      int val = 0;
      if (((p-q) & q) == 0) {
	val = 255;
      }
      image.atXY(q, p, 0, 0) = val;
      image.atXY(q, p, 0, 1) = val;
    }
  }

  CImgDisplay main_disp(image,"Click a point");
  while (!main_disp.is_closed()) {
    main_disp.wait();
  }

  image.save("serp.png");

  return 0;
}
