/******************COPY CONSTRUCTOR*******************************
A copy constructor takes a reference to an object of the same class as itself as an argument.

A reference variable is used as an argument to a copy constructor. We cannot pass the argument
by value to a copy constructor.

When no copy constructor is defined, the compiler supplies its own copy constructor.
******************************************************************/

#include <iostream>
using namespace std;

class code
{
	int id;
	public:
		code () {}          // constructor
		code (int a) {id = a;}  // constructor again
		code (code &x)        //copy constructor
		{
			id = x.id;            // copy in the value
		}
		void display(void)
		{
			cout << id ;
		}
};

int main()
{
	code A(100); 			// object A is created and initialized
	code B(A);            // copy constructor called
	code C = A;            // copy constructor called again

	code D;                // D is created, not initialized
	D = A;               // copy oonstructor not called

	cout << "\n id of A: ";  A.display();
	cout << "\n id of B: ";  B.display();
	cout << "\n id of C: ";  C.display();
	cout << "\n id of D: ";  D.display();
	cout << endl;
	return 0;
}

