#include "Camel.h"

Camel::Camel(LTexture* image, float x, float y)
{
    spriteSheetTexture = image;
//Camel Frames:
    CAMEL_CLIPS[0].x = 0;
    CAMEL_CLIPS[0].y = 0;
    CAMEL_CLIPS[0].w = 70;
    CAMEL_CLIPS[0].h = 70;
//CAmel Animation:
    CAMEL_ANIMATION_CLIPS[0].x = 70;
    CAMEL_ANIMATION_CLIPS[0].y = 0;
    CAMEL_ANIMATION_CLIPS[0].w = 90;
    CAMEL_ANIMATION_CLIPS[0].h = 70;

    CAMEL_ANIMATION_CLIPS[1].x = 160;
    CAMEL_ANIMATION_CLIPS[1].y = 0;
    CAMEL_ANIMATION_CLIPS[1].w = 105;
    CAMEL_ANIMATION_CLIPS[1].h = 70;

    CAMEL_ANIMATION_CLIPS[2].x = 265;
    CAMEL_ANIMATION_CLIPS[2].y = 0;
    CAMEL_ANIMATION_CLIPS[2].w = 120;
    CAMEL_ANIMATION_CLIPS[2].h = 70;

    CAMEL_ANIMATION_CLIPS[3].x = 385;
    CAMEL_ANIMATION_CLIPS[3].y = 0;
    CAMEL_ANIMATION_CLIPS[3].w = 165;
    CAMEL_ANIMATION_CLIPS[3].h = 70;

    CAMEL_ANIMATION_CLIPS[4].x = 550;
    CAMEL_ANIMATION_CLIPS[4].y = 0;
    CAMEL_ANIMATION_CLIPS[4].w = 145;
    CAMEL_ANIMATION_CLIPS[4].h = 70;

    CAMEL_ANIMATION_CLIPS[5].x = 700;
    CAMEL_ANIMATION_CLIPS[5].y = 0;
    CAMEL_ANIMATION_CLIPS[5].w = 180;
    CAMEL_ANIMATION_CLIPS[5].h = 80;

    this->x = x;
    this->y = y;

    this->width = CAMEL_CLIPS[ 0 ].w;
    this->height = CAMEL_CLIPS[ 0 ].h;
}

Camel::~Camel()
{
    cout<<"Camel deallocated"<<endl;
}

void Camel::Render(long int& frame, SDL_Renderer* gRenderer, bool debug)
{
    SDL_Rect* currentani = CAMEL_CLIPS;
    int currentframes = CAMEL_FRAMES;
    if (Collision == true)
    {
        currentani = CAMEL_ANIMATION_CLIPS;
        currentframes = CAMEL_ANIMATION_FRAMES;
    }
    spriteSheetTexture->Render( x- width/2 , y - height/2, &currentani[ frame/8 % currentframes], 0.0, NULL, SDL_FLIP_NONE, gRenderer );
    if(debug == true)
    {
        SDL_Rect rect = { x - width/2, y - height/2, width, height };
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawRect( gRenderer, &rect );
    }
    CURRENT_ANIMATION = MOVING;
}

