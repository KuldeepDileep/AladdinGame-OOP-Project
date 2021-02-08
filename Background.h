#ifndef BACKGROUND_H
#define BACKGROUND_H
#include "SDL.h"
#include "SDL_image.h"
#include "LTexture.h"
class Background
{
private:
    SDL_Rect camera = { 0, 0, 0, 0 };
    LTexture* backGroundSprite;
public:
    Background(LTexture* image);
    ~Background();
    void setCameraPosition(int x, int y, int h, int w); // takes camera's position
    void Render(SDL_Renderer* gRenderer);
};



#endif // BACKGROUND_H
