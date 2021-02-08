#include "BossSeat.h"

BossSeat::BossSeat()
{

}
BossSeat::BossSeat(LTexture* image, float x, float y)
{
    spriteSheetTexture = image;
//Seat frame:
    SEAT_CLIPS[0].x = 560;
    SEAT_CLIPS[0].y = 190;
    SEAT_CLIPS[0].w = 60;
    SEAT_CLIPS[0].h = 35;
//Animating Seats:
    ANIMATING_SEAT_CLIPS[0].x = 0;
    ANIMATING_SEAT_CLIPS[0].y = 0;
    ANIMATING_SEAT_CLIPS[0].w = 75;
    ANIMATING_SEAT_CLIPS[0].h = 105;

    ANIMATING_SEAT_CLIPS[1].x = 75;
    ANIMATING_SEAT_CLIPS[1].y = 0;
    ANIMATING_SEAT_CLIPS[1].w = 70;
    ANIMATING_SEAT_CLIPS[1].h = 105;

    ANIMATING_SEAT_CLIPS[2].x = 150;
    ANIMATING_SEAT_CLIPS[2].y = 0;
    ANIMATING_SEAT_CLIPS[2].w = 70;
    ANIMATING_SEAT_CLIPS[2].h = 105;

    ANIMATING_SEAT_CLIPS[3].x = 220;
    ANIMATING_SEAT_CLIPS[3].y = 0;
    ANIMATING_SEAT_CLIPS[3].w = 75;
    ANIMATING_SEAT_CLIPS[3].h = 105;

    ANIMATING_SEAT_CLIPS[4].x = 295;
    ANIMATING_SEAT_CLIPS[4].y = 0;
    ANIMATING_SEAT_CLIPS[4].w = 75;
    ANIMATING_SEAT_CLIPS[4].h = 105;

    ANIMATING_SEAT_CLIPS[5].x = 370;
    ANIMATING_SEAT_CLIPS[5].y = 0;
    ANIMATING_SEAT_CLIPS[5].w = 80;
    ANIMATING_SEAT_CLIPS[5].h = 105;

    ANIMATING_SEAT_CLIPS[6].x = 440;
    ANIMATING_SEAT_CLIPS[6].y = 0;
    ANIMATING_SEAT_CLIPS[6].w = 80;
    ANIMATING_SEAT_CLIPS[6].h = 105;

    ANIMATING_SEAT_CLIPS[7].x = 515;
    ANIMATING_SEAT_CLIPS[7].y = 0;
    ANIMATING_SEAT_CLIPS[7].w = 70;
    ANIMATING_SEAT_CLIPS[7].h = 105;

    this->x = x;
    this->y = y;

    this->width = SEAT_CLIPS[ 0 ].w;
    this->height = SEAT_CLIPS[ 0 ].h;
}

BossSeat::~BossSeat()
{
    cout<<"BossSeat deallocated"<<endl;
}

void BossSeat::Render(long int& frame, SDL_Renderer* gRenderer, bool debug)
{
    SDL_Rect* currentani = ANIMATING_SEAT_CLIPS;
    int currentframes = ANIMATING_SEAT_FRAMES;
    if (CURRENT_ANIMATION == STRIKE)
    {
        currentani = ANIMATING_SEAT_CLIPS;
        currentframes = ANIMATING_SEAT_FRAMES;
    }
    spriteSheetTexture->Render( x- width/2 , y - height/2, &currentani[frame/6 % currentframes], 0.0, NULL, SDL_FLIP_NONE, gRenderer );
    if(debug == true)
    {
        SDL_Rect rect = { x - width/2, y - height/2, width, height };
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawRect( gRenderer, &rect );
    }
    CURRENT_ANIMATION = MOVING;
}


