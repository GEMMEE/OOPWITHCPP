// IMPLEMENTATION OF DESTRUCTORS
/************  Note *************
 * A destructor is used to destroy the object that have been created by a constructor.
 * Like a constructor, the destructor is a member function whose name is the same as 
 * the class name but it is preceded by a tilde.
 * A destructor never takes any argument nor does it return any value. It will be    
 * invoked implicitly by the compiler upon exit from the program(or block or function 
 * as the case may be) to clean up storage that is no longer accessible.
 * 
 * Whenever new is used to allocate memory in the constructors, we should use delete 
 * to free that memory. This is required because when the pointers to objects go out
 * of scope, a destructor is not called implicitly.
 * 
 * In the program below, destructor has been invoked implicitly by the compiler.
 **********************************/

#include <iostream>
using namespace std;

int count = 0;

class test
{
  public:
    test()
    {
      count++;
      cout << "\nConstructor Msg: Object number " << count << " created..";
    }
    ~test()
    {
      cout << "\nDestructor Msg: Object number " << count << " destroyed..\n";
      count--;
    }
};

int main()
{
  cout << "Inside the main block..";
  cout << "\nCreating first object T1..";

  test T1;

  {
    //Block 1
    cout << "\n\nInside Block 1..";
    cout << "\nCreating two more objects T2 and T3..";
    test T2, T3;
    cout << "\nLeaving Block 1..\n\n";
  }

  cout << "\nBack inside the main block..";

  return 0;
}

/***************** OUTPUT **********************
 Inside the main block..
 Creating first object T1..
 Constructor Msg: Object number 1 created..

 Inside block 1..
 Creating two more objects T2 and T3..
 Constructor Msg: Object number 2 created..
 Constructor Msg: Object number 3 created..
 Leaving block 1..

 Destructor Msg: Object number 3 destroyed..
 Destructor Msg: Object number 2 destroyed..
 Back inside the main block..
 Destructor Msg: Object number 1 destroyed..
 *************** END ****************************/