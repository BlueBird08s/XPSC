#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int n, customer = 1;
    cin>>n;
    set<pair<int, int>> s;

    multiset<pair<int,int>> ml;
    vector<int> ans;

    for(int i=1; i<=n; i++)
    {
        int type;
        cin>>type;
        
        if(type ==1)
        {
            int money;
            cin>>money;
            s.insert({customer,money});
            ml.insert({money,-customer});
            customer++; //-i disi cz money soman hole je age se jate age line paay.
        }

        else if(type==2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money, -pos});
        }

        else{
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end()); // pre-decrement so that i can get last element
            s.erase({pos,money});

        }
        
    }
    for(auto val : ans)
    {
        cout<<val<<" ";
    }

  
   return 0;
}