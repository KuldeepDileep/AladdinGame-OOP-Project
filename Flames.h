#ifndef FLAMES_H
#define FLAMES_H
#include "EnemyBase.h"

class Flames: public EnemyBase
{
    public:
        Flames(LTexture* image, float x, float y);
        virtual ~Flames();
        const static int FLAME_FRAMES = 1;
        SDL_Rect FLAME_CLIPS [FLAME_FRAMES];
        void Move();
        void Render(long int& frame, SDL_Renderer* gRenderer, bool debug);
};

#endif // FLAMES_H
