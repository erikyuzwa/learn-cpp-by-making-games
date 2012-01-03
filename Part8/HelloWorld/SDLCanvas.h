
#ifndef __SDLCANVAS_H_
#define __SDLCANVAS_H_

#include "stdafx.h"

/** This object is used as an attempt to encapsulate the more common
* tasks or operations when working with graphics
*/
class SDLCanvas
{
protected:
  SDL_Surface* pSurface; /** our SDL_Surface for drawing */

public:
  /** constructor */
  SDLCanvas();

  /** destructor */
  ~SDLCanvas();

  /** This function just creates the video surface according to our
  * needs
  * @param int    - width of video surface
  * @param int    - heigh of video surface
  * @param int    - bits-per-pixel of surface
  * @param bool   - windowed or fullscreen?
  * @return bool - true if everything's ok
  */
  bool createCanvas( int width, int height, int depth, bool windowed = true );

  /** destroy our video surface */
  void destroyCanvas();
};




#endif


             
