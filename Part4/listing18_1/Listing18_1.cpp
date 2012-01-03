/*************************************
 Learn C++ Programming by Making Games
 Example 18.1
*************************************/

#include <iostream>
using namespace std;

//let us use the element structure we have seen
struct sElement
{
  char description[80];
  float refined_value;
};

    int main(int argc, char* argv[])
    {

      sElement elements[2]; //define an array of two sElement items

      strcpy(elements[0].description, "dilithium crystal");
      elements[0].refined_value = 1000.0f;

      strcpy(elements[1].description, "solonoid crystal");
      elements[1].refined_value = 10.0f;


      for(int i = 0; i < 2; i++)
      {
        cout << "element[" << i << "] has: ";
        cout << elements[i].description << " and is worth ";
        cout << elements[i].refined_value << " on the open market.";
        cout << endl << endl;
      }

      return 0;
    }
