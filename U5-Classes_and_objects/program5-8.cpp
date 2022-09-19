//Friend Function
/*
================ NOTES ======================
A friend function possesses the ff special characteristics:

* It is not in the scope of the class to which it has been declared as a friend.

* Since it is not in the scope of the class, it cannot be called using the object of that class.

* It can be invoked like a normal function without the help of any object.

* Unlike member functions, it cannot access the member names directly and 
  has to use an object name and dot membership operator with each member name.

* It can be declared either in the public or the private part of a class without affecting its meaning.

* Usually, it has the objects as arguments.

* It is often used in operator overloading. 

NB: Member functions of one class can be a friend functions of another class. In such cases, they are defined using scope resolution operator as shown below:

  class X
  {
    ....
    ....
    int fun1();    //member function of X
    ....
  };

  class Y
  {
    ....
    ....
    friend int X :: fun1();  // fun1() of X is friend of Y
    ....
  };

We can also declare all the member functions of one class as the friend functions of another class. In such cases, the class is called a friend class.

  class Z
  {
    ....
    friend class X;  // all members functions of X are friends to Z
    ....
  }

*/

#include <iostream>
using namespace std;

class sample
{
  int a;
  int b;

  public:
  void setvalue() {a = 25; b = 40;}
  friend float mean(sample s);
};

float mean(sample s)
{
  return float(s.a + s.b) / 2.0;
}

int main()
{
  sample X;   // object X
  X.setvalue();
  cout << "Mean value = " << mean(X) << endl;

  return 0;
}