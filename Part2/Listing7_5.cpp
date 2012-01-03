/*************************************
 Learn C++ Programming by Making Games
 Example 7.5: Score assessment
*************************************/

#include <iostream>
using namespace std;

int main()
{

  // Let's read the score
  cout << "What score did you get?" << endl;
  int playerScore;
  cin >> playerScore;

  // Give an appropriate assessment
  if( playerScore >= 1000 )
    cout << "Excellent performance! Good job!";
  else if( playerScore >= 800 )
    cout << "Pretty good, you're getting better!";
  else if( playerScore >= 600 )
    cout << "Not bad for a rookie...";
  else if( playerScore >= 300 )
    cout << "Well, at least you're not getting fired...";
  else 
    cout << "Did you fall asleep during the game?";

  cout << endl;

  // And we're done!
  return 0;
}
