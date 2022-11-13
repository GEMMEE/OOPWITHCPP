/**
 * purpose: Find the error in the following program
 * author: Jaba
 * date: Nov 13, 2022
*/

// #include <iostream>
// using namespace std;

// class p
// {
//     public:int i;
// };

// class q : virtual public p
// {
//     public: int j;
// };

// class r: virtual public p
// {
//     public: int k;
// };

// class s: public p, public q, public r
// {
//     public: int mul;
// };

// int main()
// {
//     s ob1;
//     ob1.i = 10;
//     ob1.j = 20;
//     ob1.k = 30;

//     ob1.mul = ob1.i * ob1.j * ob1.k;
//     cout << "Mul is : " << ob1.mul << "\n";
//     return 0;
// }

// The bug caused is due multipath inheritance. We can avoid it by eithir adding virtual keyword or removing the 
// public p altogether from declaration part of class s.

#include <iostream>
using namespace std;

class p
{
    public:int i;
};

class q : virtual public p
{
    public: int j;
};

class r: virtual public p
{
    public: int k;
};

// class s: virtual public p, public q, public r  // public virtual p is also ok.
class s: public q, public r   //will also work because s is grandchild of p.
{
    public: int mul;
};

int main()
{
    s ob1;
    ob1.i = 10;
    ob1.j = 20;
    ob1.k = 30;

    ob1.mul = ob1.i * ob1.j * ob1.k;
    cout << "Mul is : " << ob1.mul << "\n";
    return 0;
}

/*---------------- output -----------------
Mul is : 6000
-------------------------------------------*/