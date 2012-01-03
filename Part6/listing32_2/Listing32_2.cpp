#include <iostream>
using namespace std;

int main(int argc, char* argv[])
    {

      int *pInt = new int( 10 );

      char *pLetter = new char('W');

      //*snip*
      //do things with pInt and pLetter
      //*snip*
    
      //now deallocate them with delete
      delete pInt;

      delete pLetter;

      return 0;
    }

