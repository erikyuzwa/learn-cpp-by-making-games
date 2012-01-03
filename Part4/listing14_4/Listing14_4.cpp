#include <iostream>
    #include <string.h>

    using namespace std;

    int main(int argc, char* argv[])
    {
      char string1[] = “Stovokor”;
      char string2[80];

      strcpy( string2, string1 );

      cout << “string1 := “ << string1 << endl;
      cout << “string2 := “ << string2 << endl;

      return 0;
    }

