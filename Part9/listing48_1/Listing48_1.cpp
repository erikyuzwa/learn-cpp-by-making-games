#include <iostream>
#include <vector>
    
using namespace std;

class IObject
{
public:
  int m_x;
public:
  IObject(){ m_x = 0; }
  virtual ~IObject(){}
};

int main(int argc, char* argv[])
{
  vector<IObject*> pObjects;
 
  for(int i = 0; i < 10; i++)
  {
    IObject* pTemp = new IObject();
    pTemp->m_x = i;
    pObjects.push_back( pTemp );
  }
  
  //print out results
  for( vector<IObject*>::iterator it = pObjects.begin(); 
    it != pObjects.end(); it++)
  {
      //”it” is a pointer to the element in the iterator, 
      //so *it dereferences it so we can get the value
      cout << " x :=  " << *it->m_x << endl;
  }
  for( vector<IObject*>::iterator it = pObjects.begin(); 
    it != pObjects.end(); it++)
  { 
     //clean up the allocated memory on the free store
     //for this object
     delete *it;
  }
  //finally call the clear method to wipe out the pointers
  pObjects.clear();
  return 0;

}
