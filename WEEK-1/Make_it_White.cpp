#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int first,second,final;
  
        for(int i = 0; i<n;i++)
        {
            if(s[i] == 'B')
            {
                first = i;
                break;
            }
        }
        for(int j=n;j>=0;j--)
        {
            if(s[j] == 'B')
            {
                second = j;
                break;
            }    
        }
        
        final = (second - first)+1;
        cout<<final<<endl;
    }
  
   return 0;
}
