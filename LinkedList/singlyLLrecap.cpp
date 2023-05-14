#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
};

class LinkedList{
public:
    node* head;
    LinkedList(){
        head=NULL;
    }
    node* createNode(int data){
        node* newNode=new node;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
    }
    void insertAtHead(int data){
        node* newNode=createNode(data);
        newNode->next=head;
        head=newNode;
    }
};

int main(){

}