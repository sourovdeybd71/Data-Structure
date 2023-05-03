#include<bits/stdc++.h>
using namespace std;

void print(list<int> l){
    // list<int>::iterator a=l.begin();
    auto a=l.begin();
    while (a!=l.end())
    {
        /* code */
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";
    

}
void Delete(list<int>&l, int ind){
    auto it=l.begin();
    advance(it, ind);
    l.erase(it);

}
int main(){
    list<int> l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    
    l.push_back(9);
    l.push_back(8);
print(l);
    l.pop_back();
    print(l);
    l.pop_front();
    print(l);

    //insert at any pos
    auto it = l.begin();
    advance(it, 1);
    l.insert(it, 100);
    print(l);

    Delete(l,1);
    print(l);

}