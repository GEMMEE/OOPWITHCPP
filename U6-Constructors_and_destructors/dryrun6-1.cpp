//What will happen when the following program is run?

#include "iostream"
using namespace std;

class construct
{
	int p, q;
	public:
	construct(int x, int y)
	{
		p = x;
		q = y;
	}
	void Display()
	{
	cout << p << "\n" << q << "\n";
	}
};

int main()
{
	construct item1(10, 20), item2(30, 40);

	item1.Display();
	item2.Display();
	return 0;
}

/* My guess before running it would be
---------------------------------------
10
20
30
40
---------------------------------------
I would update this if the output is not
what I expected it to be when I run the
...hold on
*/
