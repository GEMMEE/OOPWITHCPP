//What will happen when the following program is run?

#include <iostream>
using namespace std;

class demo
{
	static int cnt;
	int data;
public:
	demo(int d)
	{
		data = d;
		cnt++;
	}
	~demo()
	{
		cnt--;
	}
	void show()
	{
		cout << "\nValues " << data << "\t" << cnt;
	}
	static void fun(demo & ob)
	{
		demo temp(ob.data);
		temp.show();
		ob.show();
	}
};

int demo::cnt;
int main()
{
	demo ob1(20);
	ob1.show();
	demo::fun(ob1);
	ob1.show();
	demo ob2(30);
	ob1.show();
	ob2.show();

	return 0;
}

/*Let me guess the output before running it
-------------------------------------------

Values 20	1
Values 20	2
Values 20	2
Values 20	2
Values 20	3
Values 30	3
--------------------------------------------
Honestly, I know this is not correct because of
the destructor. But let me see it and come again*/

/*I expected it, the correct output is
______________________________________________

Values 20	1
Values 20	2
Values 20	2
Values 20	1
Values 20	2
Values 30	2
_______________________________________________
Of course there is no newline after the last 2
Easy peasy, understood it! */
