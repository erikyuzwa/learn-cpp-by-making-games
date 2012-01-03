#include <iostream>
    
    using namespace std;

    void countdown(void* data, int size)
    {
      switch(size)
      {
        case sizeof(char) : (*((char*)data))--; break;
        case sizeof(double) : (*((double*)data))--; break;
      }
    }

    int main(int argc, char* argv[])
    {
      char a = 'Z';
      double b = 1602.0;
      countdown(&a,sizeof(a));
      countdown(&b,sizeof(b));
      cout << a << ", " << b << endl;
      return 0;
    }

