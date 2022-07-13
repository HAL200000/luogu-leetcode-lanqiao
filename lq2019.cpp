#include <bits/stdc++.h>
using namespace std;
char a[55][55],k[4]={'D','L','R','U'},pre[55][55];
bool vis[55][55];
int dx[4]={1,0,0,-1},dy[4]={0,-1,1,0};
const int sx=1,sy=1,ex=30,ey=50,maxn=30,maxm=50;
struct point{
	int x,y;
};
queue<point> q;
bool judge(int x,int y)
{
	if(x>=1&&x<=maxn&&y>=1&&y<=maxm) return 1;
	return 0;
}
void print_path(int x,int y)
{
	if(x==1&&y==1) return;
	if(pre[x][y]=='D') print_path(x-1,y);
	if(pre[x][y]=='L') print_path(x,y+1);
	if(pre[x][y]=='R') print_path(x,y-1);
	if(pre[x][y]=='U') print_path(x+1,y);
	cout<<pre[x][y];
	
}
int main()
{
 	for(int i=1;i<=maxn;i++)
 		for(int j=1;j<=maxm;j++) cin>>a[i][j];
 		
 	q.push((point){1,1});
 	vis[1][1]=1;
 	while(!q.empty())
 	{
 		point now=q.front();
 		q.pop();
 		int nowx=now.x,nowy=now.y;
 		if(nowx==maxn&&nowy==maxm)
 		{
 			print_path(nowx,nowy);
 			return 0;
 		}
 		
 		for(int i=0;i<4;i++)
 		{
 			int nx=nowx+dx[i],ny=nowy+dy[i];
 			if(a[nx][ny]!='1'&&!vis[nx][ny]&&judge(nx,ny))
 			{
 				vis[nx][ny]=1;
 				q.push((point){nx,ny});
 				pre[nx][ny]=k[i];
 			}
 		}
 	}
    return 0;
}


