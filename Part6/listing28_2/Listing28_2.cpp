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
        wheels = 0; 
      }
      
      Airplane( int new_wheels )
      { 
        cout << "Airplane::Constructor(int)" << endl;
        wheels = new_wheels; 
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
      Airplane cessna(12);
      Airplane spitfire;

      //note that this is identical to declaring Cessna as
      //Airplane Cessna;
      //Cessna.setWheels(12);
 
      cout << "Cessna has " << cessna.wheels << " wheels." << endl;
      cout << "Spitfire has " << spitfire.wheels << " wheels." << endl;


      return 0;
    }

