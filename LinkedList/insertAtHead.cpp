// #include<bits/stdc++.h>
// using namespace std;

// class Node{
// public:
//     int value;
//     Node* next;//next node er address

//     Node(int value){
//         this->value=value;
//         next=NULL;
//     }
// };

// void insertAtHead(Node*&head,int value){
//     Node *newNode= new Node(value);
//     if(head==NULL){
//         head=newNode;
//         return;
//     }
//     newNode->next=head;
//     head=newNode;
// }
// void display(Node* head){
//     if(head==NULL){
//         return;
//     }
//     while (head!=NULL)
//     {
//         /* code */
//         cout<<head->value<<" ";
//         head=head->next;
//     }
    

// }

// int main(){
//     // Node *a=new Node(10);
//     // Node *b=new Node(20);
//     // Node *c=new Node(30);
//     // a->next=b;
//     // b->next=c;
//     // cout<<a->value<<a->next->value<<b->next->value;
//     Node* head=NULL;
//     insertAtHead(head,10);
    
//     insertAtHead(head,20);
//     insertAtHead(head,30);
//     insertAtHead(head,40);
//     // cout<<head->value<<" "<<head->next->value;
//     display(head);

// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(1);
    v[0] = 9;
    v.resize(9);
    cout << v.back() << '\n';
    return 0;
}