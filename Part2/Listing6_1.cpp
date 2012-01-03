/*************************************
 Learn C++ Programming by Making Games
 Example 6.1: Fun with scopes
*************************************/

#include <iostream>
using namespace std;

int main()
{

  // Let's define a variable in the outermost scope
  int myVar = 5;
 
  // Now, let's define another variable that hides it
  {
    int myVar = 10;
    cout << "In the inner block: " << myVar << endl;
  }

  // Now that the inner variable has gone out of scope...
  cout << "In the outer block: " << myVar << endl;

  // And we're done!
  return 0;
}
