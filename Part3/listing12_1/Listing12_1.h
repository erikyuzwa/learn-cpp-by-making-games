/*************************************
 Learn C++ Programming by Making Games
 Example 12.1 - NIM with functions
 Header File
*************************************/

#ifndef EXAMPLE12_1_H
#define EXAMPLE12_1_h

// Let's define constants to identify the sides
const bool HUMAN_PLAYER = true;
const bool COMPUTER_PLAYER = false;

// Function Prototypes - Messages to the player
void welcomeMessage();
void congratulateWinner( bool theWinner );
void gameStatus( int pileSize );

// Function Prototypes - User Interface
// Decide who gets to play first
bool pickFirstPlayer();

// Function Prototypes - Moves
int getHumanPlayerMove( int pileSize );
int getComputerPlayerMove( int pileSize );

// Function Prototypes - Predicates
bool isGameOver( int pileSize );

#endif

