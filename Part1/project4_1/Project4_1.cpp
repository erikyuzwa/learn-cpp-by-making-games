/*************************************
 Learn C++ Programming by Making Games
 Project 4.1 - Game of Funny Headlines
*************************************/

#include <iostream>
using namespace std;

int main()
{
  // First, let's welcome the user
  cout << "Welcome to the C++ News Network!" << endl << endl;

  // Then, let's input several values to plug into our headlines...
  // Note that the questions don't always match the names of the
  // variables because we are trying to surprise the player.

  string userName;
  cout << "Please type in your first name: " << endl;
  cin >> userName;

  int smallNumber;
  cout << "How many siblings do you have?" << endl;
  cin >> smallNumber;

  float largeNumber;
  cout << "How much money would you like to earn every year?" << endl;
  cin >> largeNumber;

  string color;
  cout << "Tell us your least favourite color:" << endl;
  cin >> color;

  string amorphousObject;
  cout << "Which vegetables have the weirdest shapes?" << endl;
  getline( cin, amorphousObject );

  string deadGuy;
  cout << "Name a famous dead person:" << endl;
  getline( cin, deadGuy );

  string celebrityActor;
  cout << "Who is your favorite actor?" << endl;
  getline( cin, celebrityActor );

  string politician;
  cout << "Name a current world leader:" << endl;
  getline( cin, politician );

  string cartoonCharacter;
  cout << "Who is your favourite cartoon character?" << endl;
  getline( cin, cartoonCharacter );

  string weirdGroup;
  cout << "Name a hobby or a profession you find scary: " << endl;
  getline( cin, weirdGroup );

  string somethingGross;
  cout << "Name a food item you detested as a child: " << endl;
  getline( cin, somethingGross );

  // Finally, let's print out the headlines!
  cout << endl << endl << endl
       << "And now, today's headlines from the C++ News Wire:" << endl;
  cout << "--------------------------------------------------" << endl;

  cout << "ALIENS SHAPED LIKE " << color << " " << amorphousObject 
       << " INVADE THE EARTH, KIDNAP " << celebrityActor << ", " 
       << "RESURRECT " << deadGuy << "!" << endl << endl;

  cout << userName 
       << " RELEASES NEW ALBUM! " << smallNumber 
       << " COPIES EXPECTED TO BE SOLD!" 
       << endl << endl;

  cout << politician << " CAUGHT IN LOVE TRIANGLE WITH "
       << cartoonCharacter << " AND SECRET "
       << weirdGroup << " CULT LEADER!" << endl << endl;

  cout << "WORLD'S LARGEST BABY BORN - WEIGHS " << largeNumber 
       << " POUNDS, EATS " << smallNumber << " TONS OF "
       << somethingGross << " EVERY DAY!" << endl << endl;

  // And we're done!
  return 0;
}
