/**
 * purpose: Overloading of the Subscript Operator
 * Author: Jaba
 * Date: Nov 13, 2022
*/

#include <iostream>
using namespace std;

class arr
{
    int a[5];
public:
    arr(int *s)
    {
        int i;
        for(i = 0; i < 5; i++)
        {
            a[i] = s[i];
        }
    }
    int operator [] (int k) //Overloading the subscript operator
    {
        return (a[k]);
    }
};

int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    arr A(x);
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << A[i] << "\t";  //Using subscipt operator to access the private array elements
    }

    return 0;
}

/*
------------Output--------------
1   2   3   4   5
---------------------------------
*/