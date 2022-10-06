#include <iostream>
using namespace std;

//COULD YOU GUESS WHAT WILL HAPPEN WHEN THE FOLLOWING PROGRAM IS RUN?
int main()
{
	int i = 5;
	while(i)
	{
		switch(i)
		{
		default:
		case 4:
		case 5:
			break;
		case 1:
			continue;
		case 2:
		case 3:
			break;
		}
		i--;
	}
	cout << "i = " << i << endl;
	return 1;
}
// The continue statement applies only to loops, not to a switch statement.
// A continue statement inside a switch inside a loop cause the next loop
// iteration.
