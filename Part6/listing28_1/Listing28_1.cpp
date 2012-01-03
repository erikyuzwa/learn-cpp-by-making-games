#include <iostream>
using namespace std;

class Airplane
    {
    public:
      int wheels;

    public:
      Airplane()
      {
        cout << "Airplane::Constructor()" << endl;
        wheels = 4;
      }

      void setWheels(int new_wheels)
      {
        wheels = new_wheels;
      }
};


int main(int argc, char* argv[])
    {
    
      //When we declare an object, the program automatically calls the
      //default
      //constructor for that object
      Airplane Cessna;

      //note that this is identical to declaring Cessna as
      //Airplane Cessna();
 
      cout << "Our airplane has " << Cessna.wheels << " wheels" << endl;


      return 0;
    }

