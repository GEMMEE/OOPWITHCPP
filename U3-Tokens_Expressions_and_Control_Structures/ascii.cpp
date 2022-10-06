#include <iostream>
#include <iomanip>
using namespace std;
//FEW NOTES ON ASCII CHARACTER SET
/*
	#ASCII - stands for American Standard Code for Information Interchange
	#ASCII uses 7 bits to represent a character. The 8th bit was reserved 
	 as a parity checking bit.

	#There are 128 characters(numbered from 0 to 127) in ASCII character set
	#The ASCII characters from 0 to 31 and 127 are called control characters
	  or non-printing characters.
	#The character 7 (BEL = bell) when sent to a monitor produces a short 
	 beep sound on the in-built speaker.
	#The character 9 (HT = horizontal tab) inserts a tab in the text which
	 moves the cursor to the next tab position.
	#The character 10 (LF = linefeed or newline) moves te cursor to the
	 start of the next line.
	#The character 11 (VT = vertical tab) produces a vertical tab.
	#The character 12 (FF = formfeed) instructs a printer to eject the
	 current sheet being printed.
	#The character 13 (CR = carriage return) moves the cursor to the start
	 of the current line.
	#The character 27 (ESC = escape) is used as the beginning character of
	 various hardware control sequences(e.g., for printer setup etc.).

	#The character 0 (NUL = null) is known as the null character and plays
	 an important role in the storage of string constants in C and C++.

	#The character 32 (space) is the space character which can be entered
	 using the spacebar on the keyboard.

	#The space character along with the horizontal tab, newline, vertical
	 tab, formfeed, and carriage return are together known as whitespace
	 characters. They are ignored by compiler.

	#Characters 32 through 126 are known as printing characters(even though
	 the space character does not print anything, it does create a blank space).
	#Printing characters are made up of uppercase letters(from 65 through 90), 
	 lowercase letters(from 90 through 122), the ten decimal digits(from 48
	 to 57) and puctuation characters.
*/

//program to print all the printable ASCII characters to the screen along
//with their ASCII values.
int main()
{
	unsigned char c;

	cout << "\n    LIST OF PRINTABLE ASCII CHARACTERS\n";
	cout << "    ==================================\n\n";

	for (c = 33; c < 127; c++)
		cout << setw(3) << int(c) << " " << c 
			 << (c%8 ? ' ' : '\n');
	cout << endl;
	return 0;
}
