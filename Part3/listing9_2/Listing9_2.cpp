/*************************************
 Learn C++ Programming by Making Games
 Example 9.2: Random Number Generator
*************************************/

#include <iostream>
#include <stdlib>
#include <ctime>

using namespace std;

int main()
{
  // First, seed the random number generator
  srand( time( NULL ) );

  // Then, roll a standard six-sided dice 10 times
  for( int i = 0; i < 10; i++ )
  {
    int theDice = ( rand() % 6 ) + 1;

    cout << "I have rolled a dice and got a " << theDice
         << endl;
  }

  // And we're done!
  return 0;
}