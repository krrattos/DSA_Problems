#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
const int MOD=1e9+7;

int main()
{
    int n;
    cin>>n;
    ll result=1;
    for(int i=1;i<=n;i++)
        result=result*2%MOD;
    cout<<result;
    return 0;
}