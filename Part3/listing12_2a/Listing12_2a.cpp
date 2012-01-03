/*************************************
 Learn C++ Programming by Making Games
 Example 12.2a - Sharing a global
*************************************/

#include <iostream>

// Gain access to the global
#include "example12_2.h"
using namespace std;


void funct()
{
  // make some changes to the global declared in the
  // other source file, to which we have gained 
  // access thanks to the header
  i = 10;
  cout << "in funct " << i << endl;

  return;
}