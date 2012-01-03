#include <iostream>

    using namespace std;

    #define findmax(a,b) ((a)>(b)?(a):(b))

    int main(int argc, char* argv[])
    {
      int x=5, y;
      
      y = findmax(x,2);
      
      cout << y << endl;
      
      cout << findmax(7,x) << endl;
      return 0;
    }

