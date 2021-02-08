#include "Camera.h"

Camera::Camera(int SCREEN_WIDTH, int SCREEN_HEIGHT)
{
    this->SCREEN_WIDTH = SCREEN_WIDTH;
    this->SCREEN_HEIGHT = SCREEN_HEIGHT;
    this->width = SCREEN_WIDTH;
    this->height = SCREEN_HEIGHT;
    LEVEL_WIDTH = SCREEN_WIDTH*7.45;
    LEVEL_HEIGHT = SCREEN_HEIGHT*5;
}

Camera::~Camera()
{
    //dtor
}

void Camera::cameraPosition(int aladdinX, int aladdinY, int aladdinH, int aladdinW)// takes aladdin's position
{

    x = (aladdinX + aladdinW) - SCREEN_WIDTH / 2;
    y = (((aladdinY + aladdinH / 3) - SCREEN_HEIGHT / 2) + 40);

    if( x < 0 )
        {
            x = 0;
        }
    if( y < 0 )
        {
            y = 0;
        }
    if( x > LEVEL_WIDTH - width )
        {
            x = LEVEL_WIDTH - width;
        }
    if( y > LEVEL_HEIGHT - height )
        {
            y = LEVEL_HEIGHT - height;
        }
}
int Camera::GetX()
{
   return x;
}
int Camera::GetY()
{
    return y;
}
int Camera::GetWidth()
{
    return width;
}
int Camera::GetHeight()
{
    return height;
}
