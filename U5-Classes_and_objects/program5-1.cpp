//Class Implementation

#include <iostream>

using namespace std;

class item
{
  int number;   // private by default
  float cost;   //private by default

  public:
    void getdata(int a, float b); //prototype declaration to be defined outside the class

    void putdata(void)  //function defined inside class (it's treated as an inline function)
    {
      cout << "number: " << number << "\n";
      cout << "cost: " << cost << "\n";
    }
};

//member function definition
void item :: getdata(int a, float b) //use membership label (here it's item)
{
  number = a;  //private variables direcly used
  cost = b;
}

//main program
int main()
{
  item x;  //create an object x

  cout << "\nObject x \n";

  x.getdata(100, 299.34);  //call member function
  x.putdata();         //call member function

  item y;  //create another object y

  cout <<"\nObject y " << "\n";

  y.getdata(200, 399.32);
  y.putdata();

  return 0;
}
