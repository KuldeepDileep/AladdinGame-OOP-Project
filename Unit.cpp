#include "Unit.h"

Unit::Unit()
{
    spriteSheetTexture = NULL;
}

void Unit::Clip(LTexture* image, float x, float y)
{
//    spriteSheetTexture = image;
//
//    //Frame 0
//    spriteClips[ 0 ].x =   0;
//    spriteClips[ 0 ].y =   0;
//    spriteClips[ 0 ].w = 4769;
//    spriteClips[ 0 ].h = 689;

//    //Frame 1
//    spriteClips[ 1 ].x = 1429;
//    spriteClips[ 1 ].y =  0;
//    spriteClips[ 1 ].w = 1429;
//    spriteClips[ 1 ].h = 689;
//
//    //Frame 2
//    spriteClips[ 2 ].x = 1429*2;
//    spriteClips[ 2 ].y = 0;
//    spriteClips[ 2 ].w = 1429;
//    spriteClips[ 2 ].h = 689;

//    this->x = x;
//    this->y = y;
//
//    this->width = spriteClips[ 0 ].w;
//    this->height = spriteClips[ 0 ].h;
//
//    friction = 0.45f;
//    speedx = 0;
//    speedy = 0;
//    alive  = true;
    //cout<<"backgroun x: "<<this->x<<endl;
    //cout<<"backgroun y: "<<this->y<<endl;
}

void Unit::Check_Flip(Unit* EnemyObj, Unit* AladdinObj)
{

}

Unit::~Unit()
{
    spriteSheetTexture = NULL;
}

void Unit::SetHealth(int health)
{
    this->health = health;
}

int Unit::GetHealth()
{
    return health;
}

void Unit::SetAlive(bool alive)
{
    this->alive = alive;
}

bool Unit::GetAlive()
{
    return alive;
}

void Unit::Move(int direction)
{

    if(direction==LEFT)
    {
        speedx = 4;
        x+=speedx;
    }

    if(direction==RIGHT)
    {
        speedx = 4;
        x-=speedx;
    }

//    if(direction==UP)
//    {
//        speedy = -5;
//        y+=speedy;
//    }
//
//    if(direction==DOWN)
//    {
//        speedy = 5;
//        y+=speedy;
//    }

}

void Unit::Move()
{
//     speedx = speedx * friction;
//     speedy = speedy * friction;
//
//     x = x + speedx;
//     y = y + speedy;
}

void Unit::Render(long int& frame, SDL_Renderer* gRenderer, bool debug, int a, int b)
{
//    int n = 0;
//
//    spriteSheetTexture->Render( x - width/2 , y - height/2, &spriteClips[n], 0.0, NULL, SDL_FLIP_NONE, gRenderer );
//    spriteSheetTexture->Render( x - width/2 + 1429*(1), y - height/2, &spriteClips[1], 0.0, NULL, SDL_FLIP_NONE, gRenderer );
//    int c = 0;
//    for (int i = 0;i<3;i++)
//    {
        //cout<<"Render Background"<<endl;
        spriteSheetTexture->Render( x - width/2 , y - height/2, &spriteClips[0], 0.0, NULL, SDL_FLIP_NONE, gRenderer );
//        c+=1429;
//    }
    if(debug == true)
    {
        SDL_Rect rect = { x - width/2, y - height/2, width, height };
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawRect( gRenderer, &rect );
    }
}

int Unit::GetWidth()
{
    return width;
}

int Unit::GetHeight()
{
    return height;
}

float Unit::GetX()
{
    return x;
}
float Unit::GetY()
{
    return y;
}
