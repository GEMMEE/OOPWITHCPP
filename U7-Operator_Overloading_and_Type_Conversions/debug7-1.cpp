/**
 * purpose: Identify the error in the following program
 * author: Jaba
 * date: Nov 13, 2022
*/

// #include <iostream>
// class Space
// {
//     int mCount;
// public:
//     Space(){mCount = 0;}
//     Space operator ++(int)
//     {
//         mCount++;
//         return Space(mCount);
//     }
// };
// int main()
// {
//     Space objSpace;
//     objSpace++;
//     return 0;
// }

//Write the correct code below.
//Remember that unary operators when overloaded return no explicit values.
//We can debug the code by overloadin ++ operator either as prefix operator or postfix operator.

#include <iostream>
class Space
{
    int mCount;
public:
    Space(){mCount = 0;}
    void operator ++(int) // Overloading a postfix ++ operator
    {
        ++mCount;            //now it operates as if it is a prefix operator
        // we can also leave it as before i.e. mCount++;
        std::cout << "mCount = " << mCount <<"\n";  // mCount = 1 would be the output
    }
};
int main()
{
    Space objSpace;
    objSpace++;
    return 0;
}


//Alternative solution:

// #include <iostream>
// class Space
// {
//     int mCount;
// public:
//     Space(){mCount = 0;}
//     void operator ++() // Overloading it the prefix ++ operator
//     {
//         mCount++;            //now it operates as if it is a postfix operator
//         std::cout << "mCount = " << mCount <<"\n";  // mCount = 1 would be the output
//     }
// };
// int main()
// {
//     Space objSpace;
//     ++objSpace;
//     return 0;
// }

