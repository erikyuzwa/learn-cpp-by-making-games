
#include "SDLSound.h"

SDLSound::SDLSound()
{
	pSound = NULL;
	pMusic = NULL; 
}

SDLSound::~SDLSound()
{
  destroySound();
}

bool SDLSound::createSound()
{
    int audio_rate      = 22050;     //a 22050 Hz frequency rate
    Uint16 audio_format = AUDIO_S16; // 16-bit stereo
    int audio_channels  = 2;
    int audio_buffers   = 4096;
    //This is where we open up our audio device.  
    //Mix_OpenAudio takes as its parameters the audio format
    //we'd *like* to have. 
    if(Mix_OpenAudio(audio_rate, //frequency
      audio_format, //audio format
      audio_channels, //2 for stereo, 1 for mono
      audio_buffers)) //bytes used per output sample
    {
      return false;
    }
    //query the audio layer to see what we really ended up with
    Mix_QuerySpec(&audio_rate, &audio_format, &audio_channels);

	
     
    return true;
}

bool SDLSound::loadSound(int sound_id, const char* strAudio, bool bMusic)
{
	

	if(!bMusic)
	{
		pSound = Mix_LoadWAV( strAudio );
		if(pSound == NULL)
			return false;

	}else
	{
		pMusic = Mix_LoadMUS( strAudio );
		if(pMusic == NULL)
			return false;
	}


	return true;


}

void SDLSound::destroySound()
{
    Mix_HaltMusic();

	Mix_FreeChunk( pSound );

    
	Mix_FreeMusic( pMusic );

	

    Mix_CloseAudio();

     
}

void SDLSound::playSound( int sound_id )
{
	Mix_PlayChannel( -1, //use the first free channel
      pSound,            //the audio resource to play
      -1 );              


}

void SDLSound::stopSound( int channel_id )
{

	Mix_HaltChannel( channel_id );

}

void SDLSound::playMusic( int sound_id )
{
	Mix_PlayMusic( pMusic, 0 );

}

void SDLSound::stopMusic( int sound_id )
{
	Mix_HaltMusic();
}
