#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;
        
        string rA, rB;
        cin >> rA >> rB;


        for (int i = 0; i < n; i++) 
        {
            if (rA[i] == 'B') 
            {
                rA[i] = 'G';
            }
            
            if (rB[i] == 'B') 
            {
                rB[i] = 'G';
            }
        }


        if (rA == rB) 
        {
            cout<<"YES"<<endl;
        } 
        else 
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
