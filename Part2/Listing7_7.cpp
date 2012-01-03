/*************************************
 Learn C++ Programming by Making Games
 Example 7.7: Divination with a loop
*************************************/

#include <iostream>
using namespace std;

int main()
{

  // Let's define the number that we want the 
  // player to guess as a constant
  const int magicNumber = 8;

  // Let's initialize the player's guess with a
  // bogus value that is not the right choice
  int playerGuess = -1;

  // Then, ask the player to guess until he
  // gets it right
  cout << "Guess which number between 1 and 10 "
       << "I'm thinking about...\n";

  while( magicNumber != playerGuess )
  {
    cin >> playerGuess;
    if( magicNumber == playerGuess )
      cout << "You're right! Congratulations!\n";
    else
      cout << "No, try again:";  
  }

  // And we're done!
  return 0;
}
