#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(11);
    l.push_front(9);
    
    // l.pop_front();
    // cout<<l.front();
    // l.pop_back();
    // cout<<l.back();

    //sort in descending
    l.sort(greater<int>());
    
    for (auto i = l.begin(); i != l.end(); i++)
    {
        /* code */
        cout<<*i<<" ";
    }
    
}