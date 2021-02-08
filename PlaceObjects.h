#ifndef PLACEOBJECTS_H
#define PLACEOBJECTS_H
#include "PlatformStairs.h"

class PlaceObjects
{
    public:
        PlaceObjects(LTexture* image);
        virtual ~PlaceObjects();
        void LoadStairs();
        void LoadPlatforms();
        void LoadPillars();
        void RenderStairs(SDL_Renderer* gRenderer, float cameraXX, float cameraYY);
        void RenderPillars(SDL_Renderer* gRenderer, float cameraXX, float cameraYY);
        void RenderPlatforms(SDL_Renderer* gRenderer, float cameraXX, float cameraYY);
    private:
        float cameraX;
        float cameraY;
        PlatformsNStairs* stairs;
        PlatformsNStairs* platforms;
        PlatformsNStairs* pillar;
        LTexture* gBackgroundObjects;


};

#endif // PLACEOBJECTS_H
