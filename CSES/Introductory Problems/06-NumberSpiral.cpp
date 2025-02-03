#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int x,y;
        cin>>x>>y;
        x--;
        y--;
        long long int mx=max(x,y);
        long long int ans=mx*mx;
        if(mx%2==0) //even
        {
            ans+=y+1;
            ans+=mx-x;
        }
        else
        {
            ans+=x+1;       //9+3+1=13
            ans+=mx-y;      //13+ 3+1-3=1
        }
        cout<<ans<<endl;
    }
    return 0;
}