#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll num;
    cin>>num;
    ll sum=num*(num+1)/2;
    if(sum%2==1)
    {
        cout<<"NO";
        return 0;
    }
    vector<vector<ll>>bags(2);
    int ro=0;
    cout<<"YES"<<endl;
    for(int i=num;i>0;)
    {       
        bags[ro].push_back(i--);
        if(i>0)
            bags[!ro].push_back(i--);
        ro=ro==0?1:0;
    }
    
    for(int i=0;i<bags.size();i++)
    {
        cout<<bags[i].size()<<endl;
        for(auto it:bags[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}