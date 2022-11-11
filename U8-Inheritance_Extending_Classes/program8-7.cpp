#include <iostream>
using namespace std;

// CONSTRUCTORS IN DERIVED CLASS

class alpha
{
    int x;
    public:
    alpha(int i)
    { 
        x = i;
        cout << "alpha initialized \n";
    }
    void show_x(void)
    {
        cout << "x = " << x << "\n";
    }
};

class beta
{
    float y;
    public:
    beta(float j)
    {
        y = j;
        cout << "beta initialized \n";
    }
    void show_y(void)
    {
        cout << "y = " << y << "\n";
    }
};

class gamma : public beta, public alpha  //multiple inheritance
{
    int m, n;
    public:
    gamma(int a, float b, int c, int d):
    alpha(a), beta(b)
    {
        m = c;
        n = d;
        cout << "gamma initialized \n";
    }
    void show_mn(void)
    {
        cout << "m = " << m << "\n"
            << "n = " << n << "\n";
    }
};

int main()
{
    gamma g(5, 10.75, 20, 30);
    cout << "\n";
    g.show_x();
    g.show_y();
    g.show_mn();

    return 0;
}

/*
---------------OUTPUT-----------------
beta initialized 
alpha initialized 
gamma initialized 

x = 5
y = 10.75
m = 20
n = 30
--------------------------------------

NOTE: 
    beta is initialized first, although it appears second in the derived constructor. This is
    because it has been declared first in the derived class header line. Also, note that alpha(a)
    and beta(b) are function calls. Therefore, the parameters should not include types.
*/