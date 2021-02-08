#ifndef CAMEL_H
#define CAMEL_H
#include "EnemyBase.h"
class Camel: public EnemyBase
{
    public:
        Camel(LTexture* image, float x, float y);
        virtual ~Camel();
        const static int CAMEL_FRAMES = 1;
        const static int CAMEL_ANIMATION_FRAMES = 6;
        SDL_Rect CAMEL_CLIPS [CAMEL_FRAMES];
        SDL_Rect CAMEL_ANIMATION_CLIPS[CAMEL_ANIMATION_FRAMES];
        //void Move();
        void Render(long int& frame, SDL_Renderer* gRenderer, bool debug);
};

#endif // CAMEL_H
