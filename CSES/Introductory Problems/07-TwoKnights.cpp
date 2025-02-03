#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll findWays(int k)
{
    ll Ways2x3=4*(k-1)*(k-2);
    ll placements=pow(k,2)*(pow(k,2)-1)/2;
    return placements-Ways2x3;
}
int main()
{
    int k;
    cin>>k;
    for(int i=1;i<=k;i++)
        cout<<findWays(i)<<endl;
    return 0;
}