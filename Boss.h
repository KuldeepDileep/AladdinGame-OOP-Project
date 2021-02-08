#ifndef BOSS_H
#define BOSS_H
#include "EnemyBase.h"
#include "BossSeat.h"
#include "SDL.h"
class Boss : public EnemyBase
{
  public:
        Boss();
        Boss(LTexture* image, float x, float y);
        virtual ~Boss();
        const static int FLAMES_HIT_FRAMES = 5;
        const static int ATTACK_FRAMES = 10;
        const static int NOTMOVING_FRAMES = 3;
        SDL_Rect NOTMOVING_CLIPS [NOTMOVING_FRAMES];
        SDL_Rect FLAMES_HIT_CLIPS [FLAMES_HIT_FRAMES];
        SDL_Rect ATTACK_CLIPS [ATTACK_FRAMES];
        void Render(long int& frame, SDL_Renderer* gRenderer, bool debug);
        void MoveTo(BossSeat* seat, SDL_Renderer* gRenderer, bool debug);
};

#endif // BOSS_H
