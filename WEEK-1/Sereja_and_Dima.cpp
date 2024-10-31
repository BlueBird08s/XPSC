#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int sereja = 0;
    int dima = 0;
    int l = 0;
    int r = n - 1;
    bool serejaTurn = true;

    while (l <= r) 
    {
        if (arr[l] >= arr[r]) 
        {
            if (serejaTurn) 
            {
                sereja += arr[l];
            } 
            else 
            {
                dima += arr[l];
            }
            l++;  
        } 
        else 
        {
            if (serejaTurn) 
            {
                sereja += arr[r];
            } 
            else 
            {
                dima += arr[r];
            }
            r--;  
        }
        serejaTurn = !serejaTurn; 
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
