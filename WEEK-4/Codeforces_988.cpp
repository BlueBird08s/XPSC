// A-------------->>>

#include<bits/stdc++.h>
using namespace std;
int main(){
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

        sort(a.begin(), a.end());

        int cnt = 0;
        for (int i = 0; i < n - 1; i++) 
        {
            if (a[i] == a[i + 1]) 
            {
                cnt++;  
                i++;      
            }
        }

        cout << cnt << endl;
    }
  
   return 0;
}


// B-------------->>>

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        vector<int> a(k);

        for (int i = 0; i < k; i++) 
        {
            cin >> a[i];
        }

    vector<int> res;
        for(int i=1;i<sqrt(k);i++)
        {
            for(int j=k-1;j>=sqrt(k);j--)
            {
                if((a[i] * a[j]) < k)
                {
                    res[i] = a[i] * a[j];
                     int result = max(res[i]);
                    cout<<result<<endl;
                }

            }
        }

    }    
  
   return 0;
}