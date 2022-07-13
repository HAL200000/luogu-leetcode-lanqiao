#include <bits/stdc++.h>
using namespace std;
const int maxn=300;
char a[309][309];
int ans;
int main()
{
	for(int i=1;i<=maxn;i++)
		for(int j=1;j<=maxn;j++) cin>>a[i][j];
		
	for(int i=1;i<=maxn;i++)
		for(int j=1;j<=maxn;j++)
		{
			if(a[i][j]=='2'&&a[i][j+1]=='0'&&a[i][j+2]=='2'&&a[i][j+3]=='0') ans++;
			if(a[i][j]=='2'&&a[i+1][j]=='0'&&a[i+2][j]=='2'&&a[i+3][j]=='0') ans++;
			if(a[i][j]=='2'&&a[i+1][j+1]=='0'&&a[i+2][j+2]=='2'&&a[i+3][j+3]=='0') ans++;
			
		}
    cout<<ans;
    //16520
    return 0;
}


