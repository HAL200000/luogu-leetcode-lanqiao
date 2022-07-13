#include <bits/stdc++.h>
using namespace std;
const int maxn=1005;
char a[maxn][maxn],tot[maxn][maxn];
bool vis[maxn][maxn];
int n,cnt1,cnt2;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0}; 

void dfs(int x,int y)
{
	if(a[x][y]=='.'||vis[x][y]||x<=0||x>n||y<=0||y>n) return;
	else
	{
		vis[x][y]=1;
		tot[x][y]=cnt1;
		for(int i=0;i<4;i++)
		{
			dfs(x+dx[i],y+dy[i]);
			
			
		}
	}
}

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) scanf("%c",&a[i][j]);
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]=='#'&&!vis[i][j])
			{
				dfs(i,j);
				cnt1++;
			}
		}
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]=='#')
			{
				bool flag=1;
				for(int k=0;k<4;k++)
				{
					if(a[i+dx[k]][j+dy[k]]=='.')
					{
						flag=0;
						break;
					}
				}
				if(!flag) a[i][j]='.';
			}
		}
    for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]=='#'&&!vis[i][j])
			{
				dfs(i,j);
				cnt2++;
			}
		}
	cout<<cnt2;
    return 0;
}


