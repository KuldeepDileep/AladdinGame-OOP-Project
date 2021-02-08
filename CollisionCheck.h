#ifndef COLLISIONCHECK_H
#define COLLISIONCHECK_H
#include <iostream>
using namespace std;
template <class T1, class T2>
class CollisionCheck
{
    public:
        CollisionCheck();
        virtual ~CollisionCheck();
        bool Collision(T1*, T2*);
};

template <class T1, class T2>
CollisionCheck<T1, T2>::CollisionCheck()
{

}
template <class T1, class T2>
CollisionCheck<T1, T2>::~CollisionCheck()
{

}
template <class T1, class T2>
bool CollisionCheck<T1, T2>::Collision(T1* obj1, T2* obj2)
{
    //The sides of the rectangles
    int leftA, leftB;
    int rightA, rightB;
    int topA, topB;
    int bottomA, bottomB;

    //Calculate the sides of rect aladdinObj
    leftA = obj1->GetX();
    rightA = obj1->GetX() + obj1->GetWidth();
    topA = obj1->GetY();
    bottomA = obj1->GetY() + obj1->GetHeight();
//    cout<<"aladdinobjX"<<aladdinObj->GetX()<<endl;
//    cout<<"aladdinobjY"<<aladdinObj->GetY()<<endl;

    //Calculate the sides of rect knifeObj
    leftB = obj2->GetX();
    rightB = obj2->GetX() + obj2->GetWidth();
    topB = obj2->GetY();
    bottomB = obj2->GetY() + obj2->GetHeight();
    //cout<<"LEftA"<<leftA<<" ";
//    cout<<"topA"<<topA<<" ";
    //cout<<"rightA"<<rightA<<" ";
//    cout<<"bottomA"<<bottomA<<" "<<endl;
    //cout<<"LEftB"<<leftB<<" ";
//    cout<<"topB"<<topB<<" ";
    //cout<<"rightB"<<rightB<<endl;
    //cout<<"--------------------------------------------------"<<endl;
//    cout<<"bottomB"<<bottomB<<" "<<endl;
    //If any of the sides from A are outside of B
    if( bottomA <= topB )
    {
        return false;
    }

    if( topA >= bottomB )
    {
        return false;
    }

    if( rightA <= leftB )
    {
        //cout<<"1111111111111111111111111111111"<<endl;
        return false;
    }

    if( leftA >= rightB )
    {
        //cout<<"222222222222222222222222222222222"<<endl;
        return false;
    }

//    if (rightA >= leftB)
//    {
//        aladdinObj->hit = true;
//    }
//
//    if (left)

    //If none of the sides from A are outside B
    return true;
}

#endif // COLLISIONCHECK_H
