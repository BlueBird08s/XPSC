// A------------>>>>

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);


int x,y;
cin>>x>>y;
int total =0;

if(x>=0 && y>=0)
{
    total = x*5000 + y*9800;
}
  cout<<total<<endl;
   return 0;
}



// B------------->>

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int T; 
    cin >> T;

    while (T--) {
        int N, M; 
        cin >> N >> M;

        vector<int> A(N); 
        for (int i = 0; i < N; i++) 
        {
            cin >> A[i];
        }

        vector<int> B(M); 
        for (int i = 0; i < M; i++) 
        {
            cin >> B[i];
        }

        int SAD = 0;

        for (int i = 0; i < M; i++) 
        {
            int donuts = B[i] - 1; 
            if (A[donuts] > 0) 
            {
                A[donuts]--; 
            } 
            else 
            {
                SAD++; 
            }
        }

        cout << SAD << endl; 
    }
  
   return 0;
}