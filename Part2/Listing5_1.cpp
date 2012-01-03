/*************************************
 Learn C++ Programming by Making Games
 Example 5.1: Arithmetic
*************************************/

#include <iostream>
using namespace std;

int main()
{

  // Get two values from the keyboard
  cout << "Please type in two floating-point numbers:" << endl;
  double a, b;
  cin >> a >> b;

  cout << "The two values are: a = " << a << " and b = " << b << endl;

  // Print a few simple calculations
  cout << "a + b = " << a + b << endl;
  cout << "a - b = " << a - b << endl;
  cout << "a * b = " << a * b << endl;
  cout << "a / b = " << a / b << endl;

  // And we're done!
  return 0;
}
