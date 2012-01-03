/*************************************
 Learn C++ Programming by Making Games
 Example 3.3: Keyboard input
*************************************/

#include <iostream>
using namespace std;

int main()
{
  // Prompt the user for data
  cout << "Type in three integer numbers:" << endl;

  // Read in the three values
  int a, b, c;
  cin >> a >> b >> c;

  // Give feedback
  cout << "I understood: " 
       << a << ", " 
       << b << ", and "
       << c;

  // And let's try again
  cout << ". Now, type three more: " << endl;
  cin >> a >> b >> c;
  cout << "This time, I understood: "
       << a << ", "
       << b << ", and "
       << c;

  // And we're done!
  return 0;
}
