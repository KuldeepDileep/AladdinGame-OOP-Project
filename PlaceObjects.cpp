#include "PlaceObjects.h"

#include "PlaceObjects.h"

PlaceObjects::PlaceObjects(LTexture* image)
{
    gBackgroundObjects = image;
    stairs = new PlatformsNStairs[7];
    platforms = new PlatformsNStairs[5];
    pillar = new PlatformsNStairs[4];
}

PlaceObjects::~PlaceObjects()
{
    //dtor
}
void PlaceObjects::LoadStairs()
{
    stairs[0].Clip(gBackgroundObjects, 1167, 624, 0);
    stairs[1].Clip(gBackgroundObjects, 1207, 620, 1);
    stairs[2].Clip(gBackgroundObjects, 1247, 616, 2);
    stairs[3].Clip(gBackgroundObjects, 1287, 612, 3);
    stairs[4].Clip(gBackgroundObjects, 1328, 608, 4);
    stairs[5].Clip(gBackgroundObjects, 1368, 604, 5);
    stairs[6].Clip(gBackgroundObjects, 1444, 599, 6);
}

void PlaceObjects::LoadPillars()
{
    pillar[0].Clip(gBackgroundObjects, 1453, 340, 30);
    pillar[1].Clip(gBackgroundObjects, 2223.7, 465, 31);
    pillar[2].Clip(gBackgroundObjects, 2508, 113, 32);
    pillar[3].Clip(gBackgroundObjects, 2623.5, 374, 33);
//    pillar[4].Clip(gBackgroundObjects, 1270, 621, 4);
//    pillar[5].Clip(gBackgroundObjects, 1290, 621, 5);
//    pillar[6].Clip(gBackgroundObjects, 1408, 621, 6);
}

void PlaceObjects::LoadPlatforms()
{
    platforms[0].Clip(gBackgroundObjects, 1497, 395, 7);
    platforms[1].Clip(gBackgroundObjects, 1509, 442, 8);
    platforms[2].Clip(gBackgroundObjects, 1646, 442, 9);
    platforms[3].Clip(gBackgroundObjects, 1895, 442, 10);
    platforms[4].Clip(gBackgroundObjects, 1932, 281, 11);
    //platforms[5].Clip(gBackgroundObjects, 1290, 621, 12);
    //platforms[6].Clip(gBackgroundObjects, 1408, 621, 14);
}

void PlaceObjects::RenderPillars(SDL_Renderer* gRenderer, float cameraXX, float cameraYY)
{
    long int frame = 0;
    for(int i = 0; i < 4; i++)
    {
        pillar[i].Render(frame, gRenderer, false, i+30, cameraXX, cameraYY);
    }

}

void PlaceObjects::RenderPlatforms(SDL_Renderer* gRenderer, float cameraXX, float cameraYY)
{
    long int frame = 0;
    for(int i = 0; i < 5; i++)
    {
        platforms[i].Render(frame, gRenderer, false, i+7, cameraXX, cameraYY);
    }

}
void PlaceObjects::RenderStairs(SDL_Renderer* gRenderer, float cameraXX, float cameraYY)
{
    long int frame = 0;
    for(int i = 0; i < 7; i++)
    {
        stairs[i].Render(frame, gRenderer, false, i, cameraXX, cameraYY);
    }

}
