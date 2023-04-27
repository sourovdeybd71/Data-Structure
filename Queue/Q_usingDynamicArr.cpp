#include<bits/stdc++.h>
using namespace std;
class Queue{
public:
    int *a;
    int array_cap;
    int l, r;
    int sz;

    Queue(){
        a=new int[1];
        array_cap=1;
        l=0;
        r=-1;
        sz=0;
    }
    void removeCircular(){
        if(l>r){
            int *tmp=new int[array_cap];
            int idx=0;
            for (int i = l; i < array_cap; i++)
            {
                /* code */
                tmp[idx]=a[i];
                idx++;
            }
            for (int i = 0; i < r; i++)
            {
                /* code */
                tmp[idx]=a[i];
                idx++;
            }
            swap(tmp,a);
            l=0;
            r=array_cap-1;
            delete []tmp;
        }
        

    }
    void increaseSize(){
        removeCircular();
        int*tmp=new int[array_cap*2];
        for (int i = 0; i < array_cap; i++)
        {
            /* code */
            tmp[i]=a[i];
        }
        swap(a,tmp);
        array_cap=array_cap*2;
        delete []tmp;
        
    }
    void enqueue(int value){
        //sz= size of actual Q
        //MAX_SIZE= size or array
        if(sz==array_cap){
            increaseSize();
        }
        r++;
        if(r==array_cap){
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
        if(l==array_cap){
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