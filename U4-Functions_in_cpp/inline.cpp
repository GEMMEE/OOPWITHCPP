#include <iostream>
using namespace std;

/*
        		==== INLINE FUNCTIONS ====

	#Inline functions make a program run faster because the overhead of
	 a function call and return is eliminated. 

	#However, it makes the program to take up more memory because the
	 statements that define the inline function are reproduced at each
	 point where the function is called.

	#So, a trade-off becomes necessary! An inline function can increase
	 the function size so much that it may not fit in the cache.
	
	#Inline function is a C++ solution to eliminate the cost of calls to
	 small functions. In C, macro definitions do the same but they have a
	 drawback of being prone to errors as they are not checked for error
	 during compilation.

	#The inline function is defined as follows:
			inline function-header { function-body }

	#The inline keyword merely sends a request, not a command, to a 
	 compiler. So, the compiler may ignore this request if the function
	 definition is too long or complicated and compile it as a normal
	 function.

	#Some situations where the inline expansion may not work are:
		* For functions returning values, if a loop, a switch, or a goto
		  exists.
		* For functions not returning values, if a return statement exists.
		* If functions contain static variables.
		* If inline functions are recursive. 
*/

inline float mul(float x, float y)
{
	return x*y;
}
inline double div(double p, double q)
{
	return p/q;
}

int main()
{
	float a = 12.4;
	float b = 6.2;

	cout << "a * b = " << a*b << endl;
	cout << "a / b = " << a/b << endl;

	return 0;
}

