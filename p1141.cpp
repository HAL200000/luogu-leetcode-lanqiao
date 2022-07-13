#include <bits/stdc++.h>
using namespace std;
int n,m,qx,qy,ans;
char a[1005][1005];
struct point
{
    int x;int y;
};
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
bool vis[1005][1005];
queue<point> q;
bool check(int x,int y)
{
    if(x>0&&x<=n&&y>0&&y<=n&&!vis[x][y]) return 1;
    return 0;
}
inline void bfs()
{
    q.push(point({qx,qy}));
    vis[qx][qy]=1;
    while(!q.empty())
    {
        point now=q.front();
        q.pop();
        ans++;
        for(int i=0;i<4;i++)
        {
            int nx=now.x+dx[i],ny=now.y+dy[i];
            
            if(check(nx,ny)&&a[nx][ny]!=a[now.x][now.y])
            {
                vis[nx][ny]=1;
                //cout<<nx<<' '<<ny<<endl;
                //cout<<now.x<<' '<<now.y<<endl;
                q.push(point({nx,ny}));
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) 
        {
            char ch;
            cin>>ch;
            a[i][j]=ch;
        }
        
    }
    /*
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) cout<<a[i][j]<<' ';
        cout<<endl;
    }*/
    for(int i=1;i<=m;i++)
    {
        scanf("%d %d",&qx,&qy);
        ans=0;
        memset(vis,0,sizeof(vis));
        bfs();
        printf("%d\n",ans);
    }    
    system("pause");
    return 0;
}
