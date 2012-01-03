/*************************************
 Learn C++ Programming by Making Games
 Project 13.1 - Simple Blackjack game
 Source file
 ************************************/

#include <iostream>
#include "project13_1.h"
using namespace std;


// The main program
int main()
{
  // Welcome message and initializations
  srand( time( 0 ) );
  cout << endl << endl;
  cout << "Welcome to the game of Blackjack!" << endl;
  cout << "---------------------------------" << endl << endl;

  // Show the house's open card
  bool houseHasBigAce = false;
  int houseHand = drawOpenHouseCard( houseHasBigAce );
  
  // Then, build the player's hand
  int playerHand = buildPlayerHand();
  announceResult( PLAYER_SIDE, playerHand );

  // Unless the player has busted, build the house's hand
  if( playerHand <= 21 )
  {
    houseHand = buildHouseHand( houseHand, houseHasBigAce ); 
    announceResult( HOUSE_SIDE, houseHand );
  }

  // Inform the player of the final result
  whoWins( playerHand, houseHand );
 
  return 0;
}

/********************************************************
 OUTPUT FUNCTIONS
********************************************************/

// announceCard: What is the face value of the last card
// that was dealt?
void announceCard( int theCard )
{
  cout << "--> ";
  switch( theCard )
  {
    case 1: cout << "An ace! "; break;
    case 2: cout << "A deuce! "; break;
    case 3: cout << "A three! "; break;
    case 4: cout << "A four! "; break;
    case 5: cout << "A five! "; break;
    case 6: cout << "A six! "; break;
    case 7: cout << "A seven! "; break;
    case 8: cout << "An eight! "; break;
    case 9: cout << "A nine! "; break;
    case 10: cout << "A ten! "; break;
    case 11: cout << "A jack! "; break;
    case 12: cout << "A queen! "; break;
    case 13: cout << "A king! "; break;
    default: cout << "INVALID CARD!!!" << endl; break;
  }

  return;
}

// announceHand: What is the current value of the hand?
void announceHand( int theHand )
{
  cout << "The hand's value is now " << theHand << "." << endl;
  return;  
}

// whoWins: tell the player who wins, based on the
// values of both hands at the end of the play
void whoWins( int playerHand, int houseHand )
{
  cout << endl;
  if( playerHand > 21 )
    cout << "The house wins the hand." << endl;
  else if( houseHand > 21 )
    cout << "The player wins the hand." << endl;
  else if( houseHand > playerHand )
    cout << "The house wins the hand." << endl;
  else if( houseHand < playerHand )
    cout << "The player wins the hand." << endl;
  else
    cout << "The hand is a draw." << endl;
}

// announceResult: What is the final value of
// a given side's hand?
void announceResult( bool side, int theHand )
{
  // Has the side in question busted? Yes, if its
  // hand's value is over 21
  if( theHand > 21 )
  {
    if( HOUSE_SIDE == side )
      cout << "The house busts!" << endl;
    else
      cout << "The player busts!" << endl;
  }

  // Otherwise, the side has held
  else
  {
    if( HOUSE_SIDE == side )
      cout << "The house holds on " << theHand << endl;    
    else
      cout << "The player holds on " << theHand << endl;    
  }
  return;
}


/********************************************************
 HOUSE HAND FUNCTIONS
 The functions that help us build the house's hand
 *******************************************************/

// buildHouseHand: Starting with a face card that has 
// already been selected, draw cards until the house
// has at least 17
int buildHouseHand( int theHand, bool & hasBigAce )
{
  while( theHand < 17 )
  {
    cout << "The house draws on " << theHand
         << " and receives... " << endl;
    theHand = drawAndAddCardToHand( theHand, hasBigAce );
  }
  return theHand;
}

// drawOpenHouseCard: Draw a face card for the house
// before the player build his hand.
int drawOpenHouseCard( bool & hasBigAce )
{
  cout << "The dealer will draw an open card for the house..." << endl;
  return( drawAndAddCardToHand( 0, hasBigAce ) );  
}


/********************************************************
 COMMON FUNCTIONS
 These functions help build the hands of both player and
 house
 ********************************************************/

// drawAndAddCardToHand: deal a card to the current side
int drawAndAddCardToHand( int theHand, bool & hasBigAce )
{
  int theCard = drawOneCard();
  announceCard( theCard );
  theHand = addCardToHand( theHand, theCard, hasBigAce );
  announceHand( theHand );
  return theHand;
}

// drawOneCard: Pick a card at random; we assume an infinite
// supply of cards
int drawOneCard()
{
  return( rand() % 13 + 1 );   
}

// addCardToHand: Add the new card to the side's hand. If the
// new card makes the hand's total value higher than 21, see if
// the hand doesn't contain an ace whose value we can lower from
// 11 to 1.
int addCardToHand( int theHand, int theCard, bool & handContainsAce11 )
{
  // Add the nominal value; face cards are all worth 10 points
  if( theCard > 10 )
    theHand += 10;

  // Aces are worth 11 if that is possible without busting, 
  // 1 otherwise
  else if( 1 == theCard && theHand <= 10 )
  {
    theHand += 11;
    handContainsAce11 = true;
  }
  // In all other cases, the card's face value is added
  else
    theHand += theCard;

  // If the new hand value is over 21, try to shrink it
  if( theHand > 21 && handContainsAce11 )
  {
    theHand -= 10;
    handContainsAce11 = false;
  }

  return theHand;
}

/*********************************************************
 PLAYER FUNCTIONS
 Functions that assist in assembling the human player's
 hand
 ********************************************************/

// isPlayerHolding: Ask the player whether to hold or
// draw another card, based on his hand's current value
bool isPlayerHolding( int theHand )
{
  cout << "Do you wish to hold on " << theHand
       << "? Type [Y]es or [N]o." << endl;

  // Ask for answers until one is entered...
  char answer;
  do
  {
    cin >> answer;
    answer = toupper( answer );
  } while( answer != 'Y' && answer != 'N' );

  // Player holds on 'Y'es
  return( 'Y' == answer );
}

// buildPlayerHand: Draw cards for the player until the
// player holds or busts
int buildPlayerHand()
{
  // start with an empty hand
  int theHand = 0;
  bool hasBigAce = false;

  cout << endl 
       << "The dealer will now deal cards to the player..." << endl;

  // Give the player two cards to begin...
  for( int i = 0; i < 2; i++ )
  {
    theHand = drawAndAddCardToHand( theHand, hasBigAce );
  }

  // Then add one card at a time until the player holds or busts
  bool playerHolds = false;
  while( theHand < 21 && !playerHolds )
  {
    playerHolds = isPlayerHolding( theHand );
    if ( !playerHolds )
    {
      theHand = drawAndAddCardToHand( theHand, hasBigAce );
    }
  }
  
  return theHand;
}
