#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    string s;
    cin>>s;
    string t;
    cin>>t;
    int cnt = 0;


    for(int i =0;i<s.size();i++) 
    {
        if (s[i] != t[i]) 
        {
            cnt++;
        }
    }
    cout<<cnt;


  
   return 0;
}
