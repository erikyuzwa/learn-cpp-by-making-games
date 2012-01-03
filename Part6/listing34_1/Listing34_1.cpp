#include <iostream>
using namespace std;

    class Building
    {
    protected:
      char address[50];
      float sqfoot;

    public:
      Building(char a[], float sqft) : sqfoot(sqft)
      {
        strcpy( address, a );
      }

      ~Building(){}

      void PrintStats()
      {
        cout << "Building address: " << address << " of " << sqfoot
             << endl;
      }
    };

    class HauntedHouse : public Building
    {
    protected:
      int ghostcount;

    public:
      HauntedHouse(char a[], float sqft, int g ) : Building(a, sqft)
      {
        ghostcount = g;
      }
      ~HauntedHouse(){}

      void PrintStats()
      {
        cout << "Building address: " << address << " of " << sqfoot
             << " and has " << ghostcount << " ghosts! Yow!" << endl;
      }

    };

    

    int main( int argc, char* argv[] )
    {

	Building* props[2];

      props[0] = new HauntedHouse("Elm Street", 470.2f, 300);
      props[1] = new Building("Duggan Drive", 200.5f);

      for(int i = 0; i < 2; i++)
      { 
        props[i]->PrintStats();
      }
      

      delete props[0];
      delete props[1];
  

      return 0;
    }
