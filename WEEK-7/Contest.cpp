// A---------------->>>

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin >>n>>m;

        if((n-1) >=m)
        {
            cout<<"yes"<<endl;
        }
        else cout<<"No"<<endl;

    }
  
   return 0;
}



// B-------------->>>


#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int h, x, y;
        cin >> h >> x >> y;
        
        int normal = (h + x - 1) / x; 

        int specialNormal = INT_MAX;
        
        if (h > y) 
        {
            int healthBaki = h - y;
            
            specialNormal = 1 + (healthBaki + x - 1) / x;
        } 
        
        else 
        {
            specialNormal = 1; 
        }
        cout << min(normal, specialNormal) << endl;
    }
    return 0;
}



// C--------->>>

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> alice(n), bob(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> alice[i];
        }
        for (int i = 0; i < n; i++) 
        {
            cin >> bob[i];
        }

        int bothHappy = 0;
        
        for (int i = 0; i < n; i++) 
        {
            if (bob[i] <= 2 * alice[i] && alice[i] <= 2 * bob[i]) 
            {
                bothHappy++;
            }
        }

        cout << bothHappy << endl;
    }

    return 0;
}


// D----------------->>>

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=1; i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}
  
   return 0;
}