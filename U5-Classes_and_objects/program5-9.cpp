//Using Friend Function to Add Data Objects of two Different Classes

#include <iostream>
using namespace std;

class ABC;  //Forward declaration

class XYZ
{
  int data;
  public:
  void setvalue(int value)
  {
    data = value;
  }
  friend void add(XYZ, ABC);   //Friend function declaration
};

class ABC
{
  int data;
  public:
  void setvalue(int value)
  {
    data = value;
  }
  friend void add(XYZ, ABC);   //Friend function declaration
};

void add(XYZ obj1, ABC obj2)  //Friend function definition
{
  cout << "Sum of data values of XYZ and ABC objects using friend function = " << obj1.data + obj2.data;
}

int main()
{
  XYZ X;
  ABC A;

  X.setvalue(5);
  A.setvalue(50);
  add(X, A);      //Calling friend function

  return 0;
}

/*
When the function add() is declared as a friend in XYZ for the first time, the compiler will not acknowlegde the presence of ABC unless its name is declared in the beginning as
    class ABC;
This is known as forward declaration.
*/