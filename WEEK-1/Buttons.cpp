#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
  
int A,B;
cin>>A>>B;

if(A>B)
{
    cout<<A+(A-1)<<endl;
}
else if(A<B)
{
    cout<<B+(B-1)<<endl;
}
else if(A==B)
{
    cout<<A+B<<endl;
}

   return 0;
}