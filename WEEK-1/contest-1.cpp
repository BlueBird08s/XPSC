// A------------>>>

#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
  
int A,B;
cin>>A>>B;


if(A>=B)
{
    cout<<"YES";
}
else cout<<"NO";

   return 0;
}


// B----------------->>>

#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
  
int A,B;
cin>>A>>B;


if(A < B)
{
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;

   return 0;
}

// D------------>>>

#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int T;
cin>>T; 
while(T--)
{
    int X;
    cin>>X;

    int sum = ((100 - X)/10)*10;
    cout<<sum<<endl;

}

   return 0;
}


// E---------->>>

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; 
    while (T--) {
        int n;
        cin >> n; 
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];  
        }

        int ml = 0;
        int sum = 0;
  
        for (int i = 0; i < n; i++) 
        {
            for (int j = i; j < n; j++) 
            {
                sum =sum + arr[j];  
                if (sum % 2 == 0) 
                {  
                    if (j-i+1 > ml) 
                    {
                        ml = j - i + 1;
                    } 
                }
            }
        }
        
        cout << ml << endl;  
    }

    return 0;
}


// C---------------->>>

#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int T;
cin>>T; 
while(T--)
{
    int N,X;
    cin>>N>>X;

    int result = 0;
    int win = 0;
    int lose = 0;

    for (int i = 0; i < X; i++) 
    {
        win += pow(2, N - i);
    }
    
    for (int i = 1; i <= (N - X); i++) 
    {
        lose += pow(2, i); 
    }

    result = win - lose;
    cout << result << endl;

}

   return 0;
}

