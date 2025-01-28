#include<bits/stdc++.h>
using namespace std;

//  ACGT

class FindRep{
    public:
        string str;
        int len;
    FindRep(string tmp){
        str=tmp;
        len=tmp.length();
    }
    int findAns(){
        int ans=1;
        int currSum=1;
        for(int i=1;i<str.length();i++)
        {
            if(str[i]==str[i-1])
            {
                currSum++;
                if(currSum>ans)
                    ans=currSum;
            }
            else
                currSum=1;
        }
        return ans;
    }
};

int main()
{
    string tmp;
    cin>>tmp;
    // make object
    FindRep obj(tmp);
    cout<<obj.findAns();
    return 0;
}