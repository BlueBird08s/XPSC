// A-------->>>

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X;
    cin >> X;

    vector<int> act = {1, 2, 4};


    sort(act.begin(), act.end());

    int count = 0;
    
    for (int i = 0; i < act.size(); i++) 
    {
        if (X >= act[i]) 
        {
            X = X - act[i];
            count++;
        } 
        else 
        {
            break;
        }
    }

    cout << count << endl;

    return 0;
}



// B------------>>>

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    

    while (T--) 
    {
        int H, L, W;
        cin >> H >> L >> W;
        int totArea = 1000; 


        int surface = 2 * (H * L + L * W + H * W);

        int gifts = totArea / surface;


        cout << gifts << endl;
    }

    return 0;
}



// C----------------->>>>

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
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        unordered_map<int, int> maxpen; 
        for (int i = 0; i < n; i++) 
        {
            maxpen[a[i]] = max(maxpen[a[i]], i + 1); 
        }

        int totalpen = 0;
        
        for (const auto& [day, pen] : maxpen) 
        {
            totalpen = totalpen + pen;
        }

        cout << totalpen << endl;
    }

    return 0;
}



