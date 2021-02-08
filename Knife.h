#ifndef KNIFE_H
#define KNIFE_H
#include "Unit.h"
#include "EnemyBase.h"

class Knife: public EnemyBase
{
    public:
        static const int KNIFE_WIDTH = 15;
        static const int KNIFE_HEIGHT = 30;
        static const int KNIFE_VEL = 10;
        Knife(LTexture* image, float x, float y);
        virtual ~Knife();
        const static int KNIFE_FRAMES = 7;
        SDL_Rect KNIFE_CLIPS [KNIFE_FRAMES];
        void Render(long int& frame, SDL_Renderer* gRenderer, bool debug);
        void Move();
        //bool checkCollision( Unit* aladdinObj, EnemyBase* knifeObj );
    private:
        SDL_Rect mCollider;
        int mPosX, mPosY;
};

#endif // KNIFE_H
