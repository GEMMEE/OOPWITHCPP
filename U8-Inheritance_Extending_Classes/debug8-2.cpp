/**
 * purpose: Find the error in the following program
 * author: Jaba
 * date: Nov 13, 2022
*/

// #include <iostream>
// using namespace std;

// class four_seater
// {
// public:
//     void Property()
//     {
//         cout << "It has space for four persons" << endl;
//     }
// };
// class four_wheeler
// {
// public:
//     void Property()
//     {
//         cout << "It runs on four tyres" << endl;
//     }
// };
// class Car: public four_seater, public four_wheeler
// {
// };
// int main()
// {
//     Car C1;
//     C1.four_seater;
//     C1.four_wheeler;
//     return 0;
// }


#include <iostream>
using namespace std;

class four_seater
{
public:
    void Property()
    {
        cout << "It has space for four persons" << endl;
    }
};
class four_wheeler
{
public:
    void Property()
    {
        cout << "It runs on four tyres" << endl;
    }
};
class Car: public four_seater, public four_wheeler
{
};
int main()
{
    Car C1;
    C1.four_seater::Property();
    C1.four_wheeler::Property();
    //C1.Property();  would cause ambiguity!
    return 0;
}

/*-----------------output------------------
It has space for four persons
It runs on four tyres
-------------------------------------------*/