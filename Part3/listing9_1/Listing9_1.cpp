/*************************************
 Learn C++ Programming by Making Games
 Example 9.1: Library Function Calls
*************************************/

#include <iostream>
#include <math>
using namespace std;

int main()
{
  // First, get the data
  cout << "Type in a number A and an exponent B:" << endl;
  double a, b;
  cin >> a >> b;

  // Then, make the function call
  double theResult = pow( a, b );

  // And give feedback to the reader
  cout << "A to the Bth power is " << theResult << endl;
  
  // And we're done!
  return 0;
}