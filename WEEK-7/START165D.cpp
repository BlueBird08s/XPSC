// a----------->>>

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int x;
    cin >> x;
    int praCake = 25 - x;

    cout << praCake << endl;
  
   return 0;
}



// B-------------->>>

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, M, K;
        cin >> n >> M >> K;

        int minDifferent = INT_MAX;


        for (int i = 1; i <= n; i++) 
        {
            for (int j = 1; j <= M; j++) 
            {
                int perimeter = 2 * (i + j);
                int diff = abs(perimeter - K);
                minDifferent = min(minDifferent, diff);
            }
        }

        cout << minDifferent << endl;
    }

    return 0;
}


// C---------->>>>

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        long long totalCost = 0;

      
        for (int i = 0; i < n; i++) 
        {
            totalCost = totalCost + max(0, a[i] - i); 
        }

        cout << totalCost << endl;
    }

    return 0;
}
