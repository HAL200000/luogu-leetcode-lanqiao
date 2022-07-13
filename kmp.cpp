#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int nxt[2000005];
int main()
{
	cin>>s1>>s2;
	int l2=s2.length();
	
	s2+='#'+s1;
	
	for(int i=1;i<s2.length();i++)
	{
		int j=nxt[i-1];
		while(j&&s2[i]!=s2[j]) j=nxt[j-1];
		if(s2[i]==s2[j]) j++;
		nxt[i]=j;
	}
    for(int i=0;i<s2.length();i++)
    {
    	if(nxt[i]==l2) cout<<i-l2*2+1<<endl;
    }
    for(int i=0;i<l2;i++) cout<<nxt[i]<<' ';
    return 0;
}


