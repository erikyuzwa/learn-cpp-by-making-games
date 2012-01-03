/*************************************
 Learn C++ Programming by Making Games
 Example 11.5 - Overloaded functions
*************************************/

#include <iostream>
using namespace std;

// Function swap(): take two parameters and echange
// their values "in place"
// Note that there are 3 versions of this function,
// all with the same name and different parameter types
void swap( string & s1, string & s2 )
{
  string temp = s1;
  s1 = s2;
  s2 = temp;

  cout << "String swap: " << s1 << " " << s2 << endl;
  return;
}

void swap( double & d1, double & d2 )
{
  double temp = d1;
  d1 = d2;
  d2 = temp;

  cout << "Double swap: " << d1 << " " << d2 << endl;
  return;
}

void swap( int & i1, int & i2 )
{
  int temp = i1;
  i1 = i2;
  i2 = temp;

  cout << "Integer swap: " << i1 << " " << i2 << endl;
  return;
}

int main()
{
  // First, let's get some data
  cout << "Please type two words: " << endl;
  string pl1, pl2;
  cin >> pl1 >> pl2;

  cout << "Now, type two floating-point numbers: " << endl;
  double d1, d2;
  cin >> d1 >> d2;

  cout << "Finally, two integers: " << endl;
  int i1, i2;
  cin >> i1 >> i2;

  // And now, swap the variables; C++ will pick the
  // right version to call based on parameter types
  swap( pl1, pl2 );
  swap( d1, d2 );
  swap( i1, i2 );
  
  return 0;
}