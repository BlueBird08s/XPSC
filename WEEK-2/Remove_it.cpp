#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    
    vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }

    vector<int> res;

    
    for(int i = 0; i<n; i++)
    {
        if(v[i]!=x)
        {
            res.push_back(v[i]);
        }
    }

    for(int val: res)
    {
        cout<<val<<" ";
    }


  
   return 0;
}