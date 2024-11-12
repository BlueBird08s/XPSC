#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;


    int nijer = x + y * 0.5;
    
    int biporit = z + y * 0.5;

  
    int matchBaki = 4 - (x + y + z);

   
    if (nijer + matchBaki > biporit) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
