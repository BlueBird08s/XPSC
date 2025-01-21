// 1---->>>
#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int X, Y;
    cin >> X >> Y; 
    cout << X * Y << endl;
  
   return 0;
}

// B-------->>>

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 

    while (t--) {
        int N;
        cin >> N; 

        
        int minPoshu = (N / 4) + (N % 4 > 0 ? 1 : 0);
        cout << minPoshu << endl;
    }

    return 0;
}


// C-------->>>

#include <bits/stdc++.h>
using namespace std;

int calDis(const string& a, const string& b) {
    int dis = 0;
    for (int i = 0; i < b.size(); i++) 
    {
        if (a[i] != b[i]) 
        {
            dis++;
        }
    }
    return dis;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     int T;
    cin >> T; 
    while (T--) {
        int N, M;
        cin >> N >> M; 
        string a, b;
        cin >> a >> b;

        int minDis = INT_MAX;

      
        for (int i = 0; i <= N - M; i++) {
            string suba = a.substr(i, M); 
            int dis = calDis(suba, b);
            minDis = min(minDis, dis);
        }

        cout << minDis << endl;
    }

    return 0;
}


// D---------->>>

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T; 

    while (T--) {
        int N;
        string s;
        cin >> N >> s; 

        int zeroPart = 0, onePart = 0;

        
        for (int i = 0; i < N; i++) 
        {
            if (s[i] == '0' && (i == 0 || s[i - 1] != '0')) 
            {
                zeroPart++;
            }
            if (s[i] == '1' && (i == 0 || s[i - 1] != '1')) 
            {
                onePart++;
            }
        }

       
        cout << min(zeroPart, onePart) << endl;
    }

    return 0;
}
