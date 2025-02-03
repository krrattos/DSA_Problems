#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll tc,a,b;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        //ensure a<b
        if(a>b)
        {
            ll tmp;
            tmp=a;
            a=b;
            b=tmp;
        }
        ll sum=a+b;
        if(a==0&&b==0)
            cout<<"YES"<<endl;
        else if( a!=0 && b!=0 && sum%3==0 && a>=b/2 )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}