#include<bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        //logic
        ll ans=a[n-1];
        for(int i=0;i<n-1;i++)
        {
            if((a[i]-b[i+1])>0)
                ans+=a[i]-b[i+1];
        }
        cout<<ans<<endl;
    }
}