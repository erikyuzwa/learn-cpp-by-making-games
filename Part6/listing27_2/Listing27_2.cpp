#include <iostream>
using namespace std;

class Tank
    {
    protected:
      int wheels;
    public:
      void setWheels( int newWheels ) { wheels = newWheels ; }
      int getWheels(){ return wheels; }
    };
    
    int main(int argc, char* argv[])
    {

      Tank sherman;

      sherman.setWheels( 24 ); 

      
      cout << "Tank has " << sherman.getWheels() << " wheels. " 
        << endl;

      return 0;
    }

