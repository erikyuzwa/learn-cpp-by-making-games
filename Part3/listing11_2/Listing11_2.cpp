/*************************************
 Learn C++ Programming by Making Games
 Example 11.2: Default argument
*************************************/

#include <iostream>
using namespace std;

// The tax rate function
double potionPriceCalculator( int potions, 
                              double unitPrice, 
                              double taxRate = 0.07 )
{
  return( potions * unitPrice * ( 1.0 + taxRate ) );
}

int main()
{
  // First, a call that relies on the default
  cout << potionPriceCalculator( 10, 5.25 ) << endl;

  // Then, a call that overrides the default
  cout << potionPriceCalculator( 10, 5.25, 0.11 ) << endl;

  return 0;
}