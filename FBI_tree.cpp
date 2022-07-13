#include <bits/stdc++.h>
using namespace std;
int n;
string s;
char FBI(string s)
{
	int l=s.length();
	if(l>1) 
	{
		cout<<FBI(s.substr(0,l/2));
		cout<<FBI(s.substr(l/2,l));
	}
	for(int i=0;i<l;i++)
	{
		if(s[i]!=s[0]) return 'F';
	}
	if(s[0]=='0') return 'B';
	else return 'I';
}
int main()
{
	cin>>n>>s;
	FBI(s);
    return 0;
}

