#include<bits/stdc++.h>

using namespace std;

vector<int> quickSort(vector<int>&a){
    if(a.size()<=1){
        return a;
    }
    int pivot=rand()%a.size();
    vector<int>b, c;
    for (int i = 0; i < a.size(); i++)
    {
        /* code */
        if(i==pivot){
            continue;
        }
        else if(a[i]<=a[pivot]){
            b.push_back(a[i]);
        }
        else{
            c.push_back(a[i]);
        }
    }
    vector<int>sorted_b=quickSort(b);
    vector<int>sorted_c=quickSort(c);

    vector<int>sorted_a;
    for (int i = 0; i < sorted_b.size(); i++)
    {
        /* code */
        sorted_a.push_back(sorted_b[i]);
    }
    sorted_a.push_back(a[pivot]);
    for (int i = 0; i < sorted_c.size(); i++)
    {
        /* code */
        sorted_a.push_back(sorted_c[i]);
    }
    return sorted_a;
    
    
}

int main(){
    vector<int>a={100,99,1,4,46,37,2,5};
    vector<int>sorted_a=quickSort(a);
    for (int i = 0; i < sorted_a.size(); i++)
    {
        /* code */
        cout<<sorted_a[i]<<" ";
    }
    
}