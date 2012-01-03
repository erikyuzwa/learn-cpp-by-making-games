/*************************************
 Learn C++ Programming by Making Games
 Example 18.2
*************************************/

#include <iostream>
using namespace std;

//let us use the element structure we have seen
union sElement
{
  char description[80];
  float refined_value;
};

    int main(int argc, char* argv[])
    {

      sElement dilithium; //define an array of two sElement items

      strcpy(dilithium.description, "dilithium crystal");
      dilithium.refined_value = 1000.0f;

     
     cout << dilithium.description << " is worth ";
      cout << dilithium.refined_value << " on the open market.";
      cout << endl << endl;
     

      return 0;
    }
    
