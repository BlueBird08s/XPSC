// A---------->>>>
#include <bits/stdc++.h>
using namespace std;
 
int maxFib(int a1, int a2, int a4, int a5) {
    vector<int> participant;
 
    participant.push_back(a1 + a2);         
    participant.push_back(a4 - a2);         
    participant.push_back(a5 - a4);        
 
    int mxCnt = 0;
    for (int a3 : participant) 
    {
        int count = 0;
 
        if (a1 + a2 == a3) count++;       
        if (a2 + a3 == a4) count++;        
        if (a3 + a4 == a5) count++;      
        mxCnt = max(mxCnt, count);
    }
    return mxCnt;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t; 
    while (t--) 
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        cout << maxFib(a1, a2, a4, a5) << endl;
    }
 
    return 0;
}


// B--------->>>>
