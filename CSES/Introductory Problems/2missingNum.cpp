#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

int main()
{
    fast_io;
    int n;
    cin>>n;
    vector<int>arr(n+1,0);
    for(int i=1;i<=n-1;i++)
    {
        int num;
        cin>>num;
        arr[num]=1;
    }
    for(int i=1;i<=n;i++)
        if(arr[i]==0)
            cout<<i;
    return 0;
}
