/*
=========  Returning Objects ===========

A function cannot only receive objects as arguments but also can return them.
*/

#include <iostream>
using namespace std;

class matrix
{
  int m[3][3];

  public:
  void read(void)
  {
    cout << "Enter the elements of the 3x3 matrix: \n";
    int i, j;

    for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
    {
      cout << "m[" << i << "][" << j << "] = ";
      cin >> m[i][j];
    }
  }

  void display(void)
  {
    int i, j;
    for(i = 0; i < 3; i++)
    {
      cout << "\n";
      for(j = 0; j < 3; j++)
      {
        cout << m[i][j] << "\t";
      }
    }
  }

  friend matrix trans(matrix);
};

matrix trans(matrix m1)
{
  matrix m2;   //creating an object
  int i, j;

  for(i=0; i<3; i++)
    for(j=0; j<3; j++)
     m2.m[i][j] = m1.m[j][i];
  
  return (m2);  //returning an object
}

int main()
{
  matrix mat1, mat2;
  mat1.read();
  cout << "\nYou entered the following matrix: ";
  mat1.display();

  mat2 = trans(mat1);
  cout << "\nTransposed matrix: ";
  mat2.display();
  cout << endl;
  
  return 0;
}