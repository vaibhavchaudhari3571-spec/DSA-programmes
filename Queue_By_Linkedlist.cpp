#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

class queue
{
    private:
    node *front;
    node *rear;

    public:

    queue()
    {
        front=NULL;
        rear=NULL;
    }

    void enqueue(int x)
    {
        node *p=new node(x);
        if(empty())
        {
            front=p;
            rear=p;
        }
        else
        {
            rear->next=p;
            rear=p;
        }
    }
    int dequeue()
    {
        int x=front->data;
        node *p=front;
        front=front->next;
        delete p;
        
    }

    void display()
    {
        node *q=front;
        while(q!=NULL)
        {
            cout<<" "<<q->data;
            q=q->next;
        }
    }

    int empty()
    {
        if(front==NULL)
        return 1;

        else return 0;
    }
    
};

int main()
{
    queue q;

    cout<<"Queue After Enqueue Operation:"<<endl;
    q.enqueue(10);
    q.display();cout<<endl;

    cout<<"Queue After Enqueue Operation:"<<endl;
    q.enqueue(20);
    q.display();cout<<endl;

    cout<<"Queue After Enqueue Operation:"<<endl;
    q.enqueue(30);
    q.display();cout<<endl;

    cout<<"Queue After Enqueue Operation:"<<endl;
    q.enqueue(40);
    q.display();cout<<endl;

    cout<<"Queue After Enqueue Operation:"<<endl;
    q.enqueue(50);
    q.display();cout<<endl;

    cout<<"Queue After Enqueue Operation:"<<endl;
    q.enqueue(60);
    q.display();cout<<endl;



    if(!q.empty())
    {
        cout<<"Queue After Dequeue Operation: "<<q.dequeue()<<endl;
    }
    else
    {
        cout<<"Queue Is Empty!!"<<endl;
    }
    q.display();cout<<endl;

    if(!q.empty())
    {
        cout<<"Queue After Dequeue Operation: "<<q.dequeue()<<endl;
    }
    else
    {
        cout<<"Queue Is Empty!!"<<endl;
    }
    q.display();cout<<endl;

    if(!q.empty())
    {
        cout<<"Queue After Dequeue Operation: "<<q.dequeue()<<endl;
    }
    else
    {
        cout<<"Queue Is Empty!!"<<endl;
    }
    q.display();cout<<endl;

    if(!q.empty())
    {
        cout<<"Queue After Dequeue Operation: "<<q.dequeue()<<endl;
    }
    else
    {
        cout<<"Queue Is Empty!!"<<endl;
    }
    q.display();cout<<endl;

    if(!q.empty())
    {
        cout<<"Queue After Dequeue Operation: "<<q.dequeue()<<endl;
    }
    else
    {
        cout<<"Queue Is Empty!!"<<endl;
    }
    q.display();cout<<endl;

    if(!q.empty())
    {
        cout<<"Queue After Dequeue Operation: "<<q.dequeue()<<endl;
    }
    else
    {
        cout<<"Queue Is Empty!!"<<endl;
    }
    q.display();cout<<endl;

    if(!q.empty())
    {
        cout<<"Queue After Dequeue Operation: "<<q.dequeue()<<endl;
    }
    else
    {
        cout<<"Queue Is Empty!!"<<endl;
    }
    q.display();cout<<endl;

    return 0;
}


/*
OUTPUT

PS D:\vaibhav C> 
> cd "d:\vaibhav C\" ; if ($?) { g++ Queue_By_Linkedlist.cpp -o Queue_By_Linkedlist } ; if ($?) { .\Queue_By_Linkedlist }
Queue After Enqueue Operation:
 10
Queue After Enqueue Operation:
 10 20
Queue After Enqueue Operation:
 10 20 30
Queue After Enqueue Operation:
 10 20 30 40
Queue After Enqueue Operation:
 10 20 30 40 50
Queue After Enqueue Operation:
 10 20 30 40 50 60
Queue After Dequeue Operation: 1
 20 30 40 50 60
Queue After Dequeue Operation: 1
 30 40 50 60
Queue After Dequeue Operation: 1
 40 50 60
Queue After Dequeue Operation: 1
 50 60
Queue After Dequeue Operation: 1
 60
Queue After Dequeue Operation: 1

Queue Is Empty!!
*/
    


    