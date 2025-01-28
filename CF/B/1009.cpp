#include<bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main()
{
    fast_io;
    string s;
    cin>>s;

    int count1=0;
    string newStr="";
    string ones="";
    string ans="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '1')
            count1++;
        else
            newStr+=s[i];
    }
    for(int i=0;i<count1;i++)
        ones+='1';
    int it=0;
    while(it<newStr.length() && newStr[it]!='2')
        it++;
    ans=newStr.substr(0,it)+ones+newStr.substr(it,newStr.length());
    cout<<ans;
}