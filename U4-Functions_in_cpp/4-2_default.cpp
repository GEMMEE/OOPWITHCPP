#include <iostream>

using namespace std;
/*
		==== DEFAULT ARGUMENTS ====

	#C++ allows to call a function without specifying all its arguments
	 where the default values are specified at the time of function
	 declaration.
	
	#Only trailing arguments can have default values and therefore we
	 must add defaults from right to left.

	#The following declarations are illegal:
		int mul(int i = 5, int j);
		int mul(int i = 0, int j, int k = 0);

	#Advantages of providing default arguments are:
		@ We can use default arguments to add new parameters to the
		  existing functions.
		@ Default arguments can be used to combine similar functions
		  into one.
	
*/
int main()
{
	float amount;
	float value(float p, int n, float r = 0.15);  //prototype
	void printline(char ch = '*', int len = 40);  //prototype

	printline();                //use default values for arguments

	amount = value(5000.00, 5);    //default for 3rd argument
	cout << "\n Final Value = " << amount << "\n\n";

	amount = value (10000.00, 5, 0.30); //pass all arguments explicitly

	cout << "\n Final Value = " << amount << "\n\n";

	printline('=');  //use default value for second argument

	return 0;
}

float value (float p, int n, float r)
{
	int year = 1;
	float sum = p;

	while (year <= n)
	{
	sum = sum * (1 + r);
	year = year + 1;
	}
	return (sum);
}

void printline(char ch, int len)
{
	for (int i = 1; i <= len; i++)
		printf("%c", ch);
	cout << endl;
}

