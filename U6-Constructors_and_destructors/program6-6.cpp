//CONSTRUCTING MATRIX OBJECTS

#include <iostream>
using namespace std;

class matrix
{
  int **p;   // pointer to matrix
  int d1, d2;   // dimensions
public:
  matrix(int x, int y);  // constructor declared
  void get_element(int i, int j, int value)
  {
    p[i][j] = value;
  }
  int & put_element(int i, int j)
  {
    return p[i][j];
  }
};

matrix :: matrix(int x, int y)  // constructor defined
{
  d1 = x;
  d2 = y;
  p = new int *[d1];        // creates an array pointer
  for (int i = 0; i < d1; i++)
  p[i] = new int [d2];       // creates space for each row
}

int main()
{
  int m, n;

  cout << "Enter size of matrix: ";
  cin >> m >> n;
  matrix A(m, n);             // matrix object A constructed

  cout << "Enter matrix elements row by row \n";
  int i, j, value;

  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
    {
      cin >> value;
      A.get_element(i, j, value);
    }
  
  cout << endl;
  cout << A.put_element(1, 2) << endl;  // returns A[1][2]

  return 0;
};

/******************** POSSIBLE OUTPUT ****************************
 Enter size of matrix: 3 4
 Enter matrix elements row by row
 11 12 13 14
 15 16 17 18
 19 20 21 22

 17
 *********************** End of output **************************/