#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    cout<<st.top();
    st.pop();
    cout<<" "<<st.top();
}