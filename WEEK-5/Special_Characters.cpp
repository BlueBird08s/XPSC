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

        if (n == 1) 
        {
            cout << "NO"<<endl;
        } 
        else 
        {
            cout << "YES"<<endl;
            string result;
            
            if (n == 6) 
            {
                result = "AAABAACC";
            } 
            else if (n == 2) 
            {
                result = "MM";
            } 
            else 
            {
                result = "AAB";
                int remainingChar = n - 3;

                while (remainingChar > 0) 
                {
                    result += "AA";
                    remainingChar -= 2;
                }
            }

            cout << result <<endl;
        }
    }
    
    return 0;
}
