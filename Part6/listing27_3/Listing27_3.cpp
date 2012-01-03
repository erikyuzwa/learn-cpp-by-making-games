#include <iostream>
    using namespace std;
    
    //This snippet demonstrates the "private" qualifier
    class Tank
    {
    private:
      int wheels;
    protected:
      
    public:
      void setWheels(int newWheels){ wheels = newWheels; }
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

