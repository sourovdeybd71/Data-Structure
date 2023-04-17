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
    void deleteAtHead(){
        if(head==NULL){
            return;
        }
        node *a=head;
        node *b=head->next;
        delete a;
        if(b!=NULL){
            b->prev=NULL;
        }
        head=b;
        sz--;
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

class Stack{
public:
    DoublyLL dl;
    Stack(){

    }
    int top(){
        if(dl.getSize()==0){
            cout<<"Empty\n";
            return -1;
        }
        return dl.head->data;
    }
    void push(int value){
        dl.insertAtHead(value);
    }
    void pop(){
        if(dl.getSize()==0){
            cout<<"Empty\n";
            return;
        }
        dl.deleteAtHead();
    }

};

int main(){
    Stack st;
    st.push(5);
    st.push(7);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top();
}








// #include <bits/stdc++.h>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* nxt;
//     Node* prev;

//     Node(int val){
//         data = val;
//         nxt = NULL;
//         prev = NULL;
//     }
// };

// class Stack{
//     Node* head;
//     Node* top;
//     int sz = 0;
// public:
//     Stack(){
//         head = NULL;
//         top = NULL;
//     }

//     // O(1)
//     void PUSH(int val){
//         sz++;
//         Node* nwNode = new Node(val);
//         if(head == NULL){
//             head = top = nwNode;
//             return;
//         }
//         top->nxt = nwNode;
//         nwNode->prev = top;
//         top = nwNode;
//     }
//     // O(1)
//     void POP(){
//         Node* delNode = top;
//         if(top == head){
//             head = top = NULL;
//         }
//         else{
//             top = delNode->prev;
//             top->nxt = NULL;
//         }
//         delete delNode;
//         sz--;
//     }
//     // O(1)
//     bool EMPTY(){
//         if(sz == 0) return true;
//         return false;
//     }

//     // O(1)
//     int SIZE(){
//         return sz;
//     }

//     // O(1)
//     int TOP(){
//         return top->data;
//     }
// };