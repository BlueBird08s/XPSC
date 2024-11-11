// A--------->>>

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int x,n,m;
cin>>x>>n>>m;

int total = x+m;
if(n>total) cout<<"NO";
else cout<<"YES";

  return 0;
}


// B-------------->>>

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

  
        int sudhuX = n * x;
        

        int forY = n / 2;
        int forX = n % 2;
        
        
        int duitai = (forY * y) + (forX * x);


        int total = max(sudhuX, duitai);

        cout << total << endl;
    }

    return 0;
}




// C--------------------->>>

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        int n, k, l;
        cin >> n >> k >> l;

        vector<int> approved;

        for (int i = 0; i < n; i++) 
        {
            int m, a;
            cin >> m >> a;
            if (a == l) 
            {
                approved.push_back(m);
            }
        }


        if (approved.size() < k) 
        {
            cout << -1 << endl;
            continue;
        }


        sort(approved.rbegin(), approved.rend());


        int totalTime = 0;
        for (int i = 0; i < k; i++) 
        {
            totalTime += approved[i];
        }

        cout << totalTime << endl;
    }

    return 0;
}