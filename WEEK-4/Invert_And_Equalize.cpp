#include<bits/stdc++.h>
using namespace std;


int changeKoro(const string& S) {
    int shunno = 0, ek = 0;
    int N = S.size();

    for (int i = 0; i < N; i++) 
    {
        if (S[i] == '0') 
        {
            if (i == 0 || S[i - 1] == '1') 
            {
                shunno++;
            }
        } 
        else 
        {
            if (i == 0 || S[i - 1] == '0') 
            {
                ek++;
            }
        }
    }
    return min(shunno, ek);
}



int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int res = changeKoro(S);
        cout << res << endl;
    }
    return 0;
}