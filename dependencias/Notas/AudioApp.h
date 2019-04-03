#ifndef GAMMA_AUDIO_APP_H_INC
#define GAMMA_AUDIO_APP_H_INC
/*	Gamma - Generic processing library
	See COPYRIGHT file for authors and license information
	
	Description: A very basic audio application abstraction
*/

#include <stdio.h>
#include "Gamma/AudioIO.h"
#include "Gamma/Domain.h"

namespace gam{

class AudioApp : public AudioCallback{
public:

	AudioApp(){
		mAudioIO.append(*this);
		initAudio(44100);
		//initAudio(8000);
	}

	void initAudio(
		double framesPerSec, unsigned framesPerBuffer=128,
		unsigned outChans=2, unsigned inChans=0
	){
		mAudioIO.framesPerSecond(framesPerSec);
		mAudioIO.framesPerBuffer(framesPerBuffer);
		mAudioIO.channelsOut(outChans);
		mAudioIO.channelsIn(inChans);
		sampleRate(framesPerSec);
	}

	AudioIO& audioIO(){ return mAudioIO; }

	void start(bool block=true){
		mAudioIO.start();
		if(block){		
			printf("Press 'enter' to quit...\n"); getchar();
		}

	}

	void start3(bool block=true){
		mAudioIO.start();
	}


	char start2(bool block=true){
		mAudioIO.start();
		int c;
		if(block){		
			printf("Press 'enter' to quit...\n"); c=getchar();
		}
		return c;
	}


	void quiet(){
		mAudioIO.stop();
		mAudioIO.close();
		}

	void set_mult(float num){
		mult=num+cont;
		}

	float get_mult(){
		return mult;
		}


private:
	AudioIO mAudioIO;
	float mult=0;
	float cont=0.5;
};

}

#endif
