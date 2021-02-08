#include "Boss.h"
#include <iostream>
#include "EnemyBase.h"
using namespace std;

Boss::Boss()
{

}

Boss::~Boss()
{
    cout<<"Boss deallocated"<<endl;
}

Boss::Boss(LTexture* image, float x, float y)
{
    spriteSheetTexture = image;
//NotMoving:
    NOTMOVING_CLIPS[0].x = 460;
    NOTMOVING_CLIPS[0].y = 125;
    NOTMOVING_CLIPS[0].w = 90;
    NOTMOVING_CLIPS[0].h = 100;
//FLAMES_HIT_FRAMES:
    FLAMES_HIT_CLIPS[0].x = 0;
    FLAMES_HIT_CLIPS[0].y = 120;
    FLAMES_HIT_CLIPS[0].w = 90;
    FLAMES_HIT_CLIPS[0].h = 105;

    FLAMES_HIT_CLIPS[1].x = 90;
    FLAMES_HIT_CLIPS[1].y = 120;
    FLAMES_HIT_CLIPS[1].w = 90;
    FLAMES_HIT_CLIPS[1].h = 105;

    FLAMES_HIT_CLIPS[2].x = 180;
    FLAMES_HIT_CLIPS[2].y = 120;
    FLAMES_HIT_CLIPS[2].w = 85;
    FLAMES_HIT_CLIPS[2].h = 105;

    FLAMES_HIT_CLIPS[3].x = 265;
    FLAMES_HIT_CLIPS[3].y = 120;
    FLAMES_HIT_CLIPS[3].w = 95;
    FLAMES_HIT_CLIPS[3].h = 105;

    FLAMES_HIT_CLIPS[4].x = 360;
    FLAMES_HIT_CLIPS[4].y = 120;
    FLAMES_HIT_CLIPS[4].w = 100;
    FLAMES_HIT_CLIPS[4].h = 105;
//ATTACK_FRAMES:
    ATTACK_CLIPS[0].x = 0;
    ATTACK_CLIPS[0].y = 325;
    ATTACK_CLIPS[0].w = 90;
    ATTACK_CLIPS[0].h = 89;

    ATTACK_CLIPS[1].x = 90;
    ATTACK_CLIPS[1].y = 325;
    ATTACK_CLIPS[1].w = 85;
    ATTACK_CLIPS[1].h = 89;

    ATTACK_CLIPS[2].x = 175;
    ATTACK_CLIPS[2].y = 325;
    ATTACK_CLIPS[2].w = 95;
    ATTACK_CLIPS[2].h = 89;

    ATTACK_CLIPS[3].x = 270;
    ATTACK_CLIPS[3].y = 325;
    ATTACK_CLIPS[3].w = 95;
    ATTACK_CLIPS[3].h = 89;

    ATTACK_CLIPS[4].x = 365;
    ATTACK_CLIPS[4].y = 325;
    ATTACK_CLIPS[4].w = 95;
    ATTACK_CLIPS[4].h = 89;

    ATTACK_CLIPS[5].x = 460;
    ATTACK_CLIPS[5].y = 325;
    ATTACK_CLIPS[5].w = 85;
    ATTACK_CLIPS[5].h = 89;

    ATTACK_CLIPS[6].x = 545;
    ATTACK_CLIPS[6].y = 325;
    ATTACK_CLIPS[6].w = 120;
    ATTACK_CLIPS[6].h = 89;

    ATTACK_CLIPS[7].x = 665;
    ATTACK_CLIPS[7].y = 320;
    ATTACK_CLIPS[7].w = 95;
    ATTACK_CLIPS[7].h = 94;

    ATTACK_CLIPS[8].x = 760;
    ATTACK_CLIPS[8].y = 320;
    ATTACK_CLIPS[8].w = 75;
    ATTACK_CLIPS[8].h = 94;

    ATTACK_CLIPS[9].x = 835;
    ATTACK_CLIPS[9].y = 320;
    ATTACK_CLIPS[9].w = 95;
    ATTACK_CLIPS[9].h = 94;

    this->x = x;
    this->y = y;

    this->width = NOTMOVING_CLIPS[ 0 ].w;
    this->height = NOTMOVING_CLIPS[ 0 ].h;
}



void Boss::Render(long int& frame, SDL_Renderer* gRenderer, bool debug)
{
    SDL_RendererFlip flip;
    if (CURRENT_DIRECTION == RIGHT)
        flip = SDL_FLIP_NONE;
    else
        flip = SDL_FLIP_HORIZONTAL;
    SDL_Rect* currentani = NOTMOVING_CLIPS;
    int currentframes = NOTMOVING_FRAMES;
    if (CURRENT_ANIMATION == STRIKE)
    {
        currentani = ATTACK_CLIPS;
        currentframes = ATTACK_FRAMES;
    }
    spriteSheetTexture->Render( x- width/2 , y - height/2, &currentani[ frame/6 % currentframes], 0.0, NULL, flip, gRenderer );
    if(debug == true)
    {
        SDL_Rect rect = { x - width/2, y - height/2, width, height };
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawRect( gRenderer, &rect );
    }
    CURRENT_ANIMATION = MOVING;
}

void Boss::MoveTo(BossSeat* seat, SDL_Renderer* gRenderer, bool debug)
{
    spriteSheetTexture->Render( seat->GetX() - width/2 , seat->GetY() - height/2, &NOTMOVING_CLIPS[NOTMOVING_FRAMES], 0.0, NULL, SDL_FLIP_NONE, gRenderer );
    if(debug == true)
    {
        SDL_Rect rect = { x - width/2, y - height/2, width, height };
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawRect( gRenderer, &rect );
    }
    CURRENT_ANIMATION = MOVING;
}

