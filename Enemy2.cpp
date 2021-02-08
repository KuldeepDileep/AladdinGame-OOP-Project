#include "Enemy2.h"


Enemy2::~Enemy2()
{
    cout<<"Enemy2 Deallocated"<<endl;
}

Enemy2::Enemy2(LTexture* image, float x, float y)
{
    spriteSheetTexture = image;

//Enemy2:
    MOVING2_CLIPS[ 0 ].x = 0;
    MOVING2_CLIPS[ 0 ].y = 0;
    MOVING2_CLIPS[ 0 ].w = 50;
    MOVING2_CLIPS[ 0 ].h = 80;

    //Frame 1
    MOVING2_CLIPS[ 1 ].x = 50;
    MOVING2_CLIPS[ 1 ].y = 0;
    MOVING2_CLIPS[ 1 ].w = 50;
    MOVING2_CLIPS[ 1 ].h = 80;

    //Frame 2
    MOVING2_CLIPS[ 2 ].x = 100;
    MOVING2_CLIPS[ 2 ].y = 0;
    MOVING2_CLIPS[ 2 ].w = 60;
    MOVING2_CLIPS[ 2 ].h = 80;
        //Frame 3
    MOVING2_CLIPS[ 3 ].x = 160;
    MOVING2_CLIPS[ 3 ].y = 0;
    MOVING2_CLIPS[ 3 ].w = 50;
    MOVING2_CLIPS[ 3 ].h = 80;
        //Frame 4
    MOVING2_CLIPS[ 4 ].x = 210;
    MOVING2_CLIPS[ 4 ].y = 0;
    MOVING2_CLIPS[ 4 ].w = 45;
    MOVING2_CLIPS[ 4 ].h = 80;
    //Frame 5
    MOVING2_CLIPS[ 5 ].x = 255;
    MOVING2_CLIPS[ 5 ].y = 0;
    MOVING2_CLIPS[ 5 ].w = 50;
    MOVING2_CLIPS[ 5 ].h = 80;
        //Frame 6
    MOVING2_CLIPS[ 6 ].x = 305;
    MOVING2_CLIPS[ 6 ].y = 0;
    MOVING2_CLIPS[ 6 ].w = 55;
    MOVING2_CLIPS[ 6 ].h = 80;
        //Frame 7
    MOVING2_CLIPS[ 7 ].x = 360;
    MOVING2_CLIPS[ 7 ].y = 0;
    MOVING2_CLIPS[ 7 ].w = 45;
    MOVING2_CLIPS[ 7 ].h = 75;
//Strike clips:
    STRIKE_CLIPS[0].x = 0;
    STRIKE_CLIPS[0].y = 80;
    STRIKE_CLIPS[0].w = 50;
    STRIKE_CLIPS[0].h = 80;

    STRIKE_CLIPS[1].x = 50;
    STRIKE_CLIPS[1].y = 80;
    STRIKE_CLIPS[1].w = 55;
    STRIKE_CLIPS[1].h = 80;

    STRIKE_CLIPS[2].x = 105;
    STRIKE_CLIPS[2].y = 80;
    STRIKE_CLIPS[2].w = 98;
    STRIKE_CLIPS[2].h = 80;

    STRIKE_CLIPS[3].x = 200;
    STRIKE_CLIPS[3].y = 80;
    STRIKE_CLIPS[3].w = 90;
    STRIKE_CLIPS[3].h = 80;

    STRIKE_CLIPS[4].x = 290;
    STRIKE_CLIPS[4].y = 80;
    STRIKE_CLIPS[4].w = 85;
    STRIKE_CLIPS[4].h = 80;

    STRIKE_CLIPS[5].x = 375;
    STRIKE_CLIPS[5].y = 80;
    STRIKE_CLIPS[5].w = 55;
    STRIKE_CLIPS[5].h = 80;
//Hit sprites:
    HIT_CLIPS[0].x = 0;
    HIT_CLIPS[0].y = 160;
    HIT_CLIPS[0].w = 55;
    HIT_CLIPS[0].h = 75;

    HIT_CLIPS[1].x = 55;
    HIT_CLIPS[1].y = 160;
    HIT_CLIPS[1].w = 50;
    HIT_CLIPS[1].h = 75;

    HIT_CLIPS[2].x = 105;
    HIT_CLIPS[2].y = 160;
    HIT_CLIPS[2].w = 50;
    HIT_CLIPS[2].h = 75;

    HIT_CLIPS[3].x = 155;
    HIT_CLIPS[3].y = 160;
    HIT_CLIPS[3].w = 55;
    HIT_CLIPS[3].h = 75;

    HIT_CLIPS[4].x = 210;
    HIT_CLIPS[4].y = 160;
    HIT_CLIPS[4].w = 50;
    HIT_CLIPS[4].h = 75;

    HIT_CLIPS[5].x = 260;
    HIT_CLIPS[5].y = 160;
    HIT_CLIPS[5].w = 55;
    HIT_CLIPS[5].h = 75;

    HIT_CLIPS[6].x = 315;
    HIT_CLIPS[6].y = 160;
    HIT_CLIPS[6].w = 55;
    HIT_CLIPS[6].h = 75;

    HIT_CLIPS[7].x = 370;
    HIT_CLIPS[7].y = 160;
    HIT_CLIPS[7].w = 55;
    HIT_CLIPS[7].h = 75;

    HIT_CLIPS[8].x = 425;
    HIT_CLIPS[8].y = 160;
    HIT_CLIPS[8].w = 55;
    HIT_CLIPS[8].h = 75;

    this->x = x;
    this->y = y;

    this->width = MOVING2_CLIPS[ 0 ].w;
    this->height = MOVING2_CLIPS[ 0 ].h;

}

