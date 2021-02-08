#ifndef CAMELSALIVA_H
#define CAMELSALIVA_H
#include "EnemyBase.h"
#include "Enemy2.h"
class CamelSaliva:public EnemyBase
{
    public:
        CamelSaliva(LTexture* image, float x, float y);
        virtual ~CamelSaliva();
        const static int CAMEL_SALIVA_FRAMES = 1;
        SDL_Rect CAMEL_SALIVA_CLIPS [CAMEL_SALIVA_FRAMES];
        void Move();
        void Render(long int& frame, SDL_Renderer* gRenderer, bool debug);
};

#endif // CAMELSALIVA_H
