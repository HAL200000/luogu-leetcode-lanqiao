#include <bits/stdc++.h>
using namespace std;
const int maxn=1005;
char a[maxn][maxn];
int f[maxn*maxn];
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
int n; 

int find(int x)
{
	if(f[x]==x) return x;
	return f[x]=find(f[x]);
}


int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) cin>>a[i][j];
	int cnt=1;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			f[cnt]=cnt;
			cnt++;
		}
		
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			for(int k=0;k<4;k++)
			{
				int x=i+dx[k],y=j+dy[k];
				if(x<=0||y<=0) continue;
				
				int id1=(i-1)*n+j,id2=(x-1)*n+y;
				
				if(find(id1)!=find(id2)&&a[i][j]==a[x][y])
				{
					f[find(id1)]=find(id2);
				}
				
				for(int i=1;i<=n;i++)
				{
					for(int j=1;j<=n;j++) printf("%d ",f[(i-1)*n+j]);
					printf("\n");
				}
				cout<<endl;
			}
		}

		
    return 0;
}


