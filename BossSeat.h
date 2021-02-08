#ifndef BOSSSEAT_H
#define BOSSSEAT_H
#include "EnemyBase.h"

class BossSeat : public EnemyBase
{
    public:
        BossSeat();
        BossSeat(LTexture* image, float x, float y);
        virtual ~BossSeat();
        const static int SEAT_FRAMES = 1;
        const static int ANIMATING_SEAT_FRAMES = 8;
        SDL_Rect ANIMATING_SEAT_CLIPS [ANIMATING_SEAT_FRAMES];
        SDL_Rect SEAT_CLIPS [SEAT_FRAMES];
        //void Moving(long int& frame, SDL_Renderer* gRenderer, bool debug);
        void Render(long int& frame, SDL_Renderer* gRenderer, bool debug);
};

#endif // BOSSSEAT_H
