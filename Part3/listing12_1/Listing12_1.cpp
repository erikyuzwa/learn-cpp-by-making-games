/*************************************
 Learn C++ Programming by Making Games
 Example 12.1 - NIM with functions
 Source file
*************************************/

#include <iostream>
#include "example12_1.h"
using namespace std;

// The main NIM Program
int main()
{
  // Start by saying hello to the player
  welcomeMessage();

  // Now, let's ask the human player who goes first
  bool currentPlayer = pickFirstPlayer();
  
  // Now that we know who plays first, we can start 
  // the game by initializing the heap of sticks
  int nimSticks = 22;

  // CORE GAME LOOP: as long as there are sticks left,
  // we'll need to get moves from the opponents
  while( !isGameOver( nimSticks) )
  {
    // Show the status of the game
    gameStatus( nimSticks );

    // Let's get a move from the current player
    int currentPlayerMove;
    if( currentPlayer == HUMAN_PLAYER )
      currentPlayerMove = getHumanPlayerMove( nimSticks );
    else
      currentPlayerMove = getComputerPlayerMove( nimSticks );

    // Now that we know how many sticks the current 
    // player wants to take, we remove them from the
    // pile
    nimSticks -= currentPlayerMove;

    // Do we have a winner?
    if( isGameOver( nimSticks ) )
      congratulateWinner( currentPlayer );
 
    // If there are sticks left in the pile, it is
    // now the other player's turn
    else
      currentPlayer = !currentPlayer;
  }
  
  // And we're done!
  return 0;
}

// welcomeMessage() - Say Hi to the player
void welcomeMessage()
{
  cout << "Welcome to the Game of Single-Pile Nim!" << endl;
  cout << "---------------------------------------" << endl << endl;
  return;
}

// congratulateWinner() - Tell the player who won
void congratulateWinner( bool theWinner )
{
  // If so, who has just taken the last stick?
  if( HUMAN_PLAYER == theWinner )
  {
    cout << "You win. Congratulations!" << endl;
  }
  else
  {
    cout << "I win! Better luck next time..." << endl;
  }
  return;
}

// gameStatus() - Tell the player how many sticks
// are left in the pile before a turn
void gameStatus( int pileSize )
{
  // How many sticks are there left in the pile?
  cout << "There are now " << pileSize
       << " in the pile." << endl;
  return;
}

// pickFirstPlayer() - Ask the user who goes first
bool pickFirstPlayer()
{
  // Let's define some variables that will help us let
  // the human player decide who goes first:
  // Himself/herself or the computer
  char firstPlayer;		// the human player's choice
  bool validPlayer = false;	// is this choice valid?

  // Who should start?
  int currentPlayer;

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

  // Now that we're sure, we can start the game!
  return currentPlayer;
}


// getHumanPlayerMove() - Ask the player for a number
// of sticks to take out of the pile
int getHumanPlayerMove( int pileSize )
{
  // If it is the human player's turn, ask for
  // a number of sticks between 1 and 4
  // and validate like we did for the choice of
  // starting player above
  bool validHumanMove = false;
  int currentPlayerMove;
  do
  {
    cout << "How many sticks do you want to remove [1-4]?";
    cin >> currentPlayerMove;
    validHumanMove = ( currentPlayerMove > 0 && 
                       currentPlayerMove < 5 &&
                       currentPlayerMove <= pileSize );
    if( !validHumanMove )
      cout << "Between 1 and 4, and no more than there are "
           << "in the pile, please." << endl;
  } while( !validHumanMove );

  return currentPlayerMove;
}


// getComputerPlayerMove() - Let the machine play
int getComputerPlayerMove( int pileSize )
{
  // A little piece of artificial intelligence :)
  // based on the mathematical analysis of the
  // game that we discussed in the chapter

  // Ideally, we'd like to leave a multiple of 5
  // sticks in the pile after the computer's turn
  int idealMove = ( pileSize % 5 );
  int currentPlayerMove;

  // If that's impossible, the position is lost,
  // so any move is as good or as bad as another
  if( 0 == idealMove )
    currentPlayerMove = 1;
  else
    currentPlayerMove = idealMove;

  // Announce the computer's move to the player
  cout << "I am taking " << currentPlayerMove
       << " sticks from the pile." << endl;

  return currentPlayerMove;
}


// isGameOver() - Have we reached endgame conditions?
// if there are no sticks left, yes
bool isGameOver( int pileSize )
{
  return( 0 == pileSize );
}

