#include <iostream>

using namespace std;

int m = 10; //global m

int main()
{
	int m = 20;  // m redeclared, local to main
	{
		int k = m;
		int m = 30;  // m declared again
					// local to inner block
		cout << "We are in an inner block \n";
		cout << "k = " << k << endl;
		cout << "m = " << m << endl;
//use scope resolution operator(::) to access the global version of 
//a variable from within the inner block
		cout << "::m = " << ::m << endl;
	}
	cout << "We are in the outer block \n";
	cout << "m = " << m << endl;
	cout << "::m = " << ::m << endl;

	return 0;
} 
