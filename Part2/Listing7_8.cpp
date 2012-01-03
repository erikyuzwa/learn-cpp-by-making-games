/*************************************
 Learn C++ Programming by Making Games
 Example 7.8: Divination with do-while
*************************************/

#include <iostream>
using namespace std;

int main()
{

  // Let's define the number that we want the 
  // player to guess as a constant
  const int magicNumber = 8;

  // With do-while, we don't need to initialize
  // the player's choice with a dummy value
  // since we know that the loop's body will 
  // always be executed at least once
  int playerGuess;
 
  cout << "Guess which number between 1 and 10 "
         << "I'm thinking about...\n";
 
  do
  {
    // Ask the player for his guess;
    cin >> playerGuess;

    // Give feedback
    if( magicNumber == playerGuess )
      cout << "You're right! Congratulations!\n";
    else
      cout << "No, try again:";    

  } while( magicNumber != playerGuess );

  // And we're done!
  return 0;
}
