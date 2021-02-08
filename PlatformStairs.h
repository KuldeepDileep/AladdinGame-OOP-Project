#ifndef PLATFORMSTAIRS_H
#define PLATFORMSTAIRS_H
#include "SDL.h"
#include "LTexture.h"

class PlatformsNStairs
{
private:
    float x;
    float y;
    int width;
    int height;

    SDL_Rect spriteClips[ 34 ];

    LTexture* spriteSheetTexture;
public:
    PlatformsNStairs();
    virtual ~PlatformsNStairs();

    void Clip(LTexture* image, float x, float y, int num);
    void Render(long int& frame, SDL_Renderer* gRenderer, bool debug, int num, int a, int b);

};


#endif // PLATFORMSTAIRS_H
