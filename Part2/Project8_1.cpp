/*************************************
 Learn C++ Programming by Making Games
 Project 8.1 - Simple Nim
*************************************/

#include <iostream>
using namespace std;

int main()
{
  // Let's start with a welcoming message
  cout << "Welcome to the Game of Single-Pile Nim!" << endl;
  cout << "---------------------------------------" << endl << endl;

  // Let's define constants to identify the sides
  const bool HUMAN_PLAYER = true;
  const bool COMPUTER_PLAYER = false;

  // Let's define some variables that will help us let
  // the human player decide who goes first:
  // Himself/herself or the computer
  char firstPlayer;		// the human player's choice
  bool validPlayer = false;	// is this choice valid?

  // Once the game has begun, we'll need to know the 
  // identity of the current player at all times
  bool currentPlayer;	

  // Now, let's ask the human player who goes first
  // We have to do this at least once, and maybe more
  // if the first choice is bad, so we'll use a do-while loop
  do
  {
    // Prompt and data entry
    cout << "Who plays first: [P]layer or [C]omputer?" << endl;
    cin >> firstPlayer;

    // Let's analyze the player's choice
    switch( firstPlayer )
    {
      // First, if the player has chosen to go first
      case 'P':
      case 'p':
        validPlayer = true;
        currentPlayer = HUMAN_PLAYER;
        break;

      // Then, if the player has chosen to let the
      // computer go first
      case 'C':
      case 'c':
        validPlayer = true;
        currentPlayer = COMPUTER_PLAYER;
        break;

      // Finally, if the player has made a mistake
      default:
        cout << "Invalid entry; please try again. ";
        break;
    } 

  } while( !validPlayer ); // Repeat as long as necessary

  // Now that we know who plays first, we can start 
  // the game by initializing the heap of sticks
  int nimSticks = 22;

  // CORE GAME LOOP: as long as there are sticks left,
  // we'll need to get moves from the opponents
  while( 0 != nimSticks )
  {
    // How many sticks are there left in the pile?
    cout << "There are now " << nimSticks
         << " in the pile." << endl;

    // A variable to hold the number of sticks that
    // the current player wants to take
    int currentPlayerMove = 0;

    // Let's get a move from the current player
    if( currentPlayer == HUMAN_PLAYER )
    {
      // If it is the human player's turn, ask for
      // a number of sticks between 1 and 4
      // and validate like we did for the choice of
      // starting player above
      bool validHumanMove = false;
      do
      {
        cout << "How many sticks do you want to remove [1-4]?";
        cin >> currentPlayerMove;
        validHumanMove = ( currentPlayerMove > 0 && 
			   currentPlayerMove < 5 &&
                           currentPlayerMove <= nimSticks );
        if( !validHumanMove )
          cout << "Between 1 and 4, and no more than there are "
               << "in the pile, please." << endl;
      } while( !validHumanMove );
    }

    else // currentPlayer is automatically COMPUTER_PLAYER
    {
      // A little piece of artificial intelligence :)
      // based on the mathematical analysis of the
      // game that we discussed in the chapter

      // Ideally, we'd like to leave a multiple of 5
      // sticks in the pile after the computer's turn
      int idealMove = ( nimSticks % 5 );

      // If that's impossible, the position is lost,
      // so any move is as good or as bad as another
      if( 0 == idealMove )
        currentPlayerMove = 1;
      else
        currentPlayerMove = idealMove;

      // Announce the computer's move to the player
      cout << "I am taking " << currentPlayerMove
           << " sticks from the pile." << endl;
    }

    // Now that we know how many sticks the current 
    // player wants to take, we remove them from the
    // pile
    nimSticks -= currentPlayerMove;

    // Do we have a winner?
    if( 0 == nimSticks )
    {
      // If so, who has just taken the last stick?
      if( HUMAN_PLAYER == currentPlayer )
      {
        cout << "You win. Congratulations!" << endl;
      }
      else
      {
        cout << "I win! Better luck next time..." << endl;
      }
    }
 
    // If there are sticks left in the pile, it is
    // now the other player's turn
    else
    {
      currentPlayer = !currentPlayer;
    }
  } // end of the while( 0 != nimSticks ) loop

  
  // And we're done!
  return 0;
}
