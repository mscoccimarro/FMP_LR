#include "XM_SDL.h"
#include <iostream>
#include <cstdlib>

using namespace std;

XM_SDL::XM_SDL() {

/*
  enum InitFlags {
    SDL_INIT_TIMER,	     // timer subsystem.
    SDL_INIT_AUDIO,	     // audio subsystem.
    SDL_INIT_VIDEO,	     // video subsystem. Automatically initializes the SDL_INIT_EVENTS subsystem. 
    SDL_INIT_JOYSTICK,	     // joystick subsystem.
    SDL_INIT_HAPTIC,	     // haptic (force feedback) subsystem.
    SDL_INIT_GAMECONTROLLER, // controller subsystem. Automatically initializes the SDL_INIT_JOYSTICK subsystem.
    SDL_INIT_EVENTS,	     // events subsystem.
    SDL_INIT_EVERYTHING,     // all of the above subsystems.
    SDL_INIT_NOPARACHUTE     // compatibility. This flag is ignored.
  };
*/
  if( SDL_Init( SDL_INIT_VIDEO ) < 0 ) {
    cout << endl << "Unable to initialize SDL: " << SDL_GetError() << endl;
    exit(1);
  }

  this->window = NULL;
}

bool XM_SDL::createWindow( const char* TITLE, const int WIDTH, const int HEIGHT ) {
  this->window = SDL_CreateWindow( TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 
				   WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
  if( this->window == NULL ) {
    cout << endl << "Unable to create window: " << SDL_GetError() << endl;
    return false;
  }

  return true;
}

void XM_SDL::displayWindow() {

}
