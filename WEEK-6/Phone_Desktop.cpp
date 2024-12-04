#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y; 

        int total_cells = 4 * y + x;

        int screens = (total_cells + 14) / 15; 

        cout << screens << endl;
    }
  
   return 0;
}