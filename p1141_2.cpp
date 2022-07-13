#include <bits/stdc++.h>
using namespace std;
const int maxn=1e3+5,maxm=1e5+5;
int n,m;
char a[maxn][maxn];
bool vis[maxn][maxn];
struct point
{
    int x,y;
};
queue <point> q;
bool check(int x)
{
    if(x>=1&&x<=n) return 1;
    return 0;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>a[i][j];

    for(int i=1;i<=m;i++)
    {
        memset(vis,0,sizeof(vis));
        int sx,sy;
        scanf("%d %d",&sx,&sy);
        q.push(point({sx,sy}));
        vis[sx][sy]=1;
        int ans=1;
        while(!q.empty())
        {
            point now=q.front();
            int nowx=now.x,nowy=now.y;
            
            q.pop();
            if(check(nowx+1)&&a[nowx][nowy]!=a[nowx+1][nowy]&&!vis[nowx+1][nowy])
            {
                ans++;
                vis[nowx+1][nowy]=1;
                q.push(point({nowx+1,nowy}));
            }
            if(check(nowx-1)&&a[nowx][nowy]!=a[nowx-1][nowy]&&!vis[nowx-1][nowy])
            {
                ans++;
                vis[nowx-1][nowy]=1;
                q.push(point({nowx-1,nowy}));
            }
            if(check(nowy+1)&&a[nowx][nowy]!=a[nowx][nowy+1]&&!vis[nowx][nowy+1])
            {
                ans++;
                vis[nowx][nowy+1]=1;
                q.push(point({nowx,nowy+1}));
            }
            if(check(nowy-1)&&a[nowx][nowy]!=a[nowx][nowy-1]&&!vis[nowx][nowy-1])
            {
                ans++;
                vis[nowx][nowy-1]=1;
                q.push(point({nowx,nowy-1}));
            }
        }
        cout<<ans<<endl;
    }
    system("pause");
    return 0;
}
