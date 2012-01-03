
#include "SDLSprite.h"

SDLSprite::SDLSprite()
{
    posx = posy = 0;
    dimx = dimy = 0;

  
  pSurface = NULL;
                      
}

SDLSprite::~SDLSprite()
{
  if(pSurface)
  {
    SDL_FreeSurface( pSurface );
  }
}

bool SDLSprite::loadImage(const char* strPath)
{
     pSurface = SDL_LoadBMP(strPath);
     if(NULL == pSurface)
     {
       return false;
     }
     
     
     return true;
}

/*
void SDLSprite::drawSprite(SDL_Surface* pTarget)
{
    SDL_Rect destination;

	destination.x = m_x;
	destination.y = m_y;
	destination.w = m_width;
	destination.h = m_height;

	SDL_BlitSurface( m_pSurface, NULL, pTarget, &destination );
     
     
}*/
