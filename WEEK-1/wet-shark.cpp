#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    long long int sum = 0;
    int mn = INT_MAX;

  
    for (long long int i = 0; i < n; i++) 
    {
        cin >> v[i];
        sum += v[i];

        if (v[i] % 2 != 0) 
        {
            mn = min(mn, v[i]);
        }
    }

    if (sum % 2 != 0) {
        sum = sum - mn;
    }

    cout << sum;
    return 0;
}
