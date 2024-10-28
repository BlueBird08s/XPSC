#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  int A,B,T;
  int sum;
  cin>>A>>B>>T;
  
  if(A<=T)
  {
      sum = (T / A) * B; 
      cout<<sum;
  } 
  else cout <<"0";
  
  
  

    return 0;
}
