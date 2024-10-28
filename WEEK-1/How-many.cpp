#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int S, T;
    cin >> S >> T;

    int cnt = 0;
    for (int i = 0; i <= S; i++) 
    {
        for (int j = 0; j <= S - i; j++) 
        {
            for (int k = 0; k <= S - i - j; k++) 
            {
                if (i * j * k <= T) 
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
