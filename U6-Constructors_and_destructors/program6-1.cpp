/* 
============ Notes on Constructors ===============

A constructor is a 'special' member function whose task is to initialize  the objects of its class. It's special because its name is the same as the class name.

The constructor is invoked whenever an object of its associated class is created. It is
called constructor because it constructs the values of data members of the class.

A constructor that accepts no parameters is called the default constructor. 
A constructor that can take arguments are called parameterized constructors.

Some special characteristics of constructor functions are:

1. They should be declared in the public section.
2. They are invoked automatically when the objects are created.
3. They do not have return types, not even void and therefore, and they cannot return values.
4. They cannot be inherited, though a derived class can call the base class constructor.
5. Like other C++ functions, they can have default arguments.
6. Constructors cannot be virtual.
7. We cannot refer to their addresses.
8. An object with a constructor(or destructor) cannot be used as a member of a union.
9. They make 'implicit calls' to the operators new and delete when memory allocation is required.
10. A constructor function can be defined as an inline function.
11. The parameters of a constructor can be of any type except that of the class to which it belongs.
12. However, a constructor can accept a reference to its own class as a parameter. In
    such cases, the constructor is called the copy constructor.
13. In case of parameterized constructors, initial values as arguments to the constructor function must be passed when an object is declared. This can be done in two ways:
* By calling the constructor explicitly, or
* By calling the constructor implicitly.

NB: When a constructor is declared for a class, initialization of the class becomes mandatory.

============================ End of the note ===================================
Below is a program that defines a class called Point that stores the x and y 
coordinates of a Point. The class uses parameterized constructor for initializing the 
class objects.
*/

#include <iostream>
using namespace std;

class Point
{
  int x, y;
  public:
    Point(int a, int b)  //inline parameterized constructor definition
    {
      x = a;
      y = b;
    }
  // Alterantively, we can declare the above constructor and define it outside the class
  // Point(int a, int b);  // constructor declared
  void display()
  {
    cout << "(" << x << "," << y << ")\n"; 
  }
};
//In case we only declare the constructor, here is how it'll be defined
//Point :: Point (int a, int b)
//{ x = a; y = b; }

int main()
{
  Point p1(1, 1);  //invokes parameterized constructor
  Point p2(5, 10);
  cout << "Point p1 = ";
  p1.display();
  cout << "Point p2 = ";
  p2.display();

  return (0);
}


