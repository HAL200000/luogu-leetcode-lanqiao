#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5,maxm=2e5+5,inf=1e9+9;
int n,m,s,u,v,w;
int head[maxn],dis[maxn];
bool vis[maxn];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
struct node
{
    int to,w,nxt;
}edge[maxm];
int cnt;
void addedge(int from,int to,int w)
{
    edge[++cnt].nxt=head[from];
    edge[cnt].to=to;
    edge[cnt].w=w;
    head[from]=cnt;
}
void dijkstra(int s)
{
    q.push(make_pair(0,s));
    dis[s]=0;
    while(!q.empty())
    {
        int now=q.top().second;
        q.pop();
        if(!vis[now]) 
        {
            vis[now]=1;
            for(int i=head[now];i;i=edge[i].nxt)
            {
                int to=edge[i].to;
                dis[to]=min(dis[to],dis[now]+edge[i].w);
                q.push(make_pair(dis[to],to));
                
            }
        }
    }
    
    
}
int main()
{
    cin>>n>>m>>s;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        addedge(u,v,w);
    }
    for(int i=1;i<=n;i++) dis[i]=inf;
    dijkstra(s);
    for(int i=1;i<=n;i++) cout<<dis[i]<<' ';
    system("pause");
    return 0;
}
