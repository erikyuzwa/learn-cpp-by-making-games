/*************************************
 Learn C++ Programming by Making Games
 Example 7.4: Divination Game, v. 4
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
       << "I'm thinking about...\n";
  int playerGuess;
  cin >> playerGuess;

  // If the guess is right, congratulate the player
  if( playerGuess == magicNumber )
  {
    cout << "Congratulations, you guessed right!\n";
    cout << "You're obviously too smart for me!\n";
  }
  // If the guess is wrong, let the player try again
  else
  {
    cout << "No, sorry, that's not it. Try again:\n";
    cin >> playerGuess;
    if( playerGuess == magicNumber )
    {
      cout << "Yes, this time you got it!\n";
    }
    else
    {
      cout << "No, that's not it either. "
           << "Better luck next time!\n";
    }
  }

  // And we're done!
  return 0;
}
