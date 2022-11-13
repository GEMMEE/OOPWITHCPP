/**
 * purpose: Overloading the pointer-to-member(->) operator
 * author: Jaba
 * Date: Nov 14, 2022
 * 
 * Description: The pointer to member operator(->) is normally used in conjunction with an
 * object pointer to access any of the object's members.
*/

#include <iostream>
using namespace std;

class test
{
public:
    int num;
    test(int j)
    {
        num = j;
    }
    test* operator -> (void)
    {
        return this;
    }
};

int main()
{
    test T(5);
    test *Ptr = &T;

    cout << "T.num = " << T.num;    //Accessing num normally
    cout << "\nPtr->num = " << Ptr->num;   //Accessing num using normal object pointer
    cout << "\nT->num = " << T->num;       //Accessing num using overloaded -> operator

    return 0;
}

/*
------------- OUTPUT --------------------
T.num = 5
Ptr->num = 5
T->num = 5
-----------------------------------------
----------------------------------------------------------------------------------------------------------------
                                   RULES FOR OVERLOADING OPERATORS
-----------------------------------------------------------------------------------------------------------------
1) Only existing operators can be overloaded. New operators cannot be created.
2) The overloaded operator must have at least one operand that is of user-defined type.
3) Overloaded operators follow the syntax rules of the original operators. They cannot be overridden.
4) There are some operator that cannot be overloaded. These are:
   a) Membership operator .
   b) Pointer-to-member operator .*
   c) Scope resolution operator ::
   d) Conditional operator ?:
5) We cannot use friend function to overload certain operators. The following operators cannot be overloaded
   using a friend function.
   a) Assignment operator =
   b) Function call operator ()
   c) Subscripting operator []
   d) Class member access operator ->
6) Unary operators, overloaded by means of a member function, take no explicit arguments and return no explicit
   values, but, those overloaded by means of a friend function, take one reference argument(the object of the 
   relevant class).
7) Binary operators overloaded through a member function take one explicit argument and those which are overloaded
   through a friend function take two explicit arguments.
8) When using binary operators overloaded through a member function, the left-hand operand must be an object of the 
   relevant class.
9) Binary arithmetic operators such as +, -, *, and / must explicitly return a value. They must not attempt to change
   their own arguments.
*/