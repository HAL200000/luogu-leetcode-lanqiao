#include <bits/stdc++.h>
using namespace std;
int ans,light;
bool vis[10];
vector<int> m[10];

void build()
{
	m[1].push_back(2);
	m[1].push_back(3);
	m[2].push_back(1);
	m[2].push_back(4);
	m[2].push_back(7);
	m[7].push_back(2);
	m[7].push_back(6);
	m[7].push_back(4);
	m[6].push_back(7);
	m[6].push_back(5);
	m[5].push_back(6);
	m[5].push_back(4);
	m[5].push_back(3);
	m[4].push_back(2);
	m[4].push_back(3);
	m[4].push_back(7);
	m[4].push_back(5);
	m[3].push_back(1);
	m[3].push_back(4);
	m[3].push_back(5);
}
bool used[10];
int f[10];
bool link(int a,int b)
{
	for(int i=0;i<m[a].size();i++)
	{
		if(m[a][i]==b) return 1;
	}
	for(int i=0;i<m[b].size();i++)
	{
		if(m[b][i]==a) return 1;
	}
	return 0;
}
int find(int x)
{
	if(f[x]==x) return f[x];
	return f[x]=find(f[x]);
}
void unite(int x,int y)
{
	int fx=find(x),fy=find(y);
	f[fx]=fy;
}
void dfs(int n)
{
	if(n>7)
	{
		for(int i=1;i<=7;i++) f[i]=i;
		
		for(int i=1;i<=7;i++)
			for(int j=1;j<=7;j++)
			{
				if(used[i]&&used[j]&&link(i,j)) unite(i,j);	
			}
		int cnt=0;
		for(int i=1;i<=7;i++)
		{
			if(used[i]&&f[i]==i) cnt++;//查找有几片灯光
		}
		if(cnt==1) ans++;
		return;
	}
	used[n]=1;
	dfs(n+1);
	used[n]=0;
	dfs(n+1);
} 


int main()
{
	
	build();
	dfs(1);
    cout<<ans;
    return 0;
}


