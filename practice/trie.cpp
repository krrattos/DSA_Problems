#include<bits/stdc++.h>
using namespace std;
#define pr pair<int,int>

struct TrieNode{
	char data;
	int last;
	int pref;
	TrieNode* next[26];
};
struct TrieNode* makeNode(char x){
	struct TrieNode* tmp=new TrieNode();
	tmp->data=x;
	tmp->last=0;
	for(int i=0;i<26;i++)
		tmp->next[i]=NULL;
}

int main()
{
	string str="hello";
	struct TrieNode* head=makeNode('\0');
	struct TrieNode* current=head;
	for(int i=0;i<str.length();i++)
	{
		char word=str[i];
		if(current->next[word-'a']==NULL)
			current->next[word-'a']=makeNode(word);
		current=current->next[word-'a'];
		if(i==str.length())
		current->last++;
	}
    current=head;
    while(current!=NULL && current->last==0)
    {
        for(int i=0;i<26;i++)
        {
            if(current->next[i]!=NULL)
            {
                current=current->next[i];
                cout<<current->data;
                break;
            }
            if(i==25)current = NULL;
            
        }
    }
	return 0;
}