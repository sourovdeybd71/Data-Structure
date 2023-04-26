#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE=500;
class Queue{
public:
    int a[MAX_SIZE];
    int l, r;
    int sz;

    Queue(){
        l=0;
        r=-1;
        sz=0;
    }
    void enqueue(int value){
        //sz= size of actual Q
        //MAX_SIZE= size or array
        if(sz==MAX_SIZE){
            cout<<"Queue is full\n";
            return;
        }
        r++;
        if(r==MAX_SIZE){
            //r er index abr array-r shurute niye ashchi
            r=0;
        }
        a[r]=value;
        sz++;
    }
    void dequeue(){
        if(sz==0){
            cout<<"Q is empty\n";
            return;
        }
         l++;
        if(l==MAX_SIZE){
            //l er index abr array-r shurute niye ashchi
            l=0;
        }
       
        sz--;
        

    }
    int front(){
        if(sz==0){
            cout<<"Q is empty\n";
            return -1;
        }
        return a[l];
    }
    int size(){
        return sz;
    }
};

int main(){
    Queue q;
    cout<<"Size: "<<q.size()<<"\n";
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<"Size: "<<q.size()<<"\n";

}