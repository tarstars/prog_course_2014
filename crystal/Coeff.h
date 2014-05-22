class Coeff
{
 public:
  float c11,c12,c13,c33,c44,c66,c16;

 Coeff(float d11,float d12, float d13, float d33, float d44, float d66, float d16):
  c11(d11), c12(d12), c13(d13), c33(d33), c44(d44), c66(d66), c16(d16){}

  static Coeff
    paratellurite()
  {
    return Coeff(5.6,5.1,2.2,10.6,2.65,6.6, 0);
  }
};
