/**
 * purpose: What will happen when the following program is run?
 * author: Jaba
 * date: Nov 13, 2022
*/

#include <iostream>
using namespace std;

class B
{
    int x;
    public:
    B() {cout << "1\t"; }
};
class D: public B
{
    int y;
    public:
    D() { cout << "2\t"; }
    D(int i) { cout << "3\t"; }
};
int main()
{
    B b;
    D d1;
    D d2(1);
}

/*------------------- My prediction(-) ---------------
1   2   3   -----------------------------------------*/

/*------------------- Actual output -------------------
1   1   2   1   3   --------------------------------*/