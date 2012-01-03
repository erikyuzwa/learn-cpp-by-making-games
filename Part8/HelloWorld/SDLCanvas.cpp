
#include "SDLCanvas.h"

SDLCanvas::SDLCanvas()
{
  pSurface = NULL;
}

SDLCanvas::~SDLCanvas()
{
  destroyCanvas();
}

bool SDLCanvas::createCanvas(int width, int height, int bpp, bool windowed)
{
      
     int flags = SDL_SWSURFACE;

	 pSurface = SDL_SetVideoMode(width, height, bpp, flags);
	 if(NULL == pSurface)
	   return false;

     return true;
}

void SDLCanvas::destroyCanvas()
{
     if(pSurface)
	{
		SDL_FreeSurface( pSurface );
	}
    
}

