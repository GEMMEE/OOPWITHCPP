//Static Member Function
/*
================ NOTES ===================
A member function that is declared static has the ff properties:
==> It can have access to only other static members(functions or variables) declared in the same class.

==> It can be called using the class name(instead of its objects) as follows:
    class-name :: function-name;
*/

#include <iostream>

using namespace std;

class test
{
  int code;
  static int count;   //static member variable

  public:
  void setcode(void)
  {
    code = ++count;
  }
  void showcode(void) //displays the code number of each object
  {
    cout << "object number: " << code << endl;
  }
  static void showcount(void)  // static member function
  {
    cout << "count: " << count << "\n";
    /*
    cout << "code: " << code << "\n";
    this will not work, because
    code is not static
    */
  }
};

int test::count;

int main()
{
  test t1, t2;

  t1.setcode();
  t2.setcode();

  test:: showcount();  //accessing static function

  test t3;
  t3.setcode();

  test ::showcount();

  t1.showcode();
  t2.showcode();
  t3.showcode();

  return 0;
}