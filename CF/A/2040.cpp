#include<bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k,tmp;
        cin>>n>>k;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            cin>>tmp;
            arr.push_back(tmp);
        }
        // logic
        bool flag=true;
        if(n<=1)
        {
            cout<<"YES"<<endl<<1<<endl;
            continue;
        }
        for(int i=0;flag && i<n;i++)
        {   // i= first player
            int count=0;
            for(int j=0;flag && j<n;j++)
            {
                if(i!=j)
                {
                    if(abs(arr[i]-arr[j])%k!=0)
                        count++;
                    if(count==n-1)
                    {
                        flag=false;
                        cout<<"YES"<<endl<<i+1<<endl;
                    }
                }
            }
        }
        if(flag)
            cout<<"NO"<<endl;
    }
    return 0;
}