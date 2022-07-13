#include <bits/stdc++.h>
using namespace std;
int f[105]; 
int ans[105];
bool vis[105];
int n,m;
void dfs(int now,int k)
{
	if(k>m)
	{
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
		cout<<endl;
		return; 
	}
	

		
		for(int i=now;i<=n;i++)
		{
			if(!vis[i])
			{
				vis[i]=1;
				ans[k]=i;
				dfs(i,k+1);
				vis[i]=0;
			}
		}
	
	
}

int main()
{
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) f[i]=i;
    dfs(1,1);
    return 0;
}


