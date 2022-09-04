#include <iostream>
using namespace std;

int main()
{
	float a = 12.2;
	if (a == 12.2)
		cout << "equal" << endl;
	else cout << "not equal" << endl;

	cout << "YOU MIGHT SAY WHAT THE HECK IS HAPPENING?\n" 
		 << "a = " << a << endl
		 << "DON'T BE SURPRISED!\n";

// Most floating point values have no exact binary represenation and 
// have a limited precision. This means different compilers and CPU
// architectures store the temporary results at different precisions,
// so results will differ depending on the details of your environment.
// TRY this instead :) if (a == 12.2f) or if (a == (float)12.2)
// This is why floating point comparisons in if condition fails!

	return 0;
}
