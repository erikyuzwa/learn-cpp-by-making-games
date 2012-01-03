/*************************************
 Learn C++ Programming by Making Games
 Example 11.3 - Reference parameters
*************************************/

#include <iostream>
using namespace std;

// Function swap(): take two parameters and echange
// their values "in place"
// Note that the two parameters are declared as
// references
void swap( string & player1, string & player2 )
{
  string temp = player1;
  player1 = player2;
  player2 = temp;
  return;
}


int main()
{
  // First, let's get some data
  cout << "Type the names of the two players:" << endl;
  string pl1, pl2;
  cin >> pl1 >> pl2;

  // And show the results of the manipulation to the user
  cout << "Before the function call: " << pl1 << " " << pl2
       << endl;

  swap( pl1, pl2 );  // Remember: only variables can be
		     // passed by reference

  cout << "After the function call: " << pl1 << " " << pl2
       << endl;
  
  return 0;
}