//void Enemy2::Move()
//{
//    if (this->currentani != STRIKE_CLIPS)
//    {
//        if (direction == RIGHT)
//        {
//            speedx = 4;
//            x+=speedx;
//        }
//        else
//        {
//            speedx = -4;
//            x+=speedx;
//        }
//    }
//
//
//}

//void Enemy2::Check_Flip(Unit* EnemyObj,Unit* AladdinObj)
//{
//    cout<<"EnemyObj X: "<<EnemyObj->GetX()<<endl;
//    cout<<"AladdinObj X: "<<AladdinObj->GetX()<<endl;
//}

void Enemy2::Render(long int& frame, SDL_Renderer* gRenderer, bool debug)
{
//    cout<<"aladdin X: "<<AladdinObj->GetX()<<endl;
//    Check_Flip();
//
//    if (this->Flip == false)
//        flip = SDL_FLIP_NONE;
//    else
//        flip = SDL_FLIP_HORIZONTAL;
//
//    currentani = MOVING2_CLIPS;
//    int currentframes = MOVING2_FRAMES;
    if (Collision == true)
    {
        hit = true;
        currentani = STRIKE_CLIPS;
        currentframes = STRIKE_FRAMES;
    }
    else
    {
        currentani = MOVING2_CLIPS;
        currentframes = MOVING2_FRAMES;
        this->Move();
        hit = false;
    }
    //cout<<"MOVING2 "<<is_MOVING2<<endl;
    //cout<<"is_MOVING2"<<get_is_MOVING2()<<endl;
//    if (get_is_MOVING2() == true)
//    {
//        currentani = MOVING2_CLIPS;
//        currentframes = MOVING2_FRAMES;
//    }
    spriteSheetTexture->Render( x- width/2 , y - height/2 - 10, &currentani[ frame/6 % currentframes], 0.0, NULL, flip, gRenderer );
    //x -= 1;
    if(debug == true)
    {
        SDL_Rect rect = { x - width/2, y - height/2, width, height };
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawRect( gRenderer, &rect );
    }
    CURRENT_ANIMATION = MOVING;
}

//float Enemy2::GetX()
//{
//    return x;
//}
//
//float Enemy2::GetY()
//{
//    return y;
//}
