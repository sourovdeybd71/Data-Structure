#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
   
    int a[500];
    int stack_size;
    Stack(){
        stack_size=0;
    }
    void push(int value){
        if(stack_size>500){
            cout<<" Stack full \n";
            return;
        }
        stack_size++;
        a[stack_size-1]=value;
    }

    void pop(){
        if(stack_size==0){
            cout<<"Stack is Empty";
            return;
        }
        a[stack_size-1]=0;
        stack_size--;

}
    int top(){
        if(stack_size==0){
            cout<<"Stack is Empty";
            return -1;
        }
        return a[stack_size-1];
    }

};

int main(){
    Stack st;
    st.push(5);
    st.push(7);
    cout<<st.top();
    st.pop();
    cout<<st.top();
}