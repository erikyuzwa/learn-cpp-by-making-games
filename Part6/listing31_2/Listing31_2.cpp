#include <iostream>
using namespace std;

class Monster
    {
    public:
    Monster(char* new_name, int new_hitpoints)
    {  
      hitpoints = new_hitpoints;

      name = new char[strlen(new_name) + 1]; 
 
      strcpy(name, new_name);

    }
    
    Monster(const Monster &original)
    {
      hitpoints = original.hitpoints;
      name = new char[strlen(original.name) + 1];
      strcpy(name,original.name);
    }

    ~Monster(){ delete [] name; }

    char* getName(){ return name; }
  
    int getHP(){ return hitpoints; }

    protected:
  
      char* name;
  
      int hitpoints;

    };

    int main(int argc, char* argv[])
    {
      Monster orc("BloodThunder",220);
      cout << orc.getName() << endl;
      
      int i = 0;
      do
      {
        static Monster orc_boss( orc );

        i++;
      }while( i < 10 );

      return 0;
    }
