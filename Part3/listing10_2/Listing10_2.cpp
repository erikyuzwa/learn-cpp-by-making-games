/*************************************
 Learn C++ Programming by Making Games
 Example 10.2: Local Scope
*************************************/

#include <iostream>
using namespace std;

// This function adds 10 to its argument
// but does NOT propagate the changes
// back to its caller:
void adder( int theVar )
{
  theVar += 10;
  cout << "Inside adder, theVar is now " << theVar << endl;
  return;
}

int main()
{
  // We create a variable that has the same name
  // as the adder() function's parameter
  int theVar = 3;
  cout << "In Main, theVar is " << theVar << endl;
  
  // Now, call adder and see what happens
  adder( theVar );
  cout << "When we return from adder, theVar is " 
       << theVar << endl;

  // And we're done!
  return 0;
}