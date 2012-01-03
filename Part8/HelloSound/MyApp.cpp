
#include "MyApp.h"

MyApp::MyApp()
{
  pCanvas = NULL;
}

MyApp::~MyApp()
{
}

bool MyApp::createGame()
{
  pCanvas = new SDLCanvas();
  
  if(!pCanvas->createCanvas(640, 480, 32 ,true))
  {
    return false;
  }

  if(!pCanvas->createFont("data\\arial.ttf", 24))
  {
	return false;
  }

  pSprite = new SDLSprite();
  pSprite->loadImage("data\\ship.bmp");

  pSprite->setPos(100, 100);
  pSprite->setDim(20, 20);

  pSound = new SDLSound();
  if(!pSound->createSound())
  {
	return false;
  }

  if(!pSound->loadSound( LASER, "data\\laser.wav", false ))
  {
	return false;

  }

  if(!pSound->loadSound( BGMUSIC, "data\\test.ogg", true ))
  {
	return false;
  }

  pSound->playMusic( BGMUSIC );

     
  return true;
}

void MyApp::updateGame(float fElapsedTime)
{
	SDL_Color blue = {0,0,255};
	SDL_Color black = { 0, 0, 0};


	if(pCanvas->clearCanvas())
	{
	
		pCanvas->printText(blue, black, "Using Sprites", solid);

		pCanvas->drawSprite( pSprite, pSprite->posx, pSprite->posy );


		pCanvas->flipCanvas();

	}

	




           
}

void MyApp::destroyGame()
{

	 if(pSound)
	 {
		delete pSound;
		pSound = NULL;
	 }

	 if(pSprite)
	 {
		delete pSprite;
		pSprite = NULL;
	 }

     if(pCanvas)
     {
      delete pCanvas;
      pCanvas = NULL;
     }
}
