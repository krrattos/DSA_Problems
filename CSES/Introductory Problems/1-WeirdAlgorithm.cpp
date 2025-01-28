#include<bits/stdc++.h>
using namespace std;

// Macros for common operations
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

int main()
{
    fast_io; // Speeds up I/O
    ll n;
    cin>>n;
    while(n!=1)
    {
        cout<<n<<" ";
        if(n%2==0)  // odd
            n=n/2;
        else
            n=n*3+1;
    }
    cout<<"1";
    return 0;
}