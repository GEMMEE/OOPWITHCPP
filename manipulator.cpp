#include <iostream>
#include <iomanip>   //for setw
using namespace std;

//FEW NOTES ON MANIPULATORS
	/*
	Manipulators are operators that are used to format the data display.
	eg. endl, setw, fixed and setprecision() are manipulators.
	#The endl manipulator, when used in an output statement, causes a linefeed
	 to be inserted. It has the same effect as "\n".
	*/
int main()
{
	int Basic = 950, Allowance = 95, Total = 1045;

//setw specifies a field width and the value/string is right justified 
//within the field
	cout << setw(10) << "Basic" << setw(10) << Basic << endl
		 << setw(10) << "Allowance" << setw(10) << Allowance << endl
		 << setw(10) << "Total" << setw(10) << Total << endl;
	cout << setw(10) << "Sum" << fixed << setprecision(2) 
		 << float(Basic) + Allowance << endl;
	return 0;
}
