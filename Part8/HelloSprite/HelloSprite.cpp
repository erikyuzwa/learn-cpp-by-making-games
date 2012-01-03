
/***********************************************************************
* Project    : HelloSprite
* Description: This project is a bare-bones C++ application on using
*              SDL to display a window and a sprite.
* Author     : Erik Yuzwa
* Date       : 06/15/2006
* Version    : 1.0
************************************************************************/


#include "MyApp.h"

int main(int argc, char* argv[])
{
  /** declare instance of MyApp */
  MyApp objApp;
  
  if(!objApp.createApp("Hello Sprite"))
  {
    /** if MyApp failed to initialize, then return error code */
    return -1;
  }

  /** put MyApp into the "main loop" which only exits when game quits */
  return( objApp.runApp() );
}


