/*************************************
 Learn C++ Programming by Making Games
 Example 10.1: User-defined function
*************************************/

#include <iostream>
using namespace std;

// The following function calculates the
// average of its three parameters
double average( double a, double b, double c )
{
  return( ( a + b + c ) / 3.0 );
}

int main()
{
  // Read three numbers from the keyboard
  cout << "Please type in three numbers: " << endl;
  double n1, n2, n3;
  cin >> n1 >> n2 >> n3;

  // Calculate and print the average of the three
  cout << "Their average is: " << average( n1, n2, n3 )
       << endl;

  // And we're done!
  return 0;
}