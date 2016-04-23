#include <SDL2/SDL.h>

class XM_SDL {
  private:
   SDL_Window* window; 

  public:
    XM_SDL();
    bool createWindow( const char* TITLE, const int WIDTH = 640, const int HEIGHT = 480 );
    void displayWindow();
};
