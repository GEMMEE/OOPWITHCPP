#include <iostream>

using namespace std;
// SINGLE INHERITANCE: PUBLIC
class B
{
    int a;  //private; not inheritable
public:
    int b;  //public; ready for inheritance
    void set_ab();
    int get_a(void);
    void show_a(void);
};

class D : public B      // public derivation
{
    int c;
public:
    void mul (void);
    void display(void);
};

//---------------------------------------------------------------------------------------------
void B :: set_ab(void)
{
    a = 5; b = 10;
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
    c = b * get_a();
}

void D :: display()
{
    cout << "a = " << get_a() << "\n";
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n\n";
}
//------------------------------------------------------------------------------------------------------

int main()
{
    D d;

    d.set_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b = 20;
    d.mul();
    d.display();

    return 0;
}