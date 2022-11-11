#include <iostream>

using namespace std;
// SINGLE INHERITANCE : PRIVATE
class B
{
    int a;  //private; not inheritable
public:
    int b;  //public; ready for inheritance
    void get_ab();
    int get_a(void);
    void show_a(void);
};

class D : private B      //private derivation
{
    int c;
public:
    void mul (void);
    void display(void);
};

//---------------------------------------------------------------------------------------------
void B ::get_ab(void)
{
    cout << "Enter values for a and b: ";
    cin >> a >> b;
}

int B :: get_a()
{
    return a;
}

void B :: show_a(void)
{
    cout << "a = " << a << "\n";
}

void D :: mul()
{
    get_ab();
    c = b * get_a();  // 'a' cannot be used directly
}

void D :: display()
{
    show_a();            // outputs value of 'a'
    cout << "a = " << get_a() << "\n";
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n\n";
}
//------------------------------------------------------------------------------------------------------

int main()
{
    D d;

    // d.get_ab();  WON'T WORK BECAUSE get_ab() is a private member of D
    d.mul();
    // d.show_a(); WON'T WORK BECAUSE show_a() is a private member of D
    d.display();

    // d.b = 20;   WON'T WORK BECAUSE b is privately inherited
    d.mul();
    d.display();

    return 0;
}