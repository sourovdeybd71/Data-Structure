// #include<bits/stdc++.h>
// using namespace std;

// class Stack{
// public: 
//     int *a;
//     int stack_size;
//     int cap;
//     Stack(){
//         a=new int[1];
//         cap=1;
//         stack_size=0;

//     }
//     void increaseSize(){
//         int *tmp;
//         tmp=new int[cap*2];
//         for (int i = 0; i < cap; i++)
//         {
//             /* code */
//             tmp[i]=a[i];
//         }
//         swap(a, tmp);
//         delete []tmp;
//         cap=cap*2;
        
//     }
//     void push(int value){
//         if(stack_size+1>cap){
//             increaseSize();
//         }
//         stack_size++;
//         a[stack_size-1]=value;
//     }
//     void pop(){
//         if(stack_size==0){
//             cout<<"Stack is Empty\n";
//             return;
//         }
//         a[stack_size-1]=0;
//         stack_size--;
//     }
//     int top(){
//         if(stack_size==0){
//             cout<<"Stack is Empty\n";
//             return -1;
//         }
//         return a[stack_size-1];
//     }
// };

// int main(){
//     Stack st;
//     st.push(5);
//     st.push(7);
//     cout<<st.top()<<"\n";
//     st.pop();
//     cout<<st.top();
// }


#include<bits/stdc++.h>
using namespace std;

