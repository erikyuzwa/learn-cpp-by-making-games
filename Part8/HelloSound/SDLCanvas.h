
#ifndef __SDLCANVAS_H_
#define __SDLCANVAS_H_

#include "stdafx.h"
#include "SDLSprite.h"

enum textquality {solid = 0, shaded, blended};

/** This object is used as an attempt to encapsulate the more common
* tasks or operations when working with graphics
*/
class SDLCanvas
{
public:
  SDL_Surface* pSurface; /** our SDL_Surface for drawing */

  

  TTF_Font* pFont;       /** our TrueType font */

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

  /** This function merely clears our back buffer */
  bool clearCanvas();

  /** This function initiates the page flipping process */
  void flipCanvas();


  /**
  * This function is used to load the specified TrueType font for
  * use by our SDLCanvas object. For now it only supports one font
  * at a time 
  * @param char* - font family we want (ie. Arial )
  * @param int   - size of the font (ie. 8, 10 or 12 )
  * @return bool - true if we're gtg
  */
  bool createFont( char* strFontFace, int size );

  /** This method just prints the desired text to the screen
  * using the true-type library
  * @param fgR, fgB, fgB, fgA - the foreground color to use
  * @param bgR, bgB, bgB, bgA - the background color to use
  * @param strText* - the text to draw
  * @param textquality - solid, blended or shaded
  */
  void printText(SDL_Color fgColor, SDL_Color bgColor, 
    char* strText, textquality quality );


  /** Draw the given SDLSprite object to our main SDL_Surface!
  * @param pSprite - pointer to our SDLSprite 
  * @param x, y    - location of sprite on our main screen
  */
  void drawSprite( const SDLSprite* pSprite, int x, int y );


};




#endif


             
