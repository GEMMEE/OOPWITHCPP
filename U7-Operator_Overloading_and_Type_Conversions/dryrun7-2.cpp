/**
 * purpose: What will happen when the ff program is run?
 * author: Jaba
 * date: Nov 13, 2022
*/

#include <iostream>
using namespace std;

 class demo
{
    int data;
public:
    demo(int d)
    {
        data = d;
    }
    void show()
    {
        cout << "\nValue = " << data;
    }
    friend void operator - (demo);
};
void operator - (demo d)
{
    d.data = -d.data;
    //d.show();       uncomment this and see the difference!
}

int main()
{
    demo ob(10);
    ob.show();
    -ob;
    ob.show();
    return 0;
}
  
/*------------------ My prediction(+) -------------------------

Value = 10
Value = 10 ------------------------------------------------*/
