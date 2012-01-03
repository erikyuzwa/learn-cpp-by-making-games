#include <iostream>
using namespace std;

int main(int argc, char* argv[])
    {

    int *pInt = new int[200];
    for(int i = 0; i < 200; i++) 
    {
      pInt[i] = 0;
    }
    
    //Note that the following code will work as well using pointer
    //arithmetic
    for(int i = 0; i < 200; i++)
    {
      *pInt = 0;
      pInt++;
    }

    return 0;
    }
