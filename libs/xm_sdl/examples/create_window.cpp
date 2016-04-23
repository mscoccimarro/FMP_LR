#include "../XM_SDL.h"

int main() {

  const int WINDOW_WIDTH = 640;
  const int WINDOW_HEIGHT = 480;
  const char* WINDOW_TITLE = "Full Metal Panic! Last Raid";

  XM_SDL* sdlHandler = new XM_SDL();

  sdlHandler->createWindow( WINDOW_TITLE, WINDOW_WIDTH, WINDOW_HEIGHT ); 

  sdlHandler->displayWindow();

  delete sdlHandler;

  return 0;
}
