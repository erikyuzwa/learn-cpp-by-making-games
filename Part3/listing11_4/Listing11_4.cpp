/****************************************
 Learn C++ Programming by Making Games
 Example 11.4 - Const Reference parameter
****************************************/

#include <iostream>
using namespace std;

// Function show(): take a string parameter and
// show it; don't try to change it or the 
// compiler will raise an error because the 
// parameter has been declared const

void show( const string & message )
{
  cout << "Show: " << message << endl;
}


int main()
{
  // Send show() a variable
  string myMessage = "Hello!";
  show( myMessage );

  // Send show() a constant
  const string myConstantMessage = "Passing a constant";
  show( myConstantMessage );

  // Send show() a literal; this may not compile
  // on every system!
  show( "Trying to show a literal" );
  
  return 0;
}