#include "Aladdin.h"

Aladdin::Aladdin()
{
    spriteSheetTexture = NULL;

}
Aladdin::Aladdin(SDL_Renderer* gRenderer)
{

}
void Aladdin::Clip(LTexture* image, float x, float y)
{
    spriteSheetTexture = image;
    IDLE1_CLIPS[ 0 ].x =   0;
    IDLE1_CLIPS[ 0 ].y =   0;
    IDLE1_CLIPS[ 0 ].w = 45;
    IDLE1_CLIPS[ 0 ].h = 62;

    //Frame 1
    IDLE1_CLIPS[ 1 ].x = 45;
    IDLE1_CLIPS[ 1 ].y =   0;
    IDLE1_CLIPS[ 1 ].w = 45;
    IDLE1_CLIPS[ 1 ].h = 62;
    //Frame 0
    IDLE2_CLIPS[ 0 ].x =   0;
    IDLE2_CLIPS[ 0 ].y =   0;
    IDLE2_CLIPS[ 0 ].w = 45;
    IDLE2_CLIPS[ 0 ].h = 62;

    //Frame 1
    IDLE2_CLIPS[ 1 ].x = 45;
    IDLE2_CLIPS[ 1 ].y =   0;
    IDLE2_CLIPS[ 1 ].w = 45;
    IDLE2_CLIPS[ 1 ].h = 62;

    //Frame 2
    IDLE2_CLIPS[ 2 ].x = 90;
    IDLE2_CLIPS[ 2 ].y = 0;
    IDLE2_CLIPS[ 2 ].w = 45;
    IDLE2_CLIPS[ 2 ].h = 62;

    //Frame 2
    IDLE2_CLIPS[ 3 ].x = 135;
    IDLE2_CLIPS[ 3 ].y = 0;
    IDLE2_CLIPS[ 3 ].w = 55;
    IDLE2_CLIPS[ 3 ].h = 60;

    //Frame 2
    IDLE2_CLIPS[ 4 ].x = 195;
    IDLE2_CLIPS[ 4 ].y = 0;
    IDLE2_CLIPS[ 4 ].w = 55;
    IDLE2_CLIPS[ 4 ].h = 62;
//
//    //Frame 2
    IDLE2_CLIPS[ 5 ].x = 250;
    IDLE2_CLIPS[ 5 ].y = 0;
    IDLE2_CLIPS[ 5 ].w = 45;
    IDLE2_CLIPS[ 5 ].h = 62;

    RUN_CLIPS[ 0 ].x =   10;
    RUN_CLIPS[ 0 ].y =   1220;
    RUN_CLIPS[ 0 ].w = 45;
    RUN_CLIPS[ 0 ].h = 55;

    RUN_CLIPS[ 1 ].x =   60;
    RUN_CLIPS[ 1 ].y =   1220;
    RUN_CLIPS[ 1 ].w = 55;
    RUN_CLIPS[ 1 ].h = 55;

    RUN_CLIPS[ 2 ].x =   115;
    RUN_CLIPS[ 2 ].y =   1220;
    RUN_CLIPS[ 2 ].w = 50;
    RUN_CLIPS[ 2 ].h = 55;

    RUN_CLIPS[ 3 ].x =   165;
    RUN_CLIPS[ 3 ].y =   1215;
    RUN_CLIPS[ 3 ].w = 50;
    RUN_CLIPS[ 3 ].h = 60;

    RUN_CLIPS[ 4 ].x =   215;
    RUN_CLIPS[ 4 ].y =   1215;
    RUN_CLIPS[ 4 ].w = 60;
    RUN_CLIPS[ 4 ].h = 55;

    RUN_CLIPS[ 5 ].x =   275;
    RUN_CLIPS[ 5 ].y =   1215;
    RUN_CLIPS[ 5 ].w = 55;
    RUN_CLIPS[ 5 ].h = 60;

    RUN_CLIPS[ 6 ].x =   330;
    RUN_CLIPS[ 6 ].y =   1215;
    RUN_CLIPS[ 6 ].w = 55;
    RUN_CLIPS[ 6 ].h = 60;

    RUN_CLIPS[ 7 ].x =   385;
    RUN_CLIPS[ 7 ].y =   1215;
    RUN_CLIPS[ 7 ].w = 45;
    RUN_CLIPS[ 7 ].h = 60;

    RUN_CLIPS[ 8 ].x =   435;
    RUN_CLIPS[ 8 ].y =   1215;
    RUN_CLIPS[ 8 ].w = 50;
    RUN_CLIPS[ 8 ].h = 55;

    RUN_CLIPS[ 9 ].x =   485;
    RUN_CLIPS[ 9 ].y =   1215;
    RUN_CLIPS[ 9 ].w = 60;
    RUN_CLIPS[ 9 ].h = 60;

    RUN_CLIPS[ 10 ].x =   545;
    RUN_CLIPS[ 10 ].y =   1215;
    RUN_CLIPS[ 10 ].w = 60;
    RUN_CLIPS[ 10 ].h = 60;

    RUN_CLIPS[ 11 ].x =   605;
    RUN_CLIPS[ 11 ].y =   1215;
    RUN_CLIPS[ 11 ].w = 65;
    RUN_CLIPS[ 11 ].h = 60;

    RUN_CLIPS[ 12 ].x =   670;
    RUN_CLIPS[ 12 ].y =   1215;
    RUN_CLIPS[ 12 ].w = 60;
    RUN_CLIPS[ 12 ].h = 60;

//    VERTICAL_JCLIPS[0].x = ;
//    VERTICAL_JCLIPS[0].y = ;
//    VERTICAL_JCLIPS[0].w = ;
//    VERTICAL_JCLIPS[0].h = ;

    ATTACK_CLIPS[0].x = 5;
    ATTACK_CLIPS[0].y = 310;
    ATTACK_CLIPS[0].w = 48;
    ATTACK_CLIPS[0].h = 80;

    ATTACK_CLIPS[1].x = 50;
    ATTACK_CLIPS[1].y = 310;
    ATTACK_CLIPS[1].w = 60;
    ATTACK_CLIPS[1].h = 80;

    ATTACK_CLIPS[2].x = 110;
    ATTACK_CLIPS[2].y = 310;
    ATTACK_CLIPS[2].w = 55;
    ATTACK_CLIPS[2].h = 80;

    ATTACK_CLIPS[3].x = 170;
    ATTACK_CLIPS[3].y = 310;
    ATTACK_CLIPS[3].w = 85;
    ATTACK_CLIPS[3].h = 80;

    ATTACK_CLIPS[4].x = 255;
    ATTACK_CLIPS[4].y = 310;
    ATTACK_CLIPS[4].w = 60;
    ATTACK_CLIPS[4].h = 80;

//    ATTACK_CLIPS[5].x = 50;
//    ATTACK_CLIPS[5].y = 325;
//    ATTACK_CLIPS[5].w = 60;
//    ATTACK_CLIPS[5].h = 65;

    this->x = x;
    this->y = y;
    //cout<<"Aladdin's X" <<this->x<<endl;
    //cout<<"Aladdin's Y" <<this->y<<endl;

    this->width = IDLE2_CLIPS[ 0 ].w;
    this->height = IDLE2_CLIPS[ 0 ].h;

    friction = 0.45f;
    speedx = 0;
    speedy = 0;
    //alive  = true;
}
void Aladdin::knifeAttack()
{
    CURRENT_ANIMATION = ATTACK;
}
void Aladdin::appleThrow()
{

}

