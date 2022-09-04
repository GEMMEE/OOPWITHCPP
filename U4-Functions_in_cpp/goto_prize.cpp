#include <iostream>
using namespace std;
//	COULD YOU FIGURE OUT WHAT YOU HAVE TO ENTER TO GOT MY NAME
//  WIN A PRIZE I HAVE MADE FOR YOU :)
//  Author: Jaba
int main()
{

	cout << "Guess my name: [Hint-It starts with J and only has 4 letters] \n";
	char name[4];
	cin >> name;

	if (name != "Jaba")
		goto myname;
	else
		cout << "You got it! Please, call me and collect your prize!"
			 << endl;
	return 0;
	myname:
		cout << "Wrong! My name is not " << name << endl;
}
	
