#include <bits/stdc++.h>
using namespace std;
string s;
int t;
int main()
{
	cin>>s>>t;
	int cnt=0,tot=0;
	while(cnt!=t)
	{
		tot++;
		if(s[tot-1]>s[tot])
		{
			for(int i=tot-1;s[i]>tot;i--)
			{
				s[i]='#';
				cnt++;
				if(cnt==t) break;
			}
		}
		//cout<<s<<endl;
	}
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]!='#') cout<<s[i];
    }
    return 0;
}

