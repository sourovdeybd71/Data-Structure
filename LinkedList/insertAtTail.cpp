#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node* next;

    Node(int value){
        this->value=value;
        next=NULL;
    }

};

void insertAtTail(Node*& head, int value){
    Node* newNode= new Node(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* tmp=head;
    while (tmp->next!=NULL)
    {
        /* code */
        tmp=tmp->next;

    }
    tmp->next=newNode;

}

void display(Node* head){
    if(head==NULL) return;
    while (head!=NULL)
    {
        /* code */
        cout<<head->value<<" ";
        head=head->next;
    }
    
}



int main(){
    Node* head=NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);insertAtTail(head, 30);
    insertAtTail(head, 40);
    display(head);
}