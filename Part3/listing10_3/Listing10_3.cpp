/*************************************
 Learn C++ Programming by Making Games
 Example 10.3: Parameters by value
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
  // This time, let's call adder with a constant
  const int theVar = 3;
  cout << "We will pass a constant of value 3 to adder.\n";
  adder( theVar );
  cout << "When we return from adder, the constant is still " 
       << theVar << endl;

  // Now, let's try with a literal
  cout << "Let's call adder with the literal 16" << endl;
  adder( 16 );

  // And we're done!
  return 0;
}