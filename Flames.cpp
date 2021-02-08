#include "Flames.h"

Flames::Flames(LTexture* image, float x, float y)
{
    spriteSheetTexture = image;
//Flame frame:
    FLAME_CLIPS[0].x = 75;
    FLAME_CLIPS[0].y = 5;
    FLAME_CLIPS[0].w = 55;
    FLAME_CLIPS[0].h = 30;

    this->x = x;
    this->y = y;

    this->width = FLAME_CLIPS[ 0 ].w;
    this->height = FLAME_CLIPS[ 0 ].h;

}

Flames::~Flames()
{
    cout<<"Flames deallocated"<<endl;
}

void Flames::Render(long int& frame, SDL_Renderer* gRenderer, bool debug)
{
    spriteSheetTexture->Render( x- width/2 , y - height/2, &FLAME_CLIPS[ frame/6 % FLAME_FRAMES], 0.0, NULL, SDL_FLIP_NONE, gRenderer );
    if(debug == true)
    {
        SDL_Rect rect = { x - width/2, y - height/2, width, height };
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawRect( gRenderer, &rect );
    }
    CURRENT_ANIMATION = MOVING;
}

void Flames::Move()
{
    speedx = -4;
    x+=speedx;
}
