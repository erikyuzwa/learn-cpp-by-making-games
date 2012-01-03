#ifndef __MAINAPPLICATION_H_
#define __MAINAPPLICATION_H_

#include "stdafx.h"

class MainApplication
{
public:  
  /** default constructor */
  MainApplication();

  /** virtual destructor */
  virtual ~MainApplication();

  /** perform the creation code for the entire application
  * @param const char* - title of window
  * @return bool - true if initialized properly 
  */
  bool createApp(const char* strAppTitle);

  /** puts the application into the "main loop" which will only
  * return when the player quits the application
  * @return - any error code we want
  */
  int runApp();

  /** cleanup and destroy the application */
  void destroyApp();

  /** virtual function for creating game objects 
  * @return bool - true if created ok
  */
  virtual bool createGame(){ return true; }

  /** virtual function for updating game objects
  * @param float - elapsed time since last update
  */
  virtual void updateGame(float){};

  /** virtual function for destroying game objects */
  virtual void destroyGame(){};
};



#endif


