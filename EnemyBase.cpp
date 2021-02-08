#include "EnemyBase.h"

EnemyBase::EnemyBase()
{
    spriteSheetTexture = NULL;
}

EnemyBase::~EnemyBase()
{
 cout<<"LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL"<<endl;
 spriteSheetTexture = NULL;
}

float EnemyBase::GetX()
{
    return x;
}

float EnemyBase::GetY()
{
    return y;
}

int EnemyBase::GetWidth()
{
    return width;
}

int EnemyBase::GetHeight()
{
    return height;
}

void EnemyBase::SetAlive(bool alive)
{
    this->alive = alive;
}

bool EnemyBase::GetAlive()
{
    return alive;
}

void EnemyBase::SetHealth(int health)
{
    this->health = health;
}
int EnemyBase::GetHealth()
{
    return health;
}
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
void EnemyBase::Move(int direction)
{
    //cout<<"Hit : "<<this->hit<<endl;
//    if (this->hit != true)
//    {
        if (direction == RIGHT)
        {
            speedx = -4;
            x+=speedx;
        }
        else
        {
            speedx = 4;
            x+=speedx;
        }
//    }
}

void EnemyBase::Move()
{

}
void EnemyBase::Check_Flip(Unit* Obj)
{
    int enemyX, aladdinX;
    enemyX = this->GetX();
    //cout<<"EnemyX : "<<enemyX<<endl;
    aladdinX = Obj->GetX();
    //cout<< "AladdinX : "<<aladdinX<<endl;
    //cout<<"Direction : "<<this->direction<<endl;
    //cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    if ((aladdinX < enemyX) && this->direction == RIGHT)
    {
        //cout<<" LEFTTTTTTTTTTTTT "<<endl;
        this->flip = SDL_FLIP_HORIZONTAL;
        //this->Flip = true;
        this->direction = LEFT;
    }
    else if ((aladdinX > enemyX) && this->direction == LEFT)
    {
        //cout<<"RIGHTTTTTTTTTTTTTT"<<endl;
        this->flip = SDL_FLIP_HORIZONTAL;
        //this->Flip = true;
        this->direction = RIGHT;
    }
}

void EnemyBase::Render(long int& frame, SDL_Renderer* gRenderer, bool debug)
{

}

