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
    
    ~Monster()
    {
      delete[] name;
    }

    char* getName(){ return name; }

    protected:
  
      char* name;
  
      int hitpoints;

    };

    int main(int argc, char* argv[])
    {
      Monster orc("BloodThunder",220);
      cout << orc.getName() << endl;
      return 0;
    }
