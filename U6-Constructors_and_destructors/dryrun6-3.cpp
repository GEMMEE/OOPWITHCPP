//What will happen when the following program is run?

#include <iostream>
using namespace std;

class pract
{
 	int a, b, c;
public:
	pract(int x, int y, int z)
	{
		a = x;
		b = y;
		c = z;
	}
	void show()
	{
		cout << "\nValues " << a << "\t" << b << "\t" << c;
	}
};

int main()
{
	pract Object(10, 20, 30);
	pract Object2 = Object;
	pract Object3 = Object2;
	Object3.show();

	return 0;
}

/* My initial guess of the output would be
------------------------------------------

Values 10	20	30
------------------------------------------
without newline at the end of 30. I would 
update this if I am wrong */
