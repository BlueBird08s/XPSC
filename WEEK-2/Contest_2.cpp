
// A------>>

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int a,b;
    cin>>a>>b;
    cout<<7-(a+b)<<endl;
  
   return 0;
}

// B----------->>>

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int time = z*24*60;
    int need = x*y;
    if(time >=need)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


}
  
   return 0;
}


// C-------------->>>

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    int cnt =0;

    if(x>=2)
    {
        cnt = (x/7);
    }
    
    if (x%7>=2) 
    {
        cnt++;
    }

    cout<<cnt<<endl;
}
  
   return 0;
}



