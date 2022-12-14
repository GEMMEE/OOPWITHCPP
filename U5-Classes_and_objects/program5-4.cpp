//Static Class Member
/*
NB:
#A static member variable has the following special characteristics:
==> It is initialized to 0 when the first object of its class is created. 
==> No other initialization is permitted.
==> Only one copy of that member is created for the entire class and
==> It is shared by all the objects of that class, no matter how many objects are created.
==> It is visible only within the class, but
==> Its lifetime is the entire program.
==> The type and scope of each static member variable must be defined outside the class definition.
==> This is necessary because the static data members are stored separately rather than as a part of an object.
==> Since they are associated with the class itself rather than with any class object, they are also known as class variables.
==> While defining a static variable, some initial value can also be assigned to the variable.

Static variables are normally used to maintain values common to the entire class. eg. can be used as a counter
*/

#include <iostream>
using namespace std;

class item
{
  static int count;
  int number;

  public:
  void getdata(int a)
  {
    number = a;
    count++;
  }
  void getcount(void)
  {
    cout << "count: ";
    cout << count << "\n";
  }
};

int item :: count; //commenting this out will result in an error

int main()
{
  item a, b, c;  //count is initialized to zero

  a.getcount();   //display count
  b.getcount();
  c.getcount();

  a.getdata(100); //getting data into object a
  b.getdata(200); //getting data into object b
  c.getdata(300);  //getting data into object c

  cout << "\nAfter reading data " << "\n";

  a.getcount();   //display count
  b.getcount();
  c.getcount();

  return 0;
}