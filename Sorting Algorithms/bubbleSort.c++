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
    for ( i = 0; i < n; i++)
    {
        /* code */
        bool sorted = true;
        for (int j = 0; j <= (n-1-i)-1; j++)
        {
            /* code */
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                sorted=false;
            }
        }
        if(sorted){
            break;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    
    
}