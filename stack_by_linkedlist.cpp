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

class stack
{
    private:
    node *top;

    public:
    stack()
    {
        top=NULL;
    }

    int empty()
    {
        if(top==NULL)
        {
            return 1;
        }
        else return 0;
    }

    void push(int x)
    {
        node *p=new node(x);
        p->next=top;
        top=p;
    }

    int pop()
    {
        int x= top->data;
        node *p=NULL;
        p=top;
        top=top->next;
        delete p;
        return x;
    }

    void display()
    {
        node *q=top;
        while(q!=NULL)
        {
            cout<<" "<<q->data;
            q=q->next;
        }
    }
};


int main()
{
    stack s;

    cout<<"Stack After Push Operation:"<<endl;
    s.push(10);
    s.display();cout<<endl;

    cout<<"Stack After Push Operation:"<<endl;
    s.push(20);
    s.display();cout<<endl;

    cout<<"Stack After Push Operation:"<<endl;
    s.push(30);
    s.display();cout<<endl;

    cout<<"Stack After Push Operation:"<<endl;
    s.push(40);
    s.display();cout<<endl;

    cout<<"Stack After Push Operation:"<<endl;
    s.push(50);
    s.display();cout<<endl;

    cout<<"Stack After Push Operation:"<<endl;
    s.push(60);
    s.display();cout<<endl;
   
    

     
     

     if(!s.empty())
    {
        cout<<"Stack After Popping: "<<s.pop()<<endl;
    }
    else
    {
        cout<<"Stack Is Empty!!"<<endl;
    }
    s.display();cout<<endl;
     

     if(!s.empty())
    {
        cout<<"Stack After Popping: "<<s.pop()<<endl;
    }
    else
    {
        cout<<"Stack Is Empty!!"<<endl;
    }
    s.display();cout<<endl;
    

     if(!s.empty())
    {
        cout<<"Stack After Popping: "<<s.pop()<<endl;
    }
    else
    {
        cout<<"Stack Is Empty!!"<<endl;
    }
    s.display();cout<<endl;
    

     if(!s.empty())
    {
        cout<<"Stack After Popping: "<<s.pop()<<endl;
    }
    else
    {
        cout<<"Stack Is Empty!!"<<endl;
    }
    s.display();cout<<endl;
     

     if(!s.empty())
    {
        cout<<"Stack After Popping: "<<s.pop()<<endl;
    }
    else
    {
        cout<<"Stack Is Empty!!"<<endl;
    }
    s.display();cout<<endl;


    if(!s.empty())
    {
        cout<<"Stack After Popping: "<<s.pop()<<endl;
    }
    else
    {
        cout<<"Stack Is Empty!!"<<endl;
    }
    s.display();cout<<endl;
     return 0;


}


/*
OUTPUT

PS D:\vaibhav C> cd "d:\vaibhav C\" ; if ($?) { g++ Stack_by_Linkedlist.cpp -o Stack_by_Linkedlist } ; if ($?) { .\Stack_by_Linkedlist }
Stack After Push Operation:
 10
Stack After Push Operation:
 20 10
Stack After Push Operation:
 30 20 10
Stack After Push Operation:
 40 30 20 10
Stack After Push Operation:
 50 40 30 20 10
Stack After Push Operation:
 60 50 40 30 20 10
Stack After Popping: 60
 50 40 30 20 10
Stack After Popping: 50
 40 30 20 10
Stack After Popping: 40
 30 20 10
Stack After Popping: 30
 20 10
Stack After Popping: 20
 10
Stack After Popping: 10

Stack Is Empty!!
*/

