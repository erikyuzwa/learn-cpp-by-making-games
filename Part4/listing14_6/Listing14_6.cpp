#include <iostream>
    #include <string.h>

    using namespace std;

    int main ()
    {
      char str[] ="My favorite NES code is UU-DD-LRLR-BA-SELECT
                   -START.";
      char *pch;
      cout << "Splitting string \" << str << " in tokens:\n”;
      pch = strtok (str," ");
      while (pch != NULL)
      {
        cout << pch << endl;
        pch = strtok (NULL, " ,.-");
      }
  
      return 0;
    }

