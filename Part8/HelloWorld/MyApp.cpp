
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
     
  return true;
}

void MyApp::updateGame(float elapsedtime)
{
           
}

void MyApp::destroyGame()
{
     if(pCanvas)
     {
      delete pCanvas;
      pCanvas = NULL;
     }
}
