#include <iostream>
using namespace std;
//FEW NOTES
//Advantages of new operator over the function malloc() are:
	/*
	#It automatically computes the size of the data object; we need
	 not use the operator sizeof
	#It automaticallu returns the correct pointer type, so that there
	 is no need to use the type cast.
	#It is possible to initialize the object while creating the memory
	 space
	#Like any other operator, new and delete can be overloaded
	*/

class sample
{
	private:
		int data1;
		int data2;
	public:
		void set(int i, char c)
		{
		data1 = i;
		data2 = c;
		}

		void display(void)
		{
		cout << "Data1 = " << data1 << endl;
		cout << "Data2 = " << data2 << endl;
		}
};

/*
 * main - uses a new operator for dynamically creating class objects
 * 
 * Return: 0 on success. 1 on failure
 * Author: Jaba
 * Date: Sep 04 2022
 */
int main()
{
	sample *s_ptr;
	try
	{
		s_ptr = new sample;
	}
	catch (bad_alloc ba)
	{
		cout << "Bad allocation occurred...the program will terminate now\n";
		return 1;
	}

	s_ptr->set(23, 'G');
	s_ptr->display();

	delete s_ptr;
	return 0;
}
