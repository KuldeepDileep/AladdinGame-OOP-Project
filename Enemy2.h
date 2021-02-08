#ifndef ENEMY2_H
#define ENEMY2_H
#include "EnemyBase.h"
//enum ANIMATION2 {MOVING2, CALL2, STRIKE2, HIT2};

class Enemy2: public EnemyBase
{
    public:
        //void Clip(LTexture* image, float x, float y);
        Enemy2(LTexture* image, float x, float y);
        //bool Flip = false;
        //void idleAnimation1();
        //bool get_is_MOVING2();
        //bool is_idle = true;
        const static int MOVING2_FRAMES = 8;
        //const static int NOTMOVING2_FRAMES = 6;
        //const static int IDLE3_FRAMES = 31;
        //const static int RUN_FRAMES = 13;
        const static int STRIKE_FRAMES = 6;
        const static int HIT_FRAMES = 9;
        //const static int VERTICAL_JFRAMES = 0;
        //const static int HORIZONTAL_JFRAMES = 0;
        //const static int CROUCH_FRAMES = 0;
        int CURRENT_ANIMATION = MOVING;
        SDL_Rect MOVING2_CLIPS [MOVING2_FRAMES];
        //SDL_Rect NOTMOVING2_CLIPS [NOTMOVING2_FRAMES];
        SDL_Rect HIT_CLIPS [HIT_FRAMES];
        SDL_Rect STRIKE_CLIPS [STRIKE_FRAMES];
        //SDL_Rect VERTICAL_JCLIPS [VERTICAL_JFRAMES];
        //SDL_Rect HORIZONTAL_JCLIPS [HORIZONTAL_JFRAMES];
        //virtual float GetX();
        //virtual float GetY();
        void Render(long int& frame, SDL_Renderer* gRenderer, bool debug);
        virtual ~Enemy2();
        //void Check_Flip(Unit* EnemyObj,Unit* AladdinObj);
        //void Follow(SDL_Rect& AladdinObj);
        //void Move();
};

#endif // ENEMY2_H
