/*************************************
 Learn C++ Programming by Making Games
 Example 3.4: Reading strings
*************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
  // Prompt the user for data
  cout << "Please enter two words:" << endl;

  // Read in the values
  //string b, c;
  char b[128];
  char c[128];
  
  cin.getline( b, 128 );
  
  //cin >> b >> c - is illegal. We're working with character / string data.

  cin.getline( c, 128 );

  // Give feedback
  cout << "I understood: " 
       << b << ", and "
       << c << endl;

  // Now, let's read a whole line of text as a single entity
  cout << "Now, type in a whole line of text, with as many blanks as you want:" 
       << endl;

  // getline() is a function; we'll talk more about them in Part 3
  char wholeLine[512];
  cin.getline( wholeLine, 512 );

  // In the cout statement below, remember that \" is an escape sequence!
  cout << "I understood: \"" << wholeLine << "\"" << endl;

  // And we're done!
  return 0;
}
