#include "PlatformStairs.h"

PlatformsNStairs::PlatformsNStairs()
{
    spriteSheetTexture = NULL;
}

PlatformsNStairs::~PlatformsNStairs()
{
    spriteSheetTexture = NULL;
}

void PlatformsNStairs::Clip(LTexture* image, float x, float y, int num)
{
    spriteSheetTexture = image;

    //Stairs
    spriteClips[ 0 ].x = 1069;
    spriteClips[ 0 ].y = 566;
    spriteClips[ 0 ].w = 40;
    spriteClips[ 0 ].h = 25;

    spriteClips[ 1 ].x = 1114;
    spriteClips[ 1 ].y = 559;
    spriteClips[ 1 ].w = 40;
    spriteClips[ 1 ].h = 33;

    spriteClips[ 2 ].x = 1159;
    spriteClips[ 2 ].y = 550;
    spriteClips[ 2 ].w = 40;
    spriteClips[ 2 ].h = 41;

    spriteClips[ 3 ].x = 1204;
    spriteClips[ 3 ].y = 542;
    spriteClips[ 3 ].w = 41;
    spriteClips[ 3 ].h = 49;

    spriteClips[ 4 ].x = 1250;
    spriteClips[ 4 ].y = 534;
    spriteClips[ 4 ].w = 41;
    spriteClips[ 4 ].h = 56;

    spriteClips[ 5 ].x = 1295;
    spriteClips[ 5 ].y = 526;
    spriteClips[ 5 ].w = 40;
    spriteClips[ 5 ].h = 64;

    spriteClips[ 6 ].x = 1341;
    spriteClips[ 6 ].y = 518;
    spriteClips[ 6 ].w = 112;
    spriteClips[ 6 ].h = 73;

    //Platforms
    spriteClips[ 7 ].x = 1411;
    spriteClips[ 7 ].y = 342;
    spriteClips[ 7 ].w = 43;
    spriteClips[ 7 ].h = 16;

    spriteClips[ 8 ].x = 1373;
    spriteClips[ 8 ].y = 390;
    spriteClips[ 8 ].w = 144;
    spriteClips[ 8 ].h = 17;

    spriteClips[ 9 ].x = 1564;
    spriteClips[ 9 ].y = 390;
    spriteClips[ 9 ].w = 39;
    spriteClips[ 9 ].h = 15;

    spriteClips[ 10 ].x = 1683;
    spriteClips[ 10 ].y = 390;
    spriteClips[ 10 ].w = 298;
    spriteClips[ 10 ].h = 15;

    spriteClips[ 11 ].x = 1524;
    spriteClips[ 11 ].y = 229;
    spriteClips[ 11 ].w = 688;
    spriteClips[ 11 ].h = 17;

    //end
    spriteClips[ 12 ].x = 2193;
    spriteClips[ 12 ].y = 929;
    spriteClips[ 12 ].w = 65;
    spriteClips[ 12 ].h = 446;

    spriteClips[ 13 ].x = 1421;
    spriteClips[ 13 ].y = 700;
    spriteClips[ 13 ].w = 65;
    spriteClips[ 13 ].h = 700;

    spriteClips[ 14 ].x = 1421;
    spriteClips[ 14 ].y = 700;
    spriteClips[ 14 ].w = 65;
    spriteClips[ 14 ].h = 700;

    spriteClips[ 15 ].x = 2193;
    spriteClips[ 15 ].y = 929;
    spriteClips[ 15 ].w = 65;
    spriteClips[ 15 ].h = 446;

    spriteClips[ 16 ].x = 1421;
    spriteClips[ 16 ].y = 700;
    spriteClips[ 16 ].w = 65;
    spriteClips[ 16 ].h = 700;

    spriteClips[ 17 ].x = 1421;
    spriteClips[ 17 ].y = 700;
    spriteClips[ 17 ].w = 65;
    spriteClips[ 17 ].h = 700;

    spriteClips[ 18 ].x = 2193;
    spriteClips[ 18 ].y = 929;
    spriteClips[ 18 ].w = 65;
    spriteClips[ 18 ].h = 446;

    spriteClips[ 19 ].x = 1421;
    spriteClips[ 19 ].y = 700;
    spriteClips[ 19 ].w = 65;
    spriteClips[ 19 ].h = 700;

    spriteClips[ 20 ].x = 1421;
    spriteClips[ 20 ].y = 700;
    spriteClips[ 20 ].w = 65;
    spriteClips[ 20 ].h = 700;

    spriteClips[ 21 ].x = 2193;
    spriteClips[ 21 ].y = 929;
    spriteClips[ 21 ].w = 65;
    spriteClips[ 21 ].h = 446;

    spriteClips[ 22 ].x = 1421;
    spriteClips[ 22 ].y = 700;
    spriteClips[ 22 ].w = 65;
    spriteClips[ 22 ].h = 700;

    spriteClips[ 23 ].x = 2193;
    spriteClips[ 23 ].y = 929;
    spriteClips[ 23 ].w = 65;
    spriteClips[ 23 ].h = 446;

    spriteClips[ 24 ].x = 1421;
    spriteClips[ 24 ].y = 700;
    spriteClips[ 24 ].w = 65;
    spriteClips[ 24 ].h = 700;

    spriteClips[ 25 ].x = 2193;
    spriteClips[ 25 ].y = 929;
    spriteClips[ 25 ].w = 65;
    spriteClips[ 25 ].h = 446;

    spriteClips[ 26 ].x = 1421;
    spriteClips[ 26 ].y = 700;
    spriteClips[ 26 ].w = 65;
    spriteClips[ 26 ].h = 700;

    spriteClips[ 27 ].x = 2193;
    spriteClips[ 27 ].y = 929;
    spriteClips[ 27 ].w = 65;
    spriteClips[ 27 ].h = 446;

    spriteClips[ 28 ].x = 1421;
    spriteClips[ 28 ].y = 700;
    spriteClips[ 28 ].w = 65;
    spriteClips[ 28 ].h = 700;

    spriteClips[ 29 ].x = 2193;
    spriteClips[ 29 ].y = 929;
    spriteClips[ 29 ].w = 65;
    spriteClips[ 29 ].h = 446;

    //Pillars
    spriteClips[ 30 ].x = 1421;
    spriteClips[ 30 ].y = 700;
    spriteClips[ 30 ].w = 65;
    spriteClips[ 30 ].h = 700;

    spriteClips[ 31 ].x = 2204;
    spriteClips[ 31 ].y = 937;
    spriteClips[ 31 ].w = 40;
    spriteClips[ 31 ].h = 446;

    spriteClips[ 32 ].x = 2491;
    spriteClips[ 32 ].y = 659;
    spriteClips[ 32 ].w = 34;
    spriteClips[ 32 ].h = 227;

    spriteClips[ 33 ].x = 2605;
    spriteClips[ 33 ].y = 777;
    spriteClips[ 33 ].w = 39;
    spriteClips[ 33 ].h = 606;



    this->x = x;
    this->y = y;

    this->width = spriteClips[ num ].w;
    this->height = spriteClips[ num ].h;
}
void PlatformsNStairs::Render(long int& frame, SDL_Renderer* gRenderer, bool debug, int num, int a, int b)
{
    spriteSheetTexture->Render( x - width/2 -a , y - height/2 - b, &spriteClips[num], 0.0, NULL, SDL_FLIP_NONE, gRenderer );
}


