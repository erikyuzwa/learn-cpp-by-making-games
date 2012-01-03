#include <assert.h>
#include <cstdio>
#include <iostream>

using namespace std;

    void WriteToLog( char* strMessage )
    {
      //use Assert to ensure that our string we want to write
      //to our log file is not NULL
      assert( strMessage != NULL );

      //write the string to our log file
    }


    int main(int argc, char* argv[])
    {

      //A stub function for preparing our log file for use
      //OpenLogFile("debug.log");

      //dump a string to the log file
      WriteToLog( "Making games is fun" );

      //uncomment the following to produce an assert error
      WriteToLog(NULL);

      //*snip*

      //do other things, but always close our log
      //file when finished
      //CloseLogFile();

      return 0;
    }

