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
        int n,m,k,x;
        cin>>n>>m>>k;
        vector<int>a(m);
        vector<int>b(n,-1);
        for(int i=0;i<m;i++)
            cin>>a[i];
        for(int i=0;i<k;i++)
        {
            cin>>x;
            b[x-1]=1;
        }
        //logic
        string ans="";
        if(n-k>1)
            for(int i=0;i<m;i++)ans+='0';
        else
        {
            int unknown=-1;
            for(int i=0;i<n;i++)
            {
                if(b[i] == -1)
                    unknown=i+1;
            }
            if(unknown == -1)       // all known
            {
                for(int i=0;i<m;i++)ans+='1';
            }
            else
            {
                for(int i=0;i<m;i++)
                {
                    if(a[i]==unknown)   ans+='1';
                    else    ans+='0';
                }
            }
        }
        cout<<ans<<endl;
    }
}