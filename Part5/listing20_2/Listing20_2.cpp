#include <iostream>
    
    using namespace std;

    int main(int argc, char* argv[])
    {
      int original_value = 3;
      int *pValue = 0;
      pValue = &original_value;
      original_value = 10;
      cout << "original_value has value := " << *pValue << endl;
      return 0;
    }

