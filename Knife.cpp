#include "Knife.h"


Knife::Knife(LTexture* image, float x, float y)
{
    //cout<<"Hello constructor"<<endl;
    spriteSheetTexture = image;

    KNIFE_CLIPS[0].x = 70;
    KNIFE_CLIPS[0].y = 955;
    KNIFE_CLIPS[0].w = 15;
    KNIFE_CLIPS[0].h = 30;

    KNIFE_CLIPS[1].x = 95;
    KNIFE_CLIPS[1].y = 955;
    KNIFE_CLIPS[1].w = 30;
    KNIFE_CLIPS[1].h = 25;

    KNIFE_CLIPS[2].x = 125;
    KNIFE_CLIPS[2].y = 955;
    KNIFE_CLIPS[2].w = 20;
    KNIFE_CLIPS[2].h = 30;

    KNIFE_CLIPS[3].x = 150;
    KNIFE_CLIPS[3].y = 955;
    KNIFE_CLIPS[3].w = 30;
    KNIFE_CLIPS[3].h = 30;

    KNIFE_CLIPS[4].x = 190;
    KNIFE_CLIPS[4].y = 955;
    KNIFE_CLIPS[4].w = 30;
    KNIFE_CLIPS[4].h = 30;

    KNIFE_CLIPS[5].x = 225;
    KNIFE_CLIPS[5].y = 955;
    KNIFE_CLIPS[5].w = 25;
    KNIFE_CLIPS[5].h = 30;

    KNIFE_CLIPS[6].x = 250;
    KNIFE_CLIPS[6].y = 955;
    KNIFE_CLIPS[6].w = 30;
    KNIFE_CLIPS[6].h = 30;

    this->x = x;
    this->y = y;

    this->width = KNIFE_CLIPS[ 0 ].w;
    this->height = KNIFE_CLIPS[ 0 ].h;

    mCollider.w = KNIFE_CLIPS[0].w;
    mCollider.h = KNIFE_CLIPS[0].h;
}

Knife::~Knife()
{
    delete KNIFE_CLIPS;
    cout<<"Knife deallocated"<<endl;
}


void Knife::Render(long int& frame, SDL_Renderer* gRenderer, bool debug)
{
    spriteSheetTexture->Render( x- width/2 , y - height/2, &KNIFE_CLIPS[ frame/6 % KNIFE_FRAMES], 0.0, NULL, SDL_FLIP_NONE, gRenderer );
    if(debug == true)
    {
        SDL_Rect rect = { x - width/2, y - height/2, width, height };
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawRect( gRenderer, &rect );
    }
    CURRENT_ANIMATION = MOVING;
}

void Knife::Move()
{
    //cout<<"n knife"<<endl;
    //cout<<"x"<<x<<endl;
     speedx = -4;
     x+=speedx;
}

