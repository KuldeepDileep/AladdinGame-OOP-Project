#include "Background.h"

Background::Background(LTexture* image)
{
    backGroundSprite = nullptr;
    backGroundSprite = image;
}
Background::~Background()
{

}
void Background::setCameraPosition(int x, int y, int h, int w)// takes camera's position
{
    camera.h = h;
    camera.w = w;
    camera.x = x;
    camera.y = y;


}
void Background::Render(SDL_Renderer* gRenderer)
{
    backGroundSprite->Render( 0 , 0, &camera, 0.0, NULL, SDL_FLIP_NONE, gRenderer);
}

