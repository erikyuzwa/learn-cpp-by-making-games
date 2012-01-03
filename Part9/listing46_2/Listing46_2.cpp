#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{

    char *pImage = NULL; 
   
    try
    {

      pImage = new char[256];
      if( NULL == pImage )
      {  
        throw "error allocating memory";
      }

      //try to load an image into pImage
      /*
      int rc = 0;
      rc = pImage->loadImage("titlescreen.png");
      if( rc != 0 )
      { 
        throw rc;
      }*/


    }catch( char* strError )
    {

      cerr << "Caught Exception: " << strError << endl;

    }catch( int error_code )
    {
      cerr << "Caught error code: " << error_code << endl;

    }catch( ... ) 
    {

      //clean up the dynamically allocated array
      if(pImage)
        delete [] pImage;

    }
    
    return 0;
}

