//#ifndef ALADDIN_H
//#define ALADDIN_H
#pragma once
#include "Unit.h"

enum ANIMATIONALADDIN {IDLE1, IDLE2, IDLE3, RUN, ATTACK, THROW};
static int CURRENT_DIRECTION_ALADDIN = RIGHT;
class Aladdin: public Unit
{
    public:
        Aladdin();
        Aladdin(SDL_Renderer* gRenderer);
        void knifeAttack();
        void appleThrow();
        void idleAnimation1();
        bool is_idle = true;
        float GetX();
        float GetY();
        void set_is_moving(bool val);
        const static int IDLE1_FRAMES = 2;
        const static int IDLE2_FRAMES = 6;
        const static int IDLE3_FRAMES = 31;
        const static int RUN_FRAMES = 13;
        const static int ATTACK_FRAMES = 5;
        const static int THROW_FRAMES = 0;
        const static int VERTICAL_JFRAMES = 0;
        const static int HORIZONTAL_JFRAMES = 0;
        const static int CROUCH_FRAMES = 0;
        int CURRENT_ANIMATION = IDLE1;
        SDL_Rect IDLE1_CLIPS [IDLE1_FRAMES];
        SDL_Rect IDLE2_CLIPS [IDLE2_FRAMES];
        SDL_Rect IDLE3_CLIPS [IDLE3_FRAMES];
        SDL_Rect RUN_CLIPS [RUN_FRAMES];
        SDL_Rect THROW_CLIPS [THROW_FRAMES];
        SDL_Rect ATTACK_CLIPS [ATTACK_FRAMES];
        SDL_Rect VERTICAL_JCLIPS [VERTICAL_JFRAMES];
        SDL_Rect HORIZONTAL_JCLIPS [HORIZONTAL_JFRAMES];
        SDL_Rect CROUCH_CLIPS [CROUCH_FRAMES];
        void Clip(LTexture* image, float x, float y);
        void Render(long int& frame, SDL_Renderer* gRenderer, bool debug, int a, int b);
        void Move(int direction);
        LTexture* spriteSheetTexture;
//        void SetAlive(int);
//        int GetAlive();
        //void Damage();
        //int alive = 10;
        //void Damage();
    private:
        bool canThrowApple;
        int frame = 0;
        //int power = 10;
        float x;
        float y;

};

//#endif // ALADDIN_H
