/*************************************
 Learn C++ Programming by Making Games
 Example 11.1: Tax rate calculation
*************************************/

#include <iostream>
using namespace std;

// The tax rate function
double potionPriceCalculator( int potions, double unitPrice, double taxRate )
{
  return( potions * unitPrice * ( 1.0 + taxRate ) );
}

int main()
{
  cout << "Total Price is " << potionPriceCalculator( 10, 5.25, 0.07 ) << endl;
  return 0;
}