//Deferencing Operators
/*
The dereferencing operator ->* is used to access a member when we use pointers to both the object and the member.

The dereferencing operator .* is used when the object itself is used with the member pointer.

We can also design pointers to member functions which, then, can be invoked using the dereferencing operators in the main.

  (object-name .* pointer-to-member-function)(10);
  (pointer-to-object ->* pointer-to-member-function)(10);

  The precedence of () is higher than that of .* and ->*, so the parentheses are necessary.
*/
#include <iostream>
using namespace std;

class M
{
  int x;
  int y;

  public:
  void set_xy(int a, int b)
  {
    x = a;
    y = b;
  }
  friend int sum(M m);
};

int sum(M m)
{
  int M ::* px = &M :: x; // M::* means pointer to member of M class
  int M ::* py = &M :: y;  // &M::y means the address of the y member of M class
  M *pm = &m;
  int S = m.*px + pm ->*py;
  return S;
}

int main()
{
  M n;
  void (M :: *pf)(int, int) = &M :: set_xy;
  (n.*pf)(10, 20);

  cout << "SUM = " << sum(n) << "\n";
  M *op = &n;
  (op ->*pf)(30, 40);
  cout << "SUM = " << sum(n) << endl;

  return 0;
}