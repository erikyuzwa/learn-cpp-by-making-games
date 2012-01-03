
#ifndef __SDLSOUND_H_
#define __SDLSOUND_H_

#include "stdafx.h"


class SDLSound
{
public:

       Mix_Chunk* pSound;
       Mix_Music* pMusic;

	   
public:
      SDLSound();
      ~SDLSound();

	  bool createSound();
             
      bool loadSound(int sound_id, const char* strAudio, bool bMusic = false);
      
	  void playSound( int sound_id );
	  void stopSound( int sound_id );

	  void playMusic( int sound_id );
	  void stopMusic( int sound_id );
	  
	  void destroySound();
};



#endif

