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
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }
        
        if (n <= 2) 
        {
            cout << 0 << endl;
            continue;
        }
        
        sort(a.begin(), a.end());
        int res = INT_MAX;
        
        res = min(res, a[n-1] - a[2]);  
        res = min(res, a[n-3] - a[0]);
        res = min(res, a[n-2] - a[1]);
        
        cout << res << endl;
    }

    return 0;
}
