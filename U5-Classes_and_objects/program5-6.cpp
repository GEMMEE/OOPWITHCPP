//Arrays of Objects
/*
=============== NOTES =======================
#Arrays of objects
-> are arrays of variables that are of the type class.
-> behave like any other array
-> are stored in the memory in the same way as a multi-dimensional array
*/

#include <iostream>

using namespace std;

class employee
{
  char name[30];
  float age;

  public:
  void getdata(void);
  void putdata(void);
};

void employee :: getdata(void)
{
  cout << "Enter name: ";
  cin >> name;
  cout << "Enter age: ";
  cin >> age;
}

void employee :: putdata(void)
{
  cout << "Name: " << name << "\n";
  cout << "Age: " << age << "\n";
}

const int size = 3;
int main()
{
  employee manager[size]; //array of manager

  for (int i = 0; i < size; i++)
  {
    cout << "\nDetails of manager " << i + 1 << "\n";
    manager[i].getdata();
  }
  cout << endl;

  for (int i = 0; i < size; i++)
  {
    cout << "\nManager " << i+1 << endl;
    manager[i].putdata();
  }

  return 0;
}
