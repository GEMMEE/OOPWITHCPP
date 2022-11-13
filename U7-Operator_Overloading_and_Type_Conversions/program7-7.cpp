/**
 * purpose: User-defined type conversions
 * author: Jaba
 * date: Nov 13, 2022
*/

#include <iostream>
using namespace std;

class invent2;  //destination class declared

class invent1   //source class
{
    int code;   //item code
    int items;  //no. of items
    float price;  //cost of each item
public:
    invent1(int a, int b, int c)
    {
        code = a;
        items = b;
        price = c;
    }
    void putdata()
    {
        cout << "Code: " << code << "\n";
        cout << "Items: " << items << "\n";
        cout << "Price: " << price << "\n";
    }
    int getcode() {return code;}
    int getitems() {return items;}
    float getprice() {return price;}
    operator float() {return (items * price);}  // casting operator function
    /*
    operator invent2()
    {
        invent2 temp;
        temp.code = code;
        temp.value = price * items;
        return temp;
    }
    */
}; 

class invent2     //definition of destination class
{
    int code;
    float value;
public:
    invent2()
    {
        code = 0; value = 0;
    }
    invent2(int x, float y)  // constructor for initialization
    {
        code = x;
        value = y;
    }
    void putdata()
    {
        cout << "Code: " << code << "\n";
        cout << "Value: " << value << "\n\n";
    }
    invent2(invent1 p)    // constructor for conversion
    {
        code = p.getcode();
        value = p.getitems() * p.getprice();
    }
};

int main()
{
    invent1 s1(100, 5, 140.0);
    invent2 d1;
    float total_value;

    /* invent1 to float */
    total_value = s1;   //conversion from class type to basic type

    /* invent1 to invent2 */
    d1 = s1;           //conversion from one class type to another class type

    cout << "Product details - invent1 type" << "\n";
    s1.putdata();

    cout << "\nStock value" << "\n";
    cout << "Value = " << total_value << "\n\n";

    cout << "Product details - invent2 type " << "\n";
    d1.putdata();

}
/*
---------------- OUTPUT -----------------------
Product details - invent1 type
Code: 100
Items: 5
Price: 140

Stock value
Value = 700

Product details - invent2 type 
Code: 100
Value: 700

-------------------------------------------------
NOTE:
________________________________________________________________________________________________________
Remember that we can also use the casting operator function 
    operator invent2()
in the class invent1 to convert invent1 type to invent2 type. However, it important that we do not use
both the constructor and the casting operator for the same type conversion, since this
introduces an ambiguity as to how the conversion should be performed.
*/
