/**
 * purpose: Identify the error in the following program
 * author: Jaba
 * date: Nov 13, 2022
*/

// #include <iostream>
// class Room
// {
//     float mWidth;
//     float mLength;
// public:
//     Room()
//     {}
//     Room(float w, float h) : mWidth(w), mLength(h)
//     {}
//     operator float()
//     {
//         return (float)mWidth * mLength;
//     }
//     float getWidth() {}
//     float getLength()
//     { 
//         return mLength;
//     }   
// };

// int main()
// {
//     Room objRoom1(2.5, 2.5);
//     float fTotalArea;
//     fTotalArea = objRoom1;
//     cout << fTotalArea;
//     return 0;
// }


//After debugging

#include <iostream>
class Room
{
    float mWidth;
    float mLength;
public:
    Room()
    {}
    Room(float w, float h) : mWidth(w), mLength(h)
    {}
    operator float()
    {
        return (float)mWidth * mLength;
    }
    float getWidth() { return mWidth;}
    float getLength()
    { 
        return mLength;
    }   
};

int main()
{
    Room objRoom1(2.5, 2.5);
    float fTotalArea;
    fTotalArea = objRoom1;
    std:: cout << fTotalArea;
    return 0;
}

//output
//6.25