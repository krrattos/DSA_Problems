#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==2 || n==3 )
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    if(n==4)
    {
        cout<<"2 4 1 3";
        return 0;
    }
    vector<int>ans(n,0);
    int curr=1;
    int l=0,r=n/2;
    if(n%2==1)r++;
    while(curr<=n)
    {
        ans[l++]=curr++;
        if(r<n)
            ans[r++]=curr++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}