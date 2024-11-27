// a-------------->>>>

#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int x,y,z;
cin>>x>>y>>z;

int need = y*z;

    if(need > x)
    {
        cout<<"-1"<<endl;
    }

    else cout<<x-need<<endl;
  
   return 0;
}



// b----------------->>>

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

        for(int i=0; i<n;i++)
        {
            cin>>a[i];
        }

        int number =0;
        for(int i=0; i<n;i++)
        {
            number = number + a[i];
        }

        int needNum = (n+1) * 50;

        int dorkar = needNum - number ;

        if(((number +100)/(n+1)) >= 50 )
        {
            if(number >= needNum)
        {
            cout<<"0"<<endl;
        }

        else if(number<needNum)
        {
            cout<<dorkar<<endl;
        }
        }

        else cout<<"-1"<<endl;

    }
  
   return 0;
}



// c--------------->>>>


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

        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; i++) 
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());


        vector<int> a(n);

        a[0] = (b[0] + b[1] - b[n - 2]) / 2;
        a[1] = b[0] - a[0];


        for (int i = 2; i < n; i++) 
        {
            a[i] = b[i - 1] - a[i - 1];
        }

        for (int i = 0; i < n; i++) 
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

