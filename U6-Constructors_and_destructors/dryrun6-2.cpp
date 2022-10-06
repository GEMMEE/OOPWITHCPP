//What will happen when the following program is run?

#include <iostream>
using namespace std;

class A
{
	int x;
public:
	A(int d)
	{
		x = d;
	}
	~A()
	{
		cout << x;
	}
};

int main()
{
	A a(50), b(60);
	
	for (int i = 1; i <= 10; i++)
	{
		A y(i);
	}
	A c(70);

	return 0;
}

/* I think the output woud be
-------------------------------------
10987654321706050
-------------------------------------
I would update this if I'm wrong */

/* Yeah, guys I was wrong the actual 
output happen to be
-------------------------------------
12345678910706050
-------------------------------------
it seems the control exits the block
of for loop for each iteration- no big deal*/
