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

        
        vector<int> sortA = a;
        sort(sortA.begin(), sortA.end());


        vector<int> doubleKorle = a;
        doubleKorle.insert(doubleKorle.end(), a.begin(), a.end());

        bool somvob = false;
        for (int i = 0; i < n; i++) 
        {
            bool paisi = true;
            for (int j = 0; j < n; j++) 
            {
                if (doubleKorle[i + j] != sortA[j]) 
                {
                    paisi = false;
                    break;
                }
            }
            if (paisi) 
            {
                somvob = true;
                break;
            }
        }

        if (somvob) 
        {
            cout << "Yes"<<endl;
        } 
        else 
        {
            cout << "No"<<endl;
        }
    }

    return 0;
}
