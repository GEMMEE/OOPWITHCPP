#include <iostream>
#include <cstdarg>

using namespace std;

/* A C++ function can have an open parameter list by the use of ellipses
   in the prototype as shown below. 

		void do_something (list_of_arguments, ...);

   Functions using ellipses must have one or more declared arguments
   provided in the list_of_arguments. However in C, an empty parentheses
   implies any number of arguments. Use of such functions which support
   variable number of arguments would require the inclusion of the haader
   file "cstdarg" in C++.

*/

int findmaximum (int count, ...)
{
	int max, value;
	va_list list;    //declare variable argument list

	va_start (list, count);  //start accessing variable list

	max = va_arg(list, int); //extract the first element of list
	for (int arg = 1; arg < count; ++arg)
	{
		value = va_arg(list, int);  //extract each successive element
		if (max < value)
			max = value;
	}
	va_end (list);

	return max;
}

int main()
{
	cout << findmaximum (6, 23, 34, 54, 643, 65, 999) << endl;
	cout << findmaximum (3, 87, 34, 53) << endl;

// If we pass heterogenous types of argument to the list, we will get
// an unexpected output as the compiler does not perform the type checking.
// For example look at the output of these:
	cout << findmaximum (54, 2.2, 34, 10) << endl;
	cout << findmaximum (11, 2, 3, 'A') << endl;
// This calls pass the compiler's test and will not give any errors.
// So, such functions should be used with extreme caution.

	return 1;
}
