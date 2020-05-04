// Gerardo Duron 5/04/2020 
// Class: 1437 Fundamentals II  Teacher: Dr. T

#include <iostream>
#include <math.h>
using namespace std;

class square
{
  private:
    double side1, side2, height;
  public:
    square()
    {
      side1 = 0.0;
      side2 = 0.0;
      height = 0.0;
    }

  square(double a):side1(a) {}
  void setSide1(double s1) {side1 = s1; }
  void setSide2(double s2) {side2 = s2; }
  void getSide2() const {return side2; }
  void getSide1() const { return side1; }
  double getArea() const
  {
  return (pow(side1,2));
  }
  void printShape()
  {
    for (int row=0;row<height;++row)
      {
        for (int col= height - row; col > 0; --col)
        {
          cout << " ";
        }
        for (int col=0; col < (side1 +2 * row); ++col)
        {
          cout << "*";
        }
        cout << endl;
      }
  }
};
//int main() {
  //std::cout << "Hello World!\n";
//}