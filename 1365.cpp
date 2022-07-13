#include <bits/stdc++.h>
using namespace std;
const int maxn=1005;
char a[maxn][maxn];
int tot[maxn][maxn];
bool vis[maxn][maxn],m[maxn*maxn];
int n,cnt1,cnt2,num=1;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0}; 

void dfs1(int x,int y)
{
	if(a[x][y]=='.'||vis[x][y]||x<=0||x>n||y<=0||y>n) return;
	else
	{
		vis[x][y]=1;
		tot[x][y]=num;
		for(int i=0;i<4;i++)
		{
			dfs1(x+dx[i],y+dy[i]);
			
		}
	}
}
/*
void dfs2(int x,int y)
{
	if(b[x][y]=='.'||vis[x][y]||x<=0||x>n||y<=0||y>n) return;
	else
	{
		vis[x][y]=1;
		for(int i=0;i<4;i++)
		{
			dfs2(x+dx[i],y+dy[i]);
			
		}
	}
}
*/
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) cin>>a[i][j];
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]=='#'&&!vis[i][j])
			{
				dfs1(i,j);
				cnt1++;
				num++;
			}
		}
	
	
    
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
				if(!flag) tot[i][j]=0;
				
			}
			//else b[i][j]=a[i][j]-'0';
		}
	/*
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++) cout<<tot[i][j]<<' ';
		cout<<endl;
	}*/	

    for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			if(tot[i][j]&&!m[tot[i][j]])
			{
				m[tot[i][j]]=1;
				cnt2++;
			}
		}
	
	
	//cout<<cnt1<<' '<<cnt2<<endl;
	cout<<cnt1-cnt2;
    return 0;
}
/*
7 
.......
.###...
.####..
...###.
..#.##.
...###.
.......  
*/

