#ifndef ENEMYBASE_H
#define ENEMYBASE_H
#include "LTexture.h"
#include "Unit.h"
//enum MOTION {RIGHT, LEFT, UP, DOWN};
enum ANIMATION {MOVING, CALL, STRIKE, HIT};
static int CURRENT_DIRECTION = RIGHT;
//template <class OBJ>
class EnemyBase
{
    public:
        EnemyBase();
        virtual ~EnemyBase();
        //virtual void Clip(LTexture* image, float x, float y);
        bool Flip = false;
        SDL_Rect* currentani;
        int currentframes;
        int direction = LEFT;
        bool hit = false;
        bool Collision = false;
        bool is_idle = true;
        LTexture* spriteSheetTexture;
        virtual void Check_Flip(Unit* Obj);
        //void Moving(long int& frame, SDL_Renderer* gRenderer, bool debug);
        virtual void Move(int direction);
        virtual void Move();
        virtual void Render(long int& frame, SDL_Renderer* gRenderer, bool debug) = 0;
        int CURRENT_ANIMATION = MOVING;
        //virtual bool checkCollision( Unit* aladdinObj, EnemyBase* knifeObj );
//        SDL_Rect MOVING_CLIPS [MOVING_FRAMES];
//        SDL_Rect NOTMOVING_CLIPS [NOTMOVING_FRAMES];
//        SDL_Rect HIT_CLIPS [HIT_FRAMES];
//        SDL_Rect STRIKE_CLIPS [STRIKE_FRAMES];
        //int CURRENT_ANIMATION = MOVING;
        //virtual bool checkCollision(OBJ* aladdinObj);
        virtual void SetHealth(int);
        virtual int GetHealth();
        virtual float GetX();
        virtual float GetY();
        int GetWidth();
        int GetHeight();
        virtual void SetAlive(bool);
        virtual bool GetAlive();
        SDL_RendererFlip flip;
    protected:
        float x;
        float y;
        int width;
        int height;
        int health = 10;
        float speedx;
        float speedy;
        bool alive = false;
};

#endif // ENEMYBASE_H

////#include "EnemyBase.h"
//
//template <class OBJ>
//EnemyBase<OBJ>::EnemyBase()
//{
//
//}
//template <class OBJ>
//EnemyBase<OBJ>::~EnemyBase()
//{
//
//}
//template <class OBJ>
//float EnemyBase<OBJ>::GetX()
//{
//    return x;
//}
//template <class OBJ>
//float EnemyBase<OBJ>::GetY()
//{
//    return y;
//}
//template <class OBJ>
//int EnemyBase<OBJ>::GetWidth()
//{
//    return width;
//}
//template <class OBJ>
//int EnemyBase<OBJ>::GetHeight()
//{
//    return height;
//}
//template <class OBJ>
//void EnemyBase<OBJ>::SetAlive(bool alive)
//{
//    this->alive = alive;
//}
//template <class OBJ>
//bool EnemyBase<OBJ>::GetAlive()
//{
//    return alive;
//}
//template <class OBJ>
//void EnemyBase<OBJ>::SetHealth(int health)
//{
//    this->health = health;
//}
//template <class OBJ>
//int EnemyBase<OBJ>::GetHealth()
//{
//    return health;
//}
//template <class OBJ>
//bool EnemyBase<OBJ>::checkCollision(OBJ* aladdinObj)
//{
//    //The sides of the rectangles
//    int leftA, leftB;
//    int rightA, rightB;
//    int topA, topB;
//    int bottomA, bottomB;
//
//    //Calculate the sides of rect aladdinObj
//    leftA = aladdinObj->GetX();
//    rightA = aladdinObj->GetX() + aladdinObj->GetWidth();
//    topA = aladdinObj->GetY();
//    bottomA = aladdinObj->GetY() + aladdinObj->GetHeight();
////    cout<<"aladdinobjX"<<aladdinObj->GetX()<<endl;
////    cout<<"aladdinobjY"<<aladdinObj->GetY()<<endl;
//
//    //Calculate the sides of rect knifeObj
//    leftB = this->GetX();
//    rightB = this->GetX() + this->GetWidth();
//    topB = this->GetY();
//    bottomB = this->GetY() + this->GetHeight();
//    cout<<"LEftA"<<leftA<<" ";
////    cout<<"topA"<<topA<<" ";
//    cout<<"rightA"<<rightA<<" ";
////    cout<<"bottomA"<<bottomA<<" "<<endl;
//    cout<<"LEftB"<<leftB<<" ";
////    cout<<"topB"<<topB<<" ";
//    cout<<"rightB"<<rightB<<endl;
////    cout<<"bottomB"<<bottomB<<" "<<endl;
//    //If any of the sides from A are outside of B
//    if( bottomA <= topB )
//    {
//        return false;
//    }
//
//    if( topA >= bottomB )
//    {
//        return false;
//    }
//
//    if( rightA <= leftB )
//    {
//        return false;
//    }
//
//    if( leftA >= rightB )
//    {
//        return false;
//    }
//
//    if (rightA >= leftB)
//    {
//        aladdinObj->hit = true;
//    }
//
//    if (left)
//
//    //If none of the sides from A are outside B
//    return true;
//}
//template <class OBJ>
//void EnemyBase<OBJ>::Move()
//{
//
//}
//template <class OBJ>
//void EnemyBase<OBJ>::Check_Flip(Unit* EnemyObj,Unit* AladdinObj)
//{
//
//}
//template <class OBJ>
//void EnemyBase<OBJ>::Render(long int& frame, SDL_Renderer* gRenderer, bool debug)
//{
//
//}

//#endif // ENEMYBASE_H
