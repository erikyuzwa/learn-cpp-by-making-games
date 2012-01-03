#include <iostream>
    using namespace std;

    //This snippet demonstrates the "public" qualifier
    class Tank
    {
    public:
     int wheels;
    };

    int main(int argc, char* argv[])
    {

      Tank sherman;
      sherman.wheels = 12;

      cout << "Tank has " << sherman.wheels << " wheels! " << endl;

      return 0;
    }
