#ifndef ENEMY_H
#define ENEMY_H
#include "EnemyBase.h"

class Enemy:public EnemyBase
{
    public:
        //void Clip(LTexture* image, float x, float y);
        //Enemy();
        Enemy(LTexture* image, float x, float y);
        const static int MOVING_FRAMES = 8;
        const static int NOTMOVING_FRAMES = 6;
        const static int STRIKE_FRAMES = 13;
        const static int HIT_FRAMES = 10;
        SDL_Rect MOVING_CLIPS [MOVING_FRAMES];
        SDL_Rect NOTMOVING_CLIPS [NOTMOVING_FRAMES];
        SDL_Rect HIT_CLIPS [HIT_FRAMES];
        SDL_Rect STRIKE_CLIPS [STRIKE_FRAMES];
        virtual ~Enemy();
        //void Check_Flip(Unit* EnemyObj,Unit* AladdinObj);
        //void Move();
        void Render(long int& frame, SDL_Renderer* gRenderer, bool debug);
//        float GetX();
//        float GetY();
};

#endif

