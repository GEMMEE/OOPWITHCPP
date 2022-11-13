/**
 * purpose: Find the error in the following program
 * author: Jaba
 * date: Nov 13, 2022
*/

// #include <iostream>
// using namespace std;

// class faculty
// {
//     private:
//     int fid;
//     char name[20];
//     void getdata()
//     {
//         cout << "Enter faculty id :- \t";
//         cin >> fin;
//         cout << "Enter name :- \t";
//         cin >> name;
//     }
// };
// class details : faculty
// {
//     public:
//     int age, exp;
//     void getdetails()
//     {
//         getdata();
//         cout << "Enter age :- \t";
//         cin >> age;
//         cout << "Enter year of exp. :- \t";
//         cin >> exp; 
//     }
//     void display()
//     {
//         cout << "\n\n" << "faculty id \t" << fid << endl;
//         cout << "Name of faculty \t" << name << endl;
//         cout << "Faculty age \t" << age << endl;
//         cout << "faculty year of exp \t" << exp << endl;
//     }
// };

// int main()
// {
//     details m;
//     m.getdetails();
//     m.display();
//     return 0;
// }


//The problem in the above code is that the child class is calling functions and data members
//that are private in the parent class, which are never inherited. So, one solution would be
// changing the access specifier in parent class to protected or public so we can access them
// in the child class.

#include <iostream>
using namespace std;

class faculty
{
    protected:
    int fid;
    char name[20];
    public:
    void getdata()
    {
        cout << "Enter faculty id :- \t";
        cin >> fid;
        cout << "Enter name :- \t";
        cin >> name;
    }
};
class details : faculty   // by default the inheritance mode will be private.
{
    public:
    int age, exp;
    void getdetails()
    {
        getdata();
        cout << "Enter age :- \t";
        cin >> age;
        cout << "Enter year of exp. :- \t";
        cin >> exp; 
    }
    void display()
    {
        cout << "\n\n" << "faculty id \t" << fid << endl;
        cout << "Name of faculty \t" << name << endl;
        cout << "Faculty age \t" << age << endl;
        cout << "faculty year of exp \t" << exp << endl;
    }
};

int main()
{
    details m;
    m.getdetails();
    m.display();
    return 0;
}

/*---------------------output---------------------
Enter faculty id :-     12
Enter name :-   Jaba
Enter age :-    23
Enter year of exp. :-   0


faculty id      12
Name of faculty         Jaba
Faculty age     23
faculty year of exp     0
------------------------------------------------------*/