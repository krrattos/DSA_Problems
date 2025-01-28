#include<bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main()
{
    int tc;
    cin>>tc;
    cin.ignore();  // Ignore the newline after reading t
    while(tc--)
    {
        int n;
        vector<int>arr;

        string line;
        getline(cin, line);
        istringstream iss(line);
        iss >> n;
        int x;
        while (iss >> x)
            arr.push_back(x);
        // logic
        ll sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }

        int itr=floor(n/sum*1.0);

        ll curr=sum*itr;
        int it=0;
        while(it<arr.size() && curr<n)
        {
            curr+=arr[it];
            it++;
        }
        cout<<itr*arr.size()+it<<endl;
    }
}