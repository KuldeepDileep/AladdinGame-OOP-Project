#include "Queue.h"
#include<iostream>

using namespace std;
Queue::Queue()
{
    head = NULL;
    tail = NULL;
}
Queue::~Queue()
{
    while(head != NULL)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
void Queue::Enqueue(EnemyBase* unit)
{
    if(head == NULL)
    {
        head = new Node;
        head->unit = unit;
        head->next = NULL;
        head->prev = NULL;
        tail = head;
    }
    else
    {
        tail->next = new Node;
        tail->next->unit = unit;
        tail->next->next = NULL;
        tail->next->prev = tail;
        tail = tail->next;
    }
}
void Queue::Clean()
{
    Node* temp = head;
    while(temp!=NULL)
    {
        if(temp->unit->GetAlive() == false)
        {
            if(temp->prev == NULL)
            {
                head=head->next;
                if(head!=NULL)
                {
                    head->prev = NULL;
                }
                delete temp;
                temp = head;
            }
            else if(temp ->next == NULL)
            {
                tail = tail->prev;
                tail->next = NULL;
                delete temp;
                break;
            }
            else
            {
                Node* carry = temp->next;
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                delete temp;
                temp = carry;
            }
        }
        temp = temp->next;
    }
}
void Queue::Render(long int& frame, SDL_Renderer* gRenderer, bool debug)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        temp->unit->Render(frame, gRenderer, debug);
        temp->unit->Move();
        temp=temp->next;
    }
}
void Queue::Move()
{
    //cout<<"before"<<endl;
    Node* temp = head;
    while(temp!=NULL)
    {
        temp->unit->Move();
        temp=temp->next;
    }
    //cout<<"after"<<endl;
}

void Queue::CheckAll(Unit*& aladdin)
{
    //cout<<"before checkall"<<endl;
    Node* temp = head;
    //cout<<"1"<<endl;
    CollisionCheck <Unit, EnemyBase> c1;
    //cout<<"2"<<endl;
    int check = 0;
    while (temp!=NULL)
    {
        //cout<<"3"<<endl;
        //cout<<"Collision : "<<c1.Collision(aladdin, temp->unit)<<endl;
        if (c1.Collision(aladdin, temp->unit) == true)
        {
            int health = aladdin->GetHealth() - 1;
            aladdin->SetHealth(health);
            //check += 1;
            //cout<<"4"<<endl;
            if (temp == head)
            {
                //cout<<"5"<<endl;
                temp = temp->next;
                //cout<<"6"<<endl;
                delete head;
                //cout<<"7"<<endl;
                head = temp;
                if(head != 0)
                {
                    head -> prev = 0;
                }
                //cout<<"8"<<endl;
            }
            else
            {
                //cout<<"9"<<endl;
                temp->prev->next = temp->next;
                //cout<<"10"<<endl;
                temp->next->prev = temp->prev;
                //cout<<"11"<<endl;
                Node* temptemp = temp;
                //cout<<"12"<<endl;
                temp = temp ->next;
                //cout<<"13"<<endl;
                delete temptemp;
                //cout<<"14"<<endl;
            }
            //cout<<"15"<<endl;
            //cout<<"number of collisions"<<check<<endl;
        }
        else
        {
            //cout<<"16"<<endl;
            temp = temp->next;
            //cout<<"17"<<endl;
        }
    }
}
