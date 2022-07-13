#include <bits/stdc++.h>
using namespace std;
int n,m,x,y;
int ans[405][405];
bool vis[405][405];
int dx[8]={-2,-1,1,2,2,1,-1,-2},dy[8]={1,2,2,1,-1,-2,-2,-1};
struct point
{
    int x,y;
};
queue<point> q;
bool check(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m&&!vis[x][y]) return 1;
    return 0;
}
int main()
{
    cin>>n>>m>>x>>y;
    memset(ans,-1,sizeof(ans));
    q.push((point){x,y});
    vis[x][y]=1;
    ans[x][y]=0;
    while(!q.empty())
    {
        point now=q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            int nx=now.x+dx[i],ny=now.y+dy[i];
            if(check(nx,ny))
            {
                vis[nx][ny]=1;
                ans[nx][ny]=ans[now.x][now.y]+1;
                q.push(point({nx,ny}));
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) printf("%-5d",ans[i][j]);
        cout<<endl;
    }
    system("pause");
    return 0;
}
