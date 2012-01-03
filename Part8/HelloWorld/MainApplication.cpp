/**
*
*
*/
#include "MainApplication.h"

using namespace std;

MainApplication::MainApplication()
{
}

MainApplication::~MainApplication()
{

}

bool MainApplication::createApp(const char* strApplicationName)
{

	//first before anything, initialize SDL
	if(SDL_Init(SDL_INIT_EVERYTHING) < 0 )
	{
		return false;
	}


	if( !createGame() )
	{
		return false;
	}

	//now adjust our title bar
	SDL_WM_SetCaption(strApplicationName, strApplicationName);


	return( true );
}

void MainApplication::destroyApp()
{

	destroyGame();

	//last but not least, shutdown SDL
	SDL_Quit();

}

int MainApplication::runApp()
{
  bool bDone = false;  // is main loop finished?
  SDL_Event event;     // temp variable to store current event

  // as long as our main loop is not done
  while(!bDone)
  { 
    //check the event queue for the next message
    while( SDL_PollEvent(&event) )
    {
      // while we have an event message in the queue,
      // you need to determine what it is
      switch ( event.type )
      { 
     
        case SDL_QUIT : // if user wishes to quit
          bDone = true; // this implies the main loop is done
        break;

        default: //default is to do nothing
          break;
      
      } //end switch
    } //end while( SDL_PollEvent )

    //update the game here since the events are done processing
    //ie. the Process Phase

  } //end while( !bDone )

  //the game is finished and is exiting. Do the garbage collection
  destroyApp();
  //no errors, return 0
  return 0;
}


