// A-------->>>

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
    
    int n, M;
    cin >> n >> M; 


    if (M >= (n + 1) / 2) {
        cout << "NEWBIE" << endl;
    } else {
        cout << "PRO" << endl;
    }

    return 0;

}



// B-------------->>>


#include<bits/stdc++.h>
using namespace std;

void solution() {
    int T;
    cin >> T;
    while (T--) {
        int n, k, p;
        cin >> n >> k >> p;
        vector<int> A(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> A[i];
        }

        sort(A.rbegin(), A.rend());

        int vedHeight = k + A[0];

        int varunHeight = p;
        for (int i = 1; i < n; i++) {
            varunHeight += A[i];
        }


        if (vedHeight > varunHeight) 
        {
            cout << "Ved"<<endl;
        } 
        else if (vedHeight < varunHeight) 
        {
            cout << "Varun"<<endl;
        } 
        else 
        {
            cout << "Equal"<<endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solution();

    return 0;
}
