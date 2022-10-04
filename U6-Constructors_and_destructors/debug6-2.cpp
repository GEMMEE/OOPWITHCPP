//Find the error in the following program
/*
#include <iostream>
using namespace std;

class dynamic
{
  int *p;
  public:
    dynamic()
    {
      p = int;
      *p = 10;
    }
    dynamic(int v)
    {
      p = int;
      *p = v;
    }
    int display()
    {
      return (*p);
    }
};
int main()
{
  dynamic p1, p2(9);
  cout << "object p1 is: ";
  cout << p1.display();
  cout << "\nobject p2 is: " << p2.display() << "\n";
}
*/

#include <iostream>
using namespace std;

class dynamic
{
  int *p;
  public:
    dynamic()
    {
      p = new int;
      *p = 10;
    }
    dynamic(int v)
    {
      p = new int;
      *p = v;
    }
    int display()
    {
      return (*p);
    }
};
int main()
{
  dynamic p1, p2(9);
  cout << "object p1 is: ";
  cout << p1.display();
  cout << "\nobject p2 is: " << p2.display() << "\n";
}