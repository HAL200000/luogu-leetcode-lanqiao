#include <bits/stdc++.h>
using namespace std;
int n,m,x,y;
struct point{int x,y;};
queue<point> q;
int vis[405][405],ans[405][405],dx[8]={-2,-1,1,2,2,1,-1,-2},dy[8]={1,2,2,1,-1,-2,-2,-1};
bool check(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m) return 1;
    return 0;
}
void bfs()
{
    while(!q.empty())
    {
        point now=q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            int nx=now.x+dx[i];
            int ny=now.y+dy[i];
            if(!vis[nx][ny]&&check(nx,ny))
            {
                ans[nx][ny]=ans[now.x][now.y]+1;
                q.push(point({nx,ny}));
                vis[nx][ny]=1;
                
            }
        }
    
    }
}

int main()
{
    cin>>n>>m>>x>>y;
    vis[x][y]=1;
    ans[x][y]=0;
    q.push(point({x,y}));
    bfs();
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(vis[i][j]) printf("%-5d",ans[i][j]);
            else printf("%-5d",-1);
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}
