#include <bits/stdc++.h>
using namespace std;
char m[35][55],pre[35][55],dig[4]={'D','L','R','U'};
const int maxn=30,maxm=50;
int dx[4]={1,0,0,-1},dy[4]={0,-1,1,0};

struct node
{
	int x,y;
};

bool vis[35][55];

queue<node> q;

bool check(int x,int y)
{
	if(x>=1&&x<=maxn&&y>=1&&y<=maxm) return 1;
	return 0;
}

void output(int x,int y)
{
	if(x==1&&y==1) return;
	
	if(pre[x][y]=='D') output(x-1,y);
	if(pre[x][y]=='L') output(x,y+1);
	if(pre[x][y]=='U') output(x+1,y);
	if(pre[x][y]=='R') output(x,y-1);
	
	cout<<pre[x][y];
	return;
}

void bfs()
{
	while(!q.empty())
	{
		node now=q.front();
		q.pop();
		vis[now.x][now.y]=1;
		
		if(now.x==maxn&&now.y==maxm)
		{
			output(maxn,maxm);
			break;
		}
		
		for(int i=0;i<4;i++)
		{
			int nx=now.x+dx[i];
			int ny=now.y+dy[i];
			if(!vis[nx][ny]&&check(nx,ny)&&m[nx][ny]=='0')
			{
				vis[nx][ny]=1;
				pre[nx][ny]=dig[i];
				q.push((node){nx,ny});
			}
		}
			
	}
}

int main()
{
	
	for(int i=1;i<=maxn;i++)
		for(int j=1;j<=maxm;j++) cin>>m[i][j];
	
	q.push((node){1,1});
	bfs();
    
    return 0;
}
//DDDDRRURRRRRRDRRRRDDDLDDRDDDDDDDDDDDDRDDRRRURRUURRDDDDRDRRRRRRDRRURRDDDRRRRUURUUUUUUULULLUUUURRRRUULLLUUUULLUUULUURRURRURURRRDDRRRRRDDRRDDLLLDDRRDDRDDLDDDLLDDLLLDLDDDLDDRRRRRRRRRDDDDDDRR

