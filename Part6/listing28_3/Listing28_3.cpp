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

      //destructor
      ~Airplane()
      {
        cout << "Airplane::Destructor" << endl;
      }

      void setWheels(int new_wheels)
      { 
        wheels = new_wheels;
      }
    };

    int main(int argc, char* argv[])
    {
      Airplane cessna(12);
      int i = 0;
      do
      {
        static Airplane spitfire;
      
        i++;
      }while(i < 100);

      return 0;
     }

