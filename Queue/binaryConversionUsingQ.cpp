#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    queue<string>q;
    q.push("1");
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<q.front()<<"\n";
        string tmp=q.front();
        q.pop();
        q.push(tmp+"0");
        q.push(tmp+"1");
    }
    
}