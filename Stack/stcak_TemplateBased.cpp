#include<bits/stdc++.h>
using namespace std;

template <class T>

class Stack{
public: 
    T *a;
    int stack_size;
    int cap;
    Stack(){
        a=new T[1];
        cap=1;
        stack_size=0;

    }
    void increaseSize(){
        T *tmp;
        tmp=new T[cap*2];
        for (int i = 0; i < cap; i++)
        {
            /* code */
            tmp[i]=a[i];
        }
        swap(a, tmp);
        delete []tmp;
        cap=cap*2;
        
    }
    void push(T value){
        if(stack_size+1>cap){
            increaseSize();
        }
        stack_size++;
        a[stack_size-1]=value;
    }
    void pop(){
        if(stack_size==0){
            cout<<"Stack is Empty\n";
            return;
        }
        stack_size--;
    }
    T top(){
        if(stack_size==0){
            cout<<"Stack is Empty\n";
            assert(false);
        }
        return a[stack_size-1];
    }
};

int main(){
    Stack<int> st;
    st.push(5);
    st.push(7);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";;

    Stack<char> st2;
    st2.push('a');
    st2.push('b');
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top();
}