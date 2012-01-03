/*************************************
 Learn C++ Programming by Making Games
 Example 7.1: Divination Game, v. 1
*************************************/

#include <iostream>
using namespace std;

int main()
{

  // Let's define the number that we want the 
  // player to guess as a constant
  const int magicNumber = 8;

  // Ask the player for his guess
  cout << "Guess which number between 1 and 10 I'm thinking about..." << endl;
  int playerGuess;
  cin >> playerGuess;

  // Test and give feedback
  if( playerGuess == magicNumber )
    cout << "Congratulations, you guessed right!" << endl;

  // And we're done!
  return 0;
}
