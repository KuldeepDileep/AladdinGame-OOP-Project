#include "Enemy.h"

//Enemy::Enemy(long int& frame, SDL_Renderer* gRenderer, bool debug)
//{
//    spriteSheetTexture = NULL;
//}
//Enemy::Enemy(){
//}
Enemy::~Enemy()
{
    cout<<"Enemy Deallocated"<<endl;
}

Enemy::Enemy(LTexture* image, float x, float y)
{
    spriteSheetTexture = image;

//Enemy 1:
    //Frame 0
    MOVING_CLIPS[ 0 ].x = 0;
    MOVING_CLIPS[ 0 ].y =   315;
    MOVING_CLIPS[ 0 ].w = 55;
    MOVING_CLIPS[ 0 ].h = 60;

    //Frame 1
    MOVING_CLIPS[ 1 ].x = 55;
    MOVING_CLIPS[ 1 ].y =   315;
    MOVING_CLIPS[ 1 ].w = 55;
    MOVING_CLIPS[ 1 ].h = 60;

    //Frame 2
    MOVING_CLIPS[ 2 ].x = 110;
    MOVING_CLIPS[ 2 ].y = 315;
    MOVING_CLIPS[ 2 ].w = 60;
    MOVING_CLIPS[ 2 ].h = 60;
        //Frame 3
    MOVING_CLIPS[ 3 ].x = 170;
    MOVING_CLIPS[ 3 ].y = 315;
    MOVING_CLIPS[ 3 ].w = 60;
    MOVING_CLIPS[ 3 ].h = 60;
        //Frame 4
    MOVING_CLIPS[ 4 ].x = 230;
    MOVING_CLIPS[ 4 ].y = 315;
    MOVING_CLIPS[ 4 ].w = 50;
    MOVING_CLIPS[ 4 ].h = 60;
    //Frame 5
    MOVING_CLIPS[ 5 ].x = 280;
    MOVING_CLIPS[ 5 ].y = 315;
    MOVING_CLIPS[ 5 ].w = 50;
    MOVING_CLIPS[ 5 ].h = 60;
        //Frame 6
    MOVING_CLIPS[ 6 ].x = 330;
    MOVING_CLIPS[ 6 ].y = 315;
    MOVING_CLIPS[ 6 ].w = 50;
    MOVING_CLIPS[ 6 ].h = 60;
        //Frame 7
    MOVING_CLIPS[ 7 ].x = 380;
    MOVING_CLIPS[ 7 ].y = 315;
    MOVING_CLIPS[ 7 ].w = 55;
    MOVING_CLIPS[ 7 ].h = 60;
//When Aladdin not moving:
    NOTMOVING_CLIPS[0].x = 0;
    NOTMOVING_CLIPS[0].y = 445;
    NOTMOVING_CLIPS[0].w = 55;
    NOTMOVING_CLIPS[0].h = 60;

    NOTMOVING_CLIPS[1].x = 55;
    NOTMOVING_CLIPS[1].y = 445;
    NOTMOVING_CLIPS[1].w = 40;
    NOTMOVING_CLIPS[1].h = 60;

    NOTMOVING_CLIPS[2].x = 95;
    NOTMOVING_CLIPS[2].y = 445;
    NOTMOVING_CLIPS[2].w = 60;
    NOTMOVING_CLIPS[2].h = 60;

    NOTMOVING_CLIPS[3].x = 155;
    NOTMOVING_CLIPS[3].y = 445;
    NOTMOVING_CLIPS[3].w = 65;
    NOTMOVING_CLIPS[3].h = 60;

    NOTMOVING_CLIPS[4].x = 220;
    NOTMOVING_CLIPS[4].y = 445;
    NOTMOVING_CLIPS[4].w = 55;
    NOTMOVING_CLIPS[4].h = 60;

    NOTMOVING_CLIPS[5].x = 275;
    NOTMOVING_CLIPS[5].y = 445;
    NOTMOVING_CLIPS[5].w = 50;
    NOTMOVING_CLIPS[5].h = 60;
//Strike clips:
    STRIKE_CLIPS[0].x = 0;
    STRIKE_CLIPS[0].y = 570;
    STRIKE_CLIPS[0].w = 64;
    STRIKE_CLIPS[0].h = 60;

    STRIKE_CLIPS[1].x = 65;
    STRIKE_CLIPS[1].y = 570;
    STRIKE_CLIPS[1].w = 70;
    STRIKE_CLIPS[1].h = 60;

    STRIKE_CLIPS[2].x = 135;
    STRIKE_CLIPS[2].y = 570;
    STRIKE_CLIPS[2].w = 80;
    STRIKE_CLIPS[2].h = 60;

    STRIKE_CLIPS[3].x = 215;
    STRIKE_CLIPS[3].y = 580;
    STRIKE_CLIPS[3].w = 80;
    STRIKE_CLIPS[3].h = 50;

    STRIKE_CLIPS[4].x = 295;
    STRIKE_CLIPS[4].y = 580;
    STRIKE_CLIPS[4].w = 95;
    STRIKE_CLIPS[4].h = 49;

    STRIKE_CLIPS[5].x = 390;
    STRIKE_CLIPS[5].y = 580;
    STRIKE_CLIPS[5].w = 105;
    STRIKE_CLIPS[5].h = 50;

    STRIKE_CLIPS[6].x = 495;
    STRIKE_CLIPS[6].y = 565;
    STRIKE_CLIPS[6].w = 50;
    STRIKE_CLIPS[6].h = 65;

    STRIKE_CLIPS[7].x = 545;
    STRIKE_CLIPS[7].y = 550;
    STRIKE_CLIPS[7].w = 55;
    STRIKE_CLIPS[7].h = 80;

    STRIKE_CLIPS[8].x = 605;
    STRIKE_CLIPS[8].y = 555;
    STRIKE_CLIPS[8].w = 60;
    STRIKE_CLIPS[8].h = 75;

    STRIKE_CLIPS[9].x = 670;
    STRIKE_CLIPS[9].y = 555;
    STRIKE_CLIPS[9].w = 120;
    STRIKE_CLIPS[9].h = 75;

    STRIKE_CLIPS[10].x = 790;
    STRIKE_CLIPS[10].y = 550;
    STRIKE_CLIPS[10].w = 100;
    STRIKE_CLIPS[10].h = 75;

    STRIKE_CLIPS[11].x = 890;
    STRIKE_CLIPS[11].y = 550;
    STRIKE_CLIPS[11].w = 120;
    STRIKE_CLIPS[11].h = 80;

    STRIKE_CLIPS[12].x = 1010;
    STRIKE_CLIPS[12].y = 550;
    STRIKE_CLIPS[12].w = 100;
    STRIKE_CLIPS[12].h = 75;
//Hit sprites:
    HIT_CLIPS[0].x = 0;
    HIT_CLIPS[0].y = 865;
    HIT_CLIPS[0].w = 55;
    HIT_CLIPS[0].h = 65;

    HIT_CLIPS[1].x = 55;
    HIT_CLIPS[1].y = 865;
    HIT_CLIPS[1].w = 50;
    HIT_CLIPS[1].h = 65;

    HIT_CLIPS[2].x = 105;
    HIT_CLIPS[2].y = 865;
    HIT_CLIPS[2].w = 45;
    HIT_CLIPS[2].h = 65;

    HIT_CLIPS[3].x = 150;
    HIT_CLIPS[3].y = 865;
    HIT_CLIPS[3].w = 45;
    HIT_CLIPS[3].h = 65;

    HIT_CLIPS[4].x = 195;
    HIT_CLIPS[4].y = 865;
    HIT_CLIPS[4].w = 50;
    HIT_CLIPS[4].h = 65;

    HIT_CLIPS[5].x = 245;
    HIT_CLIPS[5].y = 865;
    HIT_CLIPS[5].w = 54;
    HIT_CLIPS[5].h = 65;

    HIT_CLIPS[6].x = 298;
    HIT_CLIPS[6].y = 865;
    HIT_CLIPS[6].w = 46;
    HIT_CLIPS[6].h = 65;

    HIT_CLIPS[7].x = 345;
    HIT_CLIPS[7].y = 865;
    HIT_CLIPS[7].w = 45;
    HIT_CLIPS[7].h = 65;

    HIT_CLIPS[8].x = 390;
    HIT_CLIPS[8].y = 865;
    HIT_CLIPS[8].w = 50;
    HIT_CLIPS[8].h = 70;

    HIT_CLIPS[9].x = 440;
    HIT_CLIPS[9].y = 865;
    HIT_CLIPS[9].w = 50;
    HIT_CLIPS[9].h = 65;

    this->x = x;
    this->y = y;

    this->width = MOVING_CLIPS[ 0 ].w;
    this->height = MOVING_CLIPS[ 0 ].h;

}

