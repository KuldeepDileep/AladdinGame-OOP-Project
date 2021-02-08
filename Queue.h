#ifndef QUEUE_H
#define QUEUE_H
#include "CollisionCheck.h"
#include "EnemyBase.h"
#include"Node.h"
class Queue
{
private:
    Node* head;
    Node* tail;
public:
    Queue();
    ~Queue();
    void Enqueue(EnemyBase*);
    void CheckAll(Unit*&);
    void Clean();
    void Render(long int &frame, SDL_Renderer* gRenderer, bool debug);
    void Move();
};

#endif // QUEUE_H
