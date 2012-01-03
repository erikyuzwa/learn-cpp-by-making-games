//Example 15.1 
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{

  //first initialize the 2 dimensional array using a list
  int myArray[3][3] = { { 0, 1, 2}, { 4, 5, 2 }, { 5, 3, 8 } };

  //since we are working with a two dimensional array, we will need
  //two for loops;
  //one to iterate through the rows and another inner loop to
  //iterate through the columns
  //of the matrix formed by the array
  for(int i = 0; i < 3; i++)
  {
    for( int j = 0; j < 3; j++ )
    {
      cout << "myArray(" << i << ":" << j << ") = ";
      cout << myArray[i][j] << endl;
    }
  }

  return 0;
}
