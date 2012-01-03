/*************************************
 Learn C++ Programming by Making Games
 Example 7.3: Divination Game, v. 3
*************************************/

#include <iostream>
using namespace std;

int main()
{

  // Let's define the number that we want the 
  // player to guess as a constant
  const int magicNumber = 8;

  // Ask the player for his guess
  cout << "Guess which number between 1 and 10 "
       << "I'm thinking about..." << endl;
  int playerGuess;
  cin >> playerGuess;

  // Give some feedback whether the guess is right or not
  if( playerGuess == magicNumber )
  {
    cout << "Congratulations, you guessed right!" << endl;
    cout << "You're obviously too smart for me!" << endl;
  }
  else
  {
    cout << "No, sorry, that's not it. Try again!" << endl;
  }

  // And we're done!
  return 0;
}
