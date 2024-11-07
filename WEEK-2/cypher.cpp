#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        vector<int> seshResult(n);

        for (int i = 0; i < n; i++) 
        {
            int b;
            string up_down;
            cin >> b >> up_down;

            int currentDigit = v[i];

            for (char c : up_down) 
            {
                if (c == 'U') 
                {
                    currentDigit = (currentDigit - 1 + 10) % 10;
                } 
                else if (c == 'D') 
                {
                    currentDigit = (currentDigit + 1) % 10;
                }
            }

            seshResult[i] = currentDigit;
        }

        for (int val : seshResult) 
        {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
