/**
 * @file program7-2.cpp - Overloading binary + operator
 * @author Jaba (jr.gamachu@gmail.com)
 * @date 2022-10-06
 * 
 */

#include <iostream>
using namespace std;

class complex
{
  float x;        //real part
  float y;        //imaginary part
public:
  complex(){}    //constructor 1
  complex(float real, float imag)  //constructor 2
  { x = real;  y = imag; }
  complex operator+(complex);
  void display(void);
};

complex complex :: operator+(complex c)
{
  complex temp;            //temporary
  temp.x = x + c.x;        //these are
  temp.y = y + c.y;        //float additions
  return(temp);
}

void complex :: display(void)
{
  cout << x << " + j" << y << "\n";
}

int main()
{
  complex c1, c2, c3;          //invokes constructor 1
  c1 = complex (2.5, 3.5);     //invokes constructor 2
  c2 = complex (1.6, 2.7);

  c3 = c1 + c2;

  cout << "c1 = "; c1.display();
  cout << "c2 = "; c2.display();
  cout << "c3 = "; c3.display();

  return 0;
}


/*
output
-----------------------------------------
c1 = 2.5 + j3.5
c2 = 1.6 + j2.7
c3 = 4.1 + j6.2
-----------------------------------------
*/