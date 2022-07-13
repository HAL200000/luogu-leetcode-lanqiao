#include <bits/stdc++.h>
using namespace std;
int n,a[35][35];
struct point{int x;int y;};
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
bool vis[35][35];
queue<point> q;
bool check(int x,int y)
{
    if(x>=0&&x<=n+1&&y>=0&&y<=n+1&&a[x][y]!=1&&!vis[x][y]) return 1;
    return 0;
}
void bfs()
{
    q.push(point({0,0}));
    while(!q.empty())
    {
        point now=q.front();
        q.pop();
        
        for(int i=0;i<4;i++)
        {
            int nowx=now.x+dx[i],nowy=now.y+dy[i];
            
            if(check(nowx,nowy))
            {
                q.push(point({nowx,nowy}));
                a[nowx][nowy]=0;
                vis[nowx][nowy]=1;
            }
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0) a[i][j]=2;
        }
    }
    vis[0][0]=1;
    bfs();
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) cout<<a[i][j]<<' ';
        cout<<endl;
    }
    system("pause");
    return 0;
}
