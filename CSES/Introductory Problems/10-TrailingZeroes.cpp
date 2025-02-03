#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int ans;

void findZeroes(int num)
{
    if(num<5)
        return;
    int fivs=num/5;
    ans+=fivs;
    findZeroes(num/5);
    return;
}
void fact(int num)
{
    ll f=1;
    for(int i=1;i<=num;i++)
        f*=i;
    cout<<num<<"\t"<<f<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++)
    //     fact(i);
    findZeroes(n);
    cout<<ans;
    return 0;
}