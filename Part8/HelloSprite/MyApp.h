#ifndef __MYAPP_H_
#define __MYAPP_H_

#include "MainApplication.h"
#include "SDLCanvas.h"
#include "SDLSprite.h"

/** 
 * We want to use the MainApplication object but extend it to allow our
 * own specific instance
 */
class MyApp : public MainApplication
{
protected:
  SDLCanvas* pCanvas;  /** pointer to the SDLCanvas */

  SDLSprite* pSprite;

public:
  /**constructor*/
  MyApp();       
        
  /**destructor */
 ~MyApp();

  /** virtual function for creating game objects 
  * @return bool - true if created ok
  */
  bool createGame();

  /** virtual function for updating game objects
  * @param float - elapsed time since last update
  */
  void updateGame(float);

  /** virtual function for destroying game objects */
  void destroyGame();
};


#endif

