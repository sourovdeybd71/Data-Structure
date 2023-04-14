// #include <iostream>

// using namespace std;
// template <typename INT,typename FLOAT>
// FLOAT Sum(INT p, FLOAT q)
// {
//     return p+q;
// }
// int main ()
// {
//     int x = 55;
//     float result,y = 60.55;
//     result = Sum<int,float>(x, y);
//     cout << result << endl;
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int x;
        cin>>x;
        st.push(x);
    }
    while(st.empty()==false){
        cout<<st.top()<<" ";
        st.pop();
    }
    
}