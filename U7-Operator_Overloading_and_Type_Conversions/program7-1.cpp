/**
 * @file program7-1.cpp - overloading unary minus operator
 * @author Jaba (jr.gamachu@gmail.com)
 * @date 2022-10-06
 * 
 * @copyright Balagurusamy (c) 2022
 * 
 */

#include <iostream>
using namespace std;

class space
{
  int x;
  int y;
  int z;
public:
  void getdata(int a, int b, int c);
  void display(void);
  void operator-();         //overload unary minus
};

void space :: getdata (int a, int b, int c)
{
  x = a;
  y = b;
  z = c;
}

void space :: display(void)
{
  cout << "x = " << x << " ";
  cout << "y = " << y << " ";
  cout << "z = " << z << "\n";
}

void space :: operator-()
{
  x = -x;
  y = -y;
  z = -z;
}

int main()
{
  space S;
  S.getdata(10, -20, 30);
  cout << "S : ";
  S.display();

  -S;                          //activates operator-() function
  cout << "-S : ";
  S.display();

  return 0; 
}


/*
output:
____________________________________
 S : x = 10 y = -20 z = 30
-S : x = -10 y = 20 z = -30
____________________________________
Note:
Operator functions must be either nonstatic member functions or friend functions.

A basic difference between them is that a friend function will have only one argument
for unary operators and two for binary operators, whereas

A member function has no arguments for unary operators and one argument for binary 
operators. This is because the object used to invoke the member function is passed
implicitly and therefore is available for the member function. This is not the case 
with friend functions.

Arguments may be passed either by value or by reference.

It is possible to overload the above unary minus operator using a friend function as 
follows:

friend void operator-(space &s);  //declaration
void operator-(space &s)          //definition
{
  s.x = -s.x;
  s.y = -s.y;
  s.z = -s.z;
}

Note that the argument is passed by reference. It will not work if we pass argument by 
value because only a copy of the object that activated the call is passed to operator-().
Therefore, the changes made inside the operator function will not reflect in the called
object.
*/