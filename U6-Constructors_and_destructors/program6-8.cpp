//MEMORY ALLOCATION TO AN OBJECT USING DESTRUCTOR
#include <iostream>
using namespace std;

class test
{
  int *a;
  public:
    test (int size)
    {
      a = new int[size];
      cout << "\n\nConstructor Msg: Integer array of size " << size << " created..";
    }
    ~test()
    {
      delete a;
      cout << "\n\nDestructor Msg: Freed up the memory allocated for integer array\n";
    }
};

int main()
{ 
  int s; 
  cout << "Enter the size of the array..";
  cin >> s;
  cout << "\n\nCreating an object of test class..";
  test T(s);
  cout << "\n\nPress any key to end the program..";

  return 0;
}

/*************** output **********************
 Enter the size of the array..5
 Creating an object of test class..
 Constructor Msg: Integer array of size 5 created..
 Press any key to end the program..
 Destructor Msg: Freed up the memory allocated for integer array
 **********************************************/