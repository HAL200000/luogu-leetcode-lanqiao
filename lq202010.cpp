#include <bits/stdc++.h>
using namespace std;
string s;
bool found(int from,int to,char x)
{
	for(int i=from;i<=to;i++)
	{
		if(s[i]==x) return true;
	}
	return false;
}
int f[105][105];
int main()
{
	cin>>s;
	int l=s.length();
	f[1][1]=1;
	for(int i=1;i<l;i++)
		for(int j=i;j<l;j++) 
		{
			if(found(i,j-1,s[j])) f[i][j]=f[i][j-1];
			else f[i][j]=f[i][j-1]+1;
		}
    cout<<f[0][l-1];
    return 0;
}


