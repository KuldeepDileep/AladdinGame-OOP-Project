#include "Enemy3.h"

//Enemy3::Enemy3(){}
Enemy3::~Enemy3()
{
    cout<<"Enemy3 deallocated"<<endl;
}

Enemy3::Enemy3(LTexture* image, float x, float y)
{
    spriteSheetTexture = image;

//Enemy2:
    MOVING3_CLIPS[ 0 ].x = 0;
    MOVING3_CLIPS[ 0 ].y = 1065;
    MOVING3_CLIPS[ 0 ].w = 45;
    MOVING3_CLIPS[ 0 ].h = 55;

    //Frame 1
    MOVING3_CLIPS[ 1 ].x = 45;
    MOVING3_CLIPS[ 1 ].y = 1065;
    MOVING3_CLIPS[ 1 ].w = 45;
    MOVING3_CLIPS[ 1 ].h = 55;

    //Frame 2
    MOVING3_CLIPS[ 2 ].x = 90;
    MOVING3_CLIPS[ 2 ].y = 1065;
    MOVING3_CLIPS[ 2 ].w = 40;
    MOVING3_CLIPS[ 2 ].h = 55;
        //Frame 3
    MOVING3_CLIPS[ 3 ].x = 130;
    MOVING3_CLIPS[ 3 ].y = 1060;
    MOVING3_CLIPS[ 3 ].w = 45;
    MOVING3_CLIPS[ 3 ].h = 60;
        //Frame 4
    MOVING3_CLIPS[ 4 ].x = 175;
    MOVING3_CLIPS[ 4 ].y = 1055;
    MOVING3_CLIPS[ 4 ].w = 50;
    MOVING3_CLIPS[ 4 ].h = 63;
    //Frame 5
    MOVING3_CLIPS[ 5 ].x = 225;
    MOVING3_CLIPS[ 5 ].y = 1060;
    MOVING3_CLIPS[ 5 ].w = 50;
    MOVING3_CLIPS[ 5 ].h = 60;
        //Frame 6
    MOVING3_CLIPS[ 6 ].x = 275;
    MOVING3_CLIPS[ 6 ].y = 1060;
    MOVING3_CLIPS[ 6 ].w = 45;
    MOVING3_CLIPS[ 6 ].h = 60;
        //Frame 7
    MOVING3_CLIPS[ 7 ].x = 320;
    MOVING3_CLIPS[ 7 ].y = 1060;
    MOVING3_CLIPS[ 7 ].w = 40;
    MOVING3_CLIPS[ 7 ].h = 60;
//    MOVING3_CLIPS[0].x = ;
//    MOVING3_CLIPS[0].y = ;
//    MOVING3_CLIPS[0].w = ;
//    MOVING3_CLIPS[0].h = ;
//Strike clips:
    STRIKE_CLIPS[0].x = 0;
    STRIKE_CLIPS[0].y = 1180;
    STRIKE_CLIPS[0].w = 60;
    STRIKE_CLIPS[0].h = 65;

    STRIKE_CLIPS[1].x = 65;
    STRIKE_CLIPS[1].y = 1185;
    STRIKE_CLIPS[1].w = 50;
    STRIKE_CLIPS[1].h = 60;

    STRIKE_CLIPS[2].x = 115;
    STRIKE_CLIPS[2].y = 1185;
    STRIKE_CLIPS[2].w = 65;
    STRIKE_CLIPS[2].h = 60;

    STRIKE_CLIPS[3].x = 180;
    STRIKE_CLIPS[3].y = 1185;
    STRIKE_CLIPS[3].w = 50;
    STRIKE_CLIPS[3].h = 60;

    STRIKE_CLIPS[4].x = 230;
    STRIKE_CLIPS[4].y = 1185;
    STRIKE_CLIPS[4].w = 45;
    STRIKE_CLIPS[4].h = 60;

//Hit sprites:
    HIT_CLIPS[0].x = 0;
    HIT_CLIPS[0].y = 1325;
    HIT_CLIPS[0].w = 60;
    HIT_CLIPS[0].h = 60;

    HIT_CLIPS[1].x = 60;
    HIT_CLIPS[1].y = 1325;
    HIT_CLIPS[1].w = 60;
    HIT_CLIPS[1].h = 60;

    HIT_CLIPS[2].x = 120;
    HIT_CLIPS[2].y = 1325;
    HIT_CLIPS[2].w = 60;
    HIT_CLIPS[2].h = 60;

    HIT_CLIPS[3].x = 180;
    HIT_CLIPS[3].y = 1325;
    HIT_CLIPS[3].w = 60;
    HIT_CLIPS[3].h = 60;

    HIT_CLIPS[4].x = 240;
    HIT_CLIPS[4].y = 1325;
    HIT_CLIPS[4].w = 75;
    HIT_CLIPS[4].h = 60;

    HIT_CLIPS[5].x = 315;
    HIT_CLIPS[5].y = 1315;
    HIT_CLIPS[5].w = 80;
    HIT_CLIPS[5].h = 70;

    HIT_CLIPS[6].x = 395;
    HIT_CLIPS[6].y = 1315;
    HIT_CLIPS[6].w = 75;
    HIT_CLIPS[6].h = 70;

    this->x = x;
    this->y = y;

    this->width = MOVING3_CLIPS[ 0 ].w;
    this->height = MOVING3_CLIPS[ 0 ].h;

}

//void Enemy3::Move(int direction)
//{
//    if(direction==LEFT)
//    {
//        speedx = +3;
//        x+=speedx;
////        CURRENT_DIRECTION_ALADDIN = LEFT;
////        CURRENT_ANIMATION = RUN;
//
//    }
//
//    if(direction==RIGHT)
//    {
//        speedx = -3;
//        x+=speedx;
////        CURRENT_DIRECTION_ALADDIN = RIGHT;
////        CURRENT_ANIMATION = RUN;
//
//    }
//
//}

//void Enemy3::Check_Flip(Unit* EnemyObj,Unit* AladdinObj)
//{
//    cout<<"EnemyObj X: "<<EnemyObj->GetX()<<endl;
//    cout<<"AladdinObj X: "<<AladdinObj->GetX()<<endl;
//}

void Enemy3::Render(long int& frame, SDL_Renderer* gRenderer, bool debug)
{
    //this->Move();
    currentani = STRIKE_CLIPS;
    currentframes = STRIKE_FRAMES;
    spriteSheetTexture->Render( x- width/2 , y - height/2, &currentani[ frame/6 % currentframes], 0.0, NULL, SDL_FLIP_NONE, gRenderer );
    //x -= 1;
    if(debug == true)
    {
        SDL_Rect rect = { x - width/2, y - height/2, width, height };
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawRect( gRenderer, &rect );
    }
    CURRENT_ANIMATION = MOVING;
}

//float Enemy3::GetX()
//{
//    return x;
//}
//
//float Enemy3::GetY()
//{
//    return y;
//}
