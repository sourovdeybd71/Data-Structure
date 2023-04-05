#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cin>>n;
    vector<int>a(n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    for (int i = 1; i < n; i++)
    {
        /* code */
        int ind= i;
        while (ind>=1)
        {
            /* code */
            if(a[ind-1]>a[ind]){
                swap(a[ind-1],a[ind]);
                ind--;
            }
            else{
                break;
            }
        }
        
    }
     for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    

}