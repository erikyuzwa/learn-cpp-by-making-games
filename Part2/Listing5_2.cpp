/*************************************
 Learn C++ Programming by Making Games
 Example 5.2: Increment Operators
*************************************/

#include <iostream>
using namespace std;

int main()
{

  // Let's see what happens when we mix increments
  // with assignments and additions
  int a = 0;
  int b = 10;

  a = a + b++;
  cout << "a = " << a << ", b = " << b << endl;

  a = a + ++b;
  cout << "a = " << a << ", b = " << b << endl;


  // Now, let's try again, but in reverse 
  a = 0;
  b = 10;

  a = a + ++b;
  cout << "a = " << a << ", b = " << b << endl;

  a = a + b++;
  cout << "a = " << a << ", b = " << b << endl;

 
  // And we're done!
  return 0;
}
