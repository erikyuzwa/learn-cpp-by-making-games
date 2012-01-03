/*************************************
 Learn C++ Programming by Making Games
 Example 3.2: Fun with cout
*************************************/

#include <iostream>
using namespace std;

int main()
{
  // First, let's print a message
  string myHello = "This is Chapter 3 already?";
  cout << myHello << endl;

  // Then, let's print a couple of integers
  int myScore = 100, yourScore = 75;
  cout << myScore << " " << yourScore << endl;

  // Then, let's mix and match content types
  const double primeRate = 4.85;
  cout << "Today's prime rate is " << primeRate << " percent.\n";

  // And we're done!
  return 0;
}

