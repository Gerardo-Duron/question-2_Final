// Gerardo Duron 5/04/2020 
// Class: 1437 Fundamentals II  Teacher: Dr. T

#include <iostream>
#include <math.h>
using namespace std;

string red = "\x1b[31m"; // setting the color changes
string blue = "\x1b[34m";
string green = "\x1b[36m";


class square
{
  private:
    double side; // side variable 
    string unit;
  public:
    square()
    {
      side = 0.0;
      unit = 0;
    
    }

  square(double side);
  
  void setSide(double s1) {side = s1; }
  void setUnit(string u) { unit = u; }
  double getUnit() const { return unit; }
  double getSide() const {return side; } //setting side of the square
  double getArea() const // to get area of shape
  {
  return (side * side); 
  }
  void printShape()
  {
    for (int row=1;row<side;++row)
      {
        for (int col=1; col <side+4 ; ++col) // added aditional side on the colum to make more of a square shape.
        {
          cout << "#";
        }
        cout << endl;
      }
  }
};
  
int main()
{
  square s1;
  s1.setSide(5.0); // setting the side of square 1
  cout << "What is the Units of Measure for the Square? ";
  cin >> s1.setUnit();
  cout << red << "The Sides of Square 1 are: " << blue << s1.getSide() << s1.getUnit() << endl;
  cout << red << "The Area of Square 1 is: " << blue << s1.getArea() << s1.getUnit() << green << endl;
  s1.printShape();

  square s2;
  s2.setSide(7.4); // setting the side of square 2 
  cout << red << "\nThe Sides of Square 2 are: " << blue << s2.getSide() << endl;
  cout << red << "The Area of Square 2 is: " << blue << s2.getArea()  << green << endl;
  s2.printShape();

}