#include "Apple.h"

Apple::Apple()
{

}

Apple::Apple(LTexture* image, float x, float y)
{
    spriteSheetTexture = image;

    //Frame 0
    spriteClips[ 0 ].x =   0;
    spriteClips[ 0 ].y =   0;
    spriteClips[ 0 ].w = 12;
    spriteClips[ 0 ].h = 14;

    this->x = x;
    this->y = y;

    this->width = spriteClips[ 0 ].w;
    this->height = spriteClips[ 0 ].h;

    friction = 0.45f;
    speedx = 0;
    speedy = 0;
    alive  = true;
    cout<<"backgroun x: "<<this->x<<endl;
    cout<<"backgroun y: "<<this->y<<endl;
}

Apple::~Apple()
{
    cout<<"Apple Deallocated"<<endl;
}

void Apple::Render(long int& frame, SDL_Renderer* gRenderer, bool debug)
{
    spriteSheetTexture->Render( x- width/2 , y - height/2, &spriteClips[0], 0.0, NULL, SDL_FLIP_VERTICAL, gRenderer );
    if(debug == true)
    {
        SDL_Rect rect = { x - width/2, y - height/2, width, height };
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawRect( gRenderer, &rect );
    }
}
