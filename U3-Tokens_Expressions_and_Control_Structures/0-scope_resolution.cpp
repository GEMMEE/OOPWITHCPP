#include <iostream>

using namespace std;
//FEW NOTES ON SCOPE RESOLUTION OPERATOR
/*
	#A major application of scope resolution operator(::) is in the classes
	 to identify the class to which a member function belongs.

	#In C, the global version of a variable cannot be accessed from within the
	 inner block. C++ resolves this problem with a scope resolution operator, 
	 which can be used to uncover a hidden variable or the global version of a
	 variable.

	#Scope resolution operator(::) and few other operators like member access 
	 operators(. and .*), conditional operator(?:) and sizeof operator cannot
	 be overloaded in C++. Remember almost all operators with these exceptions
	 can be overloaded.
*/
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
