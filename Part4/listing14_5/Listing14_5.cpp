#include <iostream>
    #include <string.h>
    using namespace std;

    int main(int argc, char* argv[])
    {
      char string1[] = “Stovokor”;
      int length = 0;
      length = strlen( string1 );

      cout << “string1 := “ << string1 << “ with length := “ << length
           << endl;
      
      return 0;
    }