//void Aladdin::Damage()
//{
//    this->alive -= 1;
//}
void Aladdin::Render(long int& frame, SDL_Renderer* gRenderer, bool debug, int a, int b)
{
    //cout<<"Aladdin's X in aladdin's class: "<<this->GetX()<<endl;
    SDL_RendererFlip flip;
    if (CURRENT_DIRECTION_ALADDIN == RIGHT)
        flip = SDL_FLIP_NONE;
    else
        flip = SDL_FLIP_HORIZONTAL;
    SDL_Rect* currentani = IDLE2_CLIPS;
    int currentframes = IDLE2_FRAMES;
    if (CURRENT_ANIMATION == RUN)
    {
        currentani = RUN_CLIPS;
        currentframes = RUN_FRAMES;
    }
    if (CURRENT_ANIMATION == ATTACK)
    {
        currentani = ATTACK_CLIPS;
        currentframes = ATTACK_FRAMES;
    }
    //cout<<"current frames"<<currentframes<<endl;
    spriteSheetTexture->Render( x - a, y - 20, &currentani[ frame/6 % currentframes], 0.0, NULL, flip, gRenderer );
    if(debug == true)
    {
        SDL_Rect rect = { x - width/2, y - height/2, width, height };
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawRect( gRenderer, &rect );
    }
    CURRENT_ANIMATION = IDLE1;
}
//int Aladdin::getPosx()
//{
//
//}
//int Aladdin::getPosy()
//{
//
//}
//int Aladdin::getGroundx()
//{
//
//}

void Aladdin::set_is_moving(bool val)
{
//    is_moving = val;
}

void Aladdin::Move(int direction)
{
    //set_is_moving(true);
//    is_run = false;
    if(direction==LEFT)
    {
        speedx = -3;
        x+=speedx;
        CURRENT_DIRECTION_ALADDIN = LEFT;
        CURRENT_ANIMATION = RUN;

    }

    if(direction==RIGHT)
    {
        speedx = 3;
        x+=speedx;
        CURRENT_DIRECTION_ALADDIN = RIGHT;
        CURRENT_ANIMATION = RUN;

    }

    if(direction==UP)
    {
        speedy = -3;
        y+=speedy;
    }

    if(direction==DOWN)
    {
        speedy = 3;
        y+=speedy;
    }

}

float Aladdin::GetX()
{
    //cout<<"GetX"<<x<<endl;
    return x;
}

float Aladdin::GetY()
{
    //cout<<"GetY"<<y<<endl;
    return y;
}
