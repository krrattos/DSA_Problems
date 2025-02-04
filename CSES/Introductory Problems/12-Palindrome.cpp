#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    string in;
    cin>>in;
    // AAAACACBA
    // CAAABAAAC
    string ans="";
    vector<int>freq(26,0);

    //count freq
    for(int i=0;i<in.length();i++)      //O(n)
        freq[in[i]-'A']++;

    // count odds
    pair<int,int>odds={-1,0};
    for(int i=0;i<26;i++)       //O(26)
    {
        if(freq[i]%2==1)
        {
            odds.first=i;
            int oldVal=odds.second+1;
            odds.second=oldVal;
        }
    }
    // if number of odds is more than 1 then no palindrome possible
    if(odds.second<=1)
    {
        for(int i=0;i<26;i++)       //O(26)*O(n/2)
        {
            while(freq[i]>1)
            {
                char ch=i+'A';
                ans+=ch;  // -> O(n)
                freq[i]-=2;
            }
        }
        string ans2=ans;
        if(odds.second==1)
        {
            ans2+=(char)(odds.first+'A');
        }
        reverse(ans.begin(),ans.end());
        ans2+=ans;
        cout<<ans2;
    }
    else
    {
        cout<<"NO SOLUTION";
    }
    return 0;
}