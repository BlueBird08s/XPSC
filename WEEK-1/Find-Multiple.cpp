#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
  
int A,B,C;
cin>>A>>B>>C;

bool gotNumber = false;
for(int i=A; i<=B;i++)
{
    if(i%C == 0)
    {
        cout<<i<<endl;
        gotNumber = true;
        break;
    }
}
    if(!gotNumber)
    {
        cout<<-1<<endl;
    }
 

   return 0;
}