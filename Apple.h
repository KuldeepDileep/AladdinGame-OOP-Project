#ifndef APPLE_H
#define APPLE_H
#include <SDL.h>
#include "Unit.h"

class Apple:public Unit
{
    public:
        Apple();
        Apple(LTexture* image, float x, float y);
        virtual ~Apple();
        virtual void Render(long int& frame, SDL_Renderer* gRenderer, bool debug);
};

#endif
