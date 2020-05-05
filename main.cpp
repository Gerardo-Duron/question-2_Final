// Gerardo Duron 5/04/2020 
// Class: 1437 Fundamentals II  Teacher: Dr. T

#include <iostream>
#include <math.h>
using namespace std;

string red = "\x1b[31m"; // setting the color changes
string blue = "\x1b[34m";
string green = "\x1b[36m";
string reset = "\x1b[0m";


class square
{
  private:
    double side; // side variable 
  
  public:
    square()
    {
      side = 0.0;
      
    
    }

  square(double side);
  
  void setSide(double s1) {side = s1; }
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
  string unit = " ";
  cout << "What is the Units of Measure for the Square? ";
  cin >> unit;

  square s1;
  s1.setSide(5.0); // setting the side of square 1
  cout << red << "The Side of Square 1 is: " << blue << s1.getSide()
   << " " << unit << endl;
  cout << red << "The Area of Square 1 is: " << blue << s1.getArea() 
  << " " << unit << green << endl;
  cout << "\n";
  s1.printShape();

  string unit1 = " ";
  cout << reset << "\nWhat is the Units of Measure for the Square? ";
  cin >> unit1;

  square s2;
  s2.setSide(7.4); // setting the side of square 2 
  cout << red << "\nThe Side of Square 2 is: " << blue << s2.getSide() 
  << " " << unit1 << endl;
  cout << red << "The Area of Square 2 is: " << blue << s2.getArea() 
  << " " << unit1 << green << endl;
  cout << "\n";
  s2.printShape();

}