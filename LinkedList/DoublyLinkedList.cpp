#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;
};

class DoublyLL{
public: 
    node* head;
    int sz;
    DoublyLL(){
        head=NULL;
        sz=0;
    }

    node* createNewNode(int value){
        node* newNode= new node;
        newNode->prev=NULL;
        newNode->data=value;
        newNode->next=NULL;
        return newNode;
    }

    void insertAtHead(int value){
        sz++;
        node* newNode=createNewNode(value);
        if(head==NULL){
            head=newNode;
            return;
        }
        node *a=head;
        newNode->next=a;
        a->prev=newNode;
        head=newNode;
    }

    void insertAtAnyPos(int index, int value){
        if(index>sz){
            return;
        }
        if(index==0){
            insertAtHead(value);
            return;
        }
        node *a=head;
        int cur_ind=0;
        while (cur_ind != index-1)
        {
            /* code */
            a=a->next;
            cur_ind++;
        }
        node* newNode=createNewNode(value);
        newNode->next=a->next;
        newNode->prev=a;
        a->next->prev=newNode;
        a->next=newNode;
        sz++;
     }
    
    void deleteAnode(int index){
        if(index>=sz){
            return;
        }
        node *a=head;
        int cur_ind=0;
        while (cur_ind != index){
            a=a->next;
            cur_ind++;
        }
        node* b=a->prev;
        node* c=a->next;

        if(b!=NULL){
            b->next=c;
        }
        if(c!=NULL){
            c->prev=b;
        }
        delete a;
        if(index==0){
            head=c;
        }
        sz--;

    }

    void Traverse(){
        node* a=head;
        while (a!=NULL)
        {
            /* code */
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
        
    }
    int getSize(){
        return sz;
    }
    void Reverse(){
        if(head==NULL){
            return;
        }
        node* a=head;
        int curInd=0;
        while (curInd!=sz-1)
        {
            /* code */
            a=a->next;
            curInd++;
        }
        node* b=head;
        while (b!=NULL)
        {
            /* code */
            swap(b->next, b->prev);
            b=b->prev;
        }
        head=a;
        
        
    }
};

int main(){
    DoublyLL dll;
    dll.insertAtHead(10);
    dll.insertAtHead(20);
    dll.Traverse();
    // cout<<dll.getSize();
    dll.insertAtAnyPos(1, 15);
    dll.Traverse();
    dll.deleteAnode(1);
    dll.Traverse();
}
