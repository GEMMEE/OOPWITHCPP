#include <iostream>
#include <iomanip>

using namespace std;
/*
	WAP to print all the prime numbers less than or equal to 1 million.
*/
int isPrime(int a)
{
	if (a <= 1)
		return false;
	for (int i = 2; i <= a/2; i++)
	{
		if (!(a%i))
			return false;
	}
	return true;
}

int main()
{
	int count;
	for (int i = 0; i < 1000001; i++)
	{
		if (isPrime(i))
		{
			cout << setw(10) << i;
			count++;
		}
		if (!(i % 100))
		cout << endl;
		 
	}
	cout << "\nThere are " << count << " prime numbers that are less than a million!" << endl << endl;

	return 0;
}
 
