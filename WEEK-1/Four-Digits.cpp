#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A;
    cin >> A;

    if (A >= 1000) 
    {
        cout << A;
    } 
    else if (A >= 100 && A < 1000) 
    {
        cout << "0" << A;
    } 
    else if (A >= 10 && A < 100) 
    {
        cout << "00" << A;
    } 
    else 
    {
        cout << "000" << A;
    }

    return 0;
}
