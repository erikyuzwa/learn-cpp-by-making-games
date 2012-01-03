/*************************************
 Learn C++ Programming by Making Games
 Example 12.2b - Sharing a global
*************************************/

#include <iostream>

// Include the header to access the global
// and the helper functions
#include "example12_2.h"
using namespace std;

// Create the global here
int i;

int main()
{
  // Make some changes to the global
  // and show its value to the user
  i = 5;
  cout << "in main " << i << endl;

  // Call the helper function that will 
  // modify the global
  funct();
  cout << "after funct " << i << endl;

  return 0;
}