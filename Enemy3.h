#ifndef ENEMY3_H
#define ENEMY3_H
#include "EnemyBase.h"
//enum ANIMATION3 {MOVING3, CALL3, STRIKE3, HIT3};
//static int CURRENT_DIRECTION3 = RIGHT;
class Enemy3: public EnemyBase
{
    public:
        //Enemy3();
        //void Clip(LTexture* image, float x, float y);
        Enemy3(LTexture* image, float x, float y);
        //bool Flip = false;
        //void idleAnimation1();
        //bool is_idle = true;
        const static int MOVING3_FRAMES = 8;
        const static int STRIKE_FRAMES = 6;
        const static int HIT_FRAMES = 9;
        //const static int VERTICAL_JFRAMES = 0;
        //const static int HORIZONTAL_JFRAMES = 0;
        //const static int CROUCH_FRAMES = 0;
        int CURRENT_ANIMATION = MOVING;
        SDL_Rect MOVING3_CLIPS[MOVING3_FRAMES];
        //SDL_Rect NOTMOVING3_CLIPS [NOTMOVING3_FRAMES];
        SDL_Rect HIT_CLIPS [HIT_FRAMES];
        SDL_Rect STRIKE_CLIPS [STRIKE_FRAMES];
        //SDL_Rect VERTICAL_JCLIPS [VERTICAL_JFRAMES];
        //SDL_Rect HORIZONTAL_JCLIPS [HORIZONTAL_JFRAMES];
//        virtual float GetX();
//        virtual float GetY();
        void Render(long int& frame, SDL_Renderer* gRenderer, bool debug);
        virtual ~Enemy3();
        //void Check_Flip(Unit* EnemyObj,Unit* AladdinObj);
        //void Follow(SDL_Rect& AladdinObj);
        //void Move();
};

#endif // ENEMY3_H
