//#pragma once
//#include"Unit.h"
#pragma once
struct Node
{
    EnemyBase* unit;
    Node* next;
    Node* prev;

    ~Node()
    {
        delete unit;
    }
};
