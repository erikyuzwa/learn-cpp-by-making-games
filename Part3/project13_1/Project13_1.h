/*************************************
 Learn C++ Programming by Making Games
 Project 13.1 - Simple Blackjack game
 Header file
 ************************************/

#ifndef PROJECT13_1_H
#define PROJECT13_1_H

// Constants defining the sides
const bool PLAYER_SIDE = true;
const bool HOUSE_SIDE = false;

// Functions shared by both sides
int drawOneCard();
int addCardToHand( int theHand, int theCard, bool & handContainsAce11 );
int drawAndAddCardToHand( int theHand, bool & hasBigAce );

// Output functions, sending messages to the user
void announceCard( int theCard );
void announceHand( int theHand );
void announceResult( bool side, int theHand );
void whoWins( int playerHand, int houseHand );

// Functions involved in building the player's hand
bool isPlayerHolding( int theHand );
int buildPlayerHand();

// Functions involved in building the house's hand
int buildHouseHand( int theHand, bool & hasBigAce );
int drawOpenHouseCard( bool & hasBigAce );

#endif