//void Enemy::Move()
//{
//     speedx = -4;
//     x+=speedx;
//}

//void Enemy::Check_Flip(Unit* EnemyObj,Unit* AladdinObj)
//{
//    cout<<"EnemyObj X: "<<EnemyObj->GetX()<<endl;
//    cout<<"AladdinObj X: "<<AladdinObj->GetX()<<endl;
//}

void Enemy::Render(long int& frame, SDL_Renderer* gRenderer, bool debug)
{
//    cout<<"aladdin X: "<<AladdinObj->GetX()<<endl;
//    Check_Flip();
//    if (this->Flip == false)
//        flip = SDL_FLIP_NONE;
//    else
//        flip = SDL_FLIP_HORIZONTAL;
    //SDL_Rect* currentani = NOTMOVING_CLIPS;
//    currentani = NOTMOVING_CLIPS;
//    //int currentframes = NOTMOVING_FRAMES;
//    int currentframes = NOTMOVING_FRAMES;
    if (Collision == true)
    {
        hit = true;
        currentani = STRIKE_CLIPS;
        currentframes = STRIKE_FRAMES;
    }
    else
    {
        currentani = MOVING_CLIPS;
        currentframes = MOVING_FRAMES;
        this->Move();
        hit = false;
    }
//    cout<<"Moving "<<is_moving<<endl;
   // cout<<"is_moving"<<get_is_moving()<<endl;
//    if (get_is_moving() == true)
//    {
//        currentani = MOVING_CLIPS;
//        currentframes = MOVING_FRAMES;
//    }
    spriteSheetTexture->Render( x- width/2 , y - height/2, &currentani[ frame/6 % currentframes], 0.0, NULL, flip, gRenderer );
    //x -= 1;
    if(debug == true)
    {
        SDL_Rect rect = { x - width/2, y - height/2, width, height };
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
        SDL_RenderDrawRect( gRenderer, &rect );
    }
    CURRENT_ANIMATION = MOVING;
}


