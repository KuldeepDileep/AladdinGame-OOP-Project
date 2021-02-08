#include "CamelSaliva.h"

CamelSaliva::CamelSaliva(LTexture* image, float x, float y)
{
    spriteSheetTexture = image;

    CAMEL_SALIVA_CLIPS[0].x = 830;
    CAMEL_SALIVA_CLIPS[0].y = 40;
    CAMEL_SALIVA_CLIPS[0].w = 50;
    CAMEL_SALIVA_CLIPS[0].h = 15;

    this->x = x;
    this->y = y;

    this->width = CAMEL_SALIVA_CLIPS[ 0 ].w;
    this->height = CAMEL_SALIVA_CLIPS[ 0 ].h;
}

CamelSaliva::~CamelSaliva()
{
    cout<<"CamelSaliva deallocate"<<endl;
}

void CamelSaliva::Render(long int& frame, SDL_Renderer* gRenderer, bool debug)
{
    spriteSheetTexture->Render( x- width/2 , y - height/2, &CAMEL_SALIVA_CLIPS[0], 0.0, NULL, SDL_FLIP_NONE, gRenderer );
    if(debug == true)
    {
        SDL_Rect rect = { x - width/2, y - height/2, width, height };
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawRect( gRenderer, &rect );
    }
    CURRENT_ANIMATION = MOVING;
}

void CamelSaliva::Move()
{
    speedx = 4;
    x+=speedx;
}
