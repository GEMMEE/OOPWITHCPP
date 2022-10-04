// debug the following program
/*
#include <iostream>
using namespace std;
class des
{
     public:
        des (int x)
        { 
          cout << "Start value " << x << endl;
        }
        ~des (int x)
        {
          cout << "hi";
        }
};
int main()
{
    des d1(9);
    return 0;
}
*/

#include <iostream>
using namespace std;
class des
{
     public:
        des (int x)
        { 
          cout << "Start value " << x << endl;
        }
        ~des () //destructor never take an argument
        {
          cout << "hi";
        }
};
int main()
{
    des d1(9);
    return 0;
}