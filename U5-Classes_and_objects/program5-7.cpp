//Objects as arguments

/*
Like any other data type, an object may be used as a function argument. This can be done in two ways:
=> pass-by-value: a copy of the entire object is passed to the function
=> pass-by-reference: only the address of the object is transferredd to the function

=> An object can also be passed as an argument to
   a non-member function.
*/

#include <iostream>
using namespace std;

class mtime
{
  int hours;
  int minutes;

  public:
  void gettime(int h, int m)
  {
    hours = h; minutes = m;
  }
  void puttime(void)
  {
    cout << hours << " hours and ";
    cout << minutes << " minutes " << endl;
  }
  void sum(mtime, mtime); //declaration with objects as arguments
};

void mtime :: sum(mtime t1, mtime t2) //t1, t2 are objects
{
  minutes = t1.minutes + t2.minutes;
  hours = minutes / 60;
  minutes = minutes % 60;
  hours = hours + t1.hours + t2.hours;
}

int main()
{
  mtime T1, T2, T3;

  T1.gettime(2, 45);   // get T1
  T2.gettime(3, 30);   // get T2
  T3.sum(T1, T2);     // T3 = T1 + T2

  cout << "T1 = "; 
  T1.puttime();    //display T1
  cout << "T2 = "; 
  T2.puttime();    //display T2
  cout << "T3 = "; 
  T3.puttime();    //display T3

  return 0;
}
