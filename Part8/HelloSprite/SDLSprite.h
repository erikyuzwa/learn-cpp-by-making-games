
#ifndef __SDLSPRITE_H_
#define __SDLSPRITE_H_

#include "stdafx.h"

class SDLSprite
{
public:

  int posx; /** x position of the sprite */
  int posy; /** y position of the sprite */

  int dimx; /** how wide the sprite rectangle is */
  int dimy; /** how tall the sprite rectangle is */

  SDL_Surface* pSurface;

public:
  /** constructor */
  SDLSprite();
  
  /** virtual destructor */
  virtual ~SDLSprite();

  /** Easy way to set the position of your Sprite
  * @param x, y - x and y positions 
  */
  void setPos(int x, int y){ posx = x; posy = y; }

  /** Easy way to set the dimension (width, heigh) of the Sprite
  * @param x,y - width and height of sprite
  */
  void setDim(int x, int y){ dimx = x; dimy = y; }

  bool loadImage(const char* strImage);
};





#endif

