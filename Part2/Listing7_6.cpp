/*************************************
 Learn C++ Programming by Making Games
 Example 7.6: Switch statement
*************************************/

#include <iostream>
using namespace std;

int main()
{

  // Let's read the grade
  cout << "What grade did you get?" << endl;
  char theGrade;
  cin >> theGrade;

  // Give an appropriate assessment
  switch( theGrade )
  {
    case 'A': 
      cout << "Excellent! ";
    case 'B':
    case 'C':
    case 'D':
      cout << "You get a passing grade.";
      break;
    case 'F':
      cout << "Sorry, you fail.";
      break;
    default:
      cout << "Sorry, I didn't understand you.";
      break;
  }

  cout << endl;

  // And we're done!
  return 0;
}
