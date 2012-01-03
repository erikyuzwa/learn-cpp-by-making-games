/*************************************
 Learn C++ Programming by Making Games
 Example 6.2: More scopes
*************************************/

#include <iostream>
using namespace std;

int main()
{

  // Let's define a variable in the outermost scope
  int myVar = 5;
 
  // Now, let's manipulate it within an inner block
  {
    myVar += 10;
    cout << "First: " << myVar << endl;

    // Now, let's hide it
    int myVar = 75;
    cout << "Second: " << myVar << endl;
  }

  // Now, some manipulation in the outer block
  myVar++;
  cout << "Third: " << myVar << endl;

  // Now, a second inner block...
  {
    int myVar = -2;
    cout << "Fourth: " << myVar << endl;
  }

  // And finally:
  cout << "Fifth: " << myVar << endl;

  // And we're done!
  return 0;
}
