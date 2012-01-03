/*************************************
 Learn C++ Programming by Making Games
 Example 10.4: Function prototypes
*************************************/

#include <iostream>
using namespace std;

// A prototype for the average() function
double average( double, double, double );

// The main program
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

// The following function calculates the
// average of its three parameters
// Note that the function definition appears after
// the main program thanks to the prototype
double average( double a, double b, double c )
{
  return( ( a + b + c ) / 3.0 );
}