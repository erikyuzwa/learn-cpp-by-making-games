
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
      
     Uint32 flags = SDL_SWSURFACE;

	 pSurface = SDL_SetVideoMode(width, height, bpp, flags);
	 if(NULL == pSurface)
	   return false;

     return true;
}

void SDLCanvas::destroyCanvas()
{

	TTF_CloseFont( pFont );

     if(pSurface)
	{
		SDL_FreeSurface( pSurface );
	}
    
}

bool SDLCanvas::clearCanvas()
{
  //if we can get a lock on the surface before drawing
  if(SDL_MUSTLOCK( pSurface ) )
  {
    if(SDL_LockSurface( pSurface ) < 0)
      return false;
  }
  //fill the surface with our chosen background color
  SDL_FillRect( 
    pSurface, 
    NULL, 
    SDL_MapRGB(pSurface->format, 0,0,0 ) );

  return true;
}

void SDLCanvas::flipCanvas()
{
  //our video surface is still locked. Unlock it before doing
  //any flipping operations otherwise we incur huge performance
  //penalties
  if(SDL_MUSTLOCK( pSurface ))
  {
    SDL_UnlockSurface( pSurface );
  }
  //Finally, flip the surface chain!
  SDL_Flip( pSurface );
}


bool SDLCanvas::createFont( char* strFontFace, int size )
{

 if( TTF_Init() < 0 )
 {
   //error loading the library
   return false;
 }

 pFont = TTF_OpenFont(strFontFace, size);
 if (pFont == NULL)
 {
   //error loading font!
   return false;
 }

 return true;
}

void SDLCanvas::printText(SDL_Color fgColor, 
        SDL_Color bgColor, 
        char* strText, textquality quality )
{
	
	SDL_Surface* pFontSurface;    /** our SDL_Surface for fonts */

	if (quality == solid) 
	{
	  pFontSurface = TTF_RenderText_Solid(pFont, strText, fgColor);

	} else if (quality == shaded)
	{ 
	  pFontSurface = TTF_RenderText_Shaded(pFont, strText, fgColor,
		bgColor);
	}
	else if (quality == blended) 
	  pFontSurface = TTF_RenderText_Blended(pFont, strText, fgColor);


	SDL_Rect rcDest = {0,0,0,0};

	SDL_BlitSurface( pFontSurface,NULL, pSurface, &rcDest );

	SDL_FreeSurface( pFontSurface );

}




void SDLCanvas::drawSprite( const SDLSprite* pSprite, int x, int y )
{
SDL_Rect dstRect;
dstRect.x = x;
dstRect.y = y;
SDL_BlitSurface( pSprite->pSurface, NULL, pSurface, &dstRect );
}
