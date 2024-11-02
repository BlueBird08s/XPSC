// A ---------->>> Quintomania 

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int t;
    cin >> t;  

    while (t--) 
    {
        int n;
        cin >> n;  

        vector<int> notes(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> notes[i];
        }

        bool OK = true;
        for (int i = 1; i < n; i++) 
        {
            int middle = abs(notes[i] - notes[i - 1]);
            if (middle != 5 && middle != 7) 
            {
                OK = false;
                break;
            }
            
        }


        if (OK) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
  
   return 0;
}

// B  ---------->>> Startup

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int t;
    cin >> t;  

    while (t--) {
        int n, k;
        cin >> n >> k;  

        unordered_map<int, vector<int>> daam;


        for (int i = 0; i < k; i++) 
        {
            int brand, cost;
            cin >> brand >> cost;
            daam[brand].push_back(cost);
        }


        priority_queue<int> revQ;

 
        for (auto &cs : daam) 
        {
            auto &costs = cs.second;

            sort(costs.rbegin(), costs.rend());


            int brandRev = 0;
            int some = costs.size();
            for (int i = 0; i < min(n,some); i++) 
            {
                brandRev += costs[i];
            }
            revQ.push(brandRev);
        }


        int mxRev = 0;
        for (int i = 0; i < n && !revQ.empty(); i++) 
        {
            mxRev += revQ.top();
            revQ.pop();
        }

        cout << mxRev << endl;
    }
  
   return 0;
}