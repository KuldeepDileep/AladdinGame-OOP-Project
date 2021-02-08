#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>
#include"LTexture.h"

using namespace std;

enum MOTION {RIGHT, LEFT, UP, DOWN};

class Unit
{
    protected:
        float x;
        float y;
        float speedx;
        float speedy;
        int health = 10;
        bool alive = true;
        int width;
        int height;
        float friction; //lower speed means more friction

        enum ANIMATION_FRAMES {FLYING_FRAMES = 3};
        SDL_Rect spriteClips[ FLYING_FRAMES ];
        LTexture* spriteSheetTexture;

    public:
        static bool is_moving;
        bool hit = false;
        void virtual Clip(LTexture* image, float x, float y);
        Unit();
        virtual ~Unit();
        virtual void SetHealth(int);
        virtual int GetHealth();
        int GetWidth();
        int GetHeight();
        virtual float GetX();
        virtual float GetY();
        virtual void SetAlive(bool alive);
        virtual bool GetAlive();
        virtual void Move(int direction);
        virtual void Move();
        virtual void Check_Flip(Unit* EnemyObj, Unit* AladdinObj);
        virtual void Render(long int& frame, SDL_Renderer* gRenderer, bool debug, int a = 0, int b = 0);
        //virtual void Damage();
        //virtual void Clip(LTexture* image, float x, float y) = 0;
};



