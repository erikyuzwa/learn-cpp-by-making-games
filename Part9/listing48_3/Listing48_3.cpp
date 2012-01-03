#include <iostream>
#include <string>
#include <vector>
#include <map>

 //specify that you want to use objects from the std namespace
    using namespace std;
    

//to demonstrate how simple it is to store objects in a map
    //container, define a simple monster object
    struct sMonster
    {
      std::string monster_name;
      int monster_health;
    };

    int THAL_KEY = 1;
    int KALED_KEY = 2;

   
    int main(int argc, char* argv[])
    {

      map<int, sMonster*> oMonsters;
      sMonster* mon1 = new sMonster();
      sMonster* mon2 = new sMonster();
      
      //set some basic properties for the monsters
      mon1->monster_name = "Thal";
      mon1->monster_health = 100;
      mon2->monster_name = "Kaled";
      mon2->monster_health = 50;

      //insert them into the map container using a key 
      //value that we can use to find them later
      oMonsters.insert(make_pair(THAL_KEY, mon1));
     
      //the following assignment is also legal
      oMonsters[KALED_KEY] = mon2;

      //we want to find the Thal monster to we need an
      //iterator object to enumerate the map elements
      map<ing, sMonster*>::iterator iter;

      //find the element matching the key value
      iter = oMonsters.find(THAL_KEY);
      if (iter == oMonsters.end())
      {
        //can’t find it!
        cerr << "The Thal has been exterminated!" << endl;
      }else
      {
        cerr << "The Thal has " << iter->second->monster_health 
        << " health left. " << endl;
      }
      
      //clean up. Note that since you are storing pointers to sMonster
      //objects which are allocated on the memory heap, you need
      //to clean up and deallocate this memory before calling the
      //clear() method of the container.
     
      sMonster* pObj;
      for(map<int, sMonster*>::iterator it = oMonsters.begin();
        it != oMonsters.end(); it++)
      {
        delete it->second;
          it->second = NULL;

          }
      }

      //clear the map of the sMonster pointers
      oMonsters.clear();

      return 0;
    }
