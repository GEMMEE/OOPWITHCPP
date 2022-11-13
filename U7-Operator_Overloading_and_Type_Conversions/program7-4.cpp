/**
 * @file program7-3.cpp - Overloading operators with Friend
 * @author Jaba
 * @date 2022-11-12
 * 
 */
// PLEASE DEBUG ME WHEN YOU GOT TIME!!!


#include <iostream>
#include <cstring>
using namespace std;

// MATHEMATICAL OPERATIONS ON STRINGS

class str
{
    char *p;
    int len;
public:
    str() {len = 0; p = 0;}  //create a null string
    str(const char * s);     //create string from arrays
    str(const str &s);    //copy constructor
    ~ str(){delete p;}        //destructor

    // + operator
    friend str operator+(const str &s, const str &t);

    // <= operator
    friend int operator<=(const str &s, const str &t);
    friend void show(const str s);
};

str :: str(const char *s)
{
    len = strlen(s);
    p = new char[len + 1];
    strcpy(p, s);
}

str :: str(const str & s)
{
    len = s.len;
    p = new char[len + 1];
    strcpy(p, s.p);
}

// overloading + operator
str operator+ (const str &s, const str &t)
{
    str temp;
    temp.len = s.len + t.len;
    temp.p = new char[temp.len + 1];
    strcpy(temp.p, s.p);
    strcat(temp.p, t.p);
    return(temp);
}
// overloading <= operator
int operator <=(const str &s, const str &t)
{
    int m = strlen(s.p);
    int n = strlen(t.p);

    if (m <= n) return(1);
    else return (0);
}
void show(const str s)
{
    cout << s.p;
}

int main()
{
    str s1 = "New ";
    str s2 = "York";
    str s3 = "Delhi";
    str string1, string2, string3;
    string1 = s1;
    string2 = s2;
    string3 = s1 + s3;
    

    cout << "\nstring1 = "; show(string1);
    cout << "\nstring2 = "; show(string2);
    cout << "\n";
    cout << "\nstring3 = "; show(string3);
    cout << "\n\n";
    if(string1 <= string3)
    {
        show(string1);
        cout << " smaller than ";
        show(string3);
        cout << "\n";
    }
    else
    {
        show(string3);
        cout << " smaller than ";
        show(string1);
        cout << endl;
    }

    return 0;
}