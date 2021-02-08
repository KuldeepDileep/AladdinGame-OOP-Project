#ifndef PILLAR_H
#define PILLAR_H

class Pillars
{
private:
    float x;
    float y;
    int width;
    int height;


//    enum ANIMATION_FRAMES {FLYING_FRAMES = 2};
    SDL_Rect spriteClips[ 2 ];

    LTexture* spriteSheetTexture;
public:
    Pillars(){}
    virtual ~Pillars(){}

    void Clip(LTexture* image, float x, float y, int num)
{
    spriteSheetTexture = image;

    //Frame 0
    spriteClips[ 0 ].x = 1421;
    spriteClips[ 0 ].y = 700;
    spriteClips[ 0 ].w = 65;
    spriteClips[ 0 ].h = 700;

    spriteClips[ 1 ].x = 2193;
    spriteClips[ 1 ].y = 929;
    spriteClips[ 1 ].w = 65;
    spriteClips[ 1 ].h = 446;


    this->x = x;
    this->y = y;

    this->width = spriteClips[ num ].w;
    this->height = spriteClips[ num ].h;
}
MovePillars(int direction)
{

    if(direction==LEFT)
    {
        int speedx = 5;
        x+=speedx;
    }

    if(direction==RIGHT)
    {
        int speedx = -5;
        x-=5;
    }
}
void Render(long int& frame, SDL_Renderer* gRenderer, bool debug, int num, int a, int b)
{
    spriteSheetTexture->Render( x - width/2 -a , y - height/2 - b, &spriteClips[num], 0.0, NULL, SDL_FLIP_NONE, gRenderer );
}


};


#endif // PILLAR_H
