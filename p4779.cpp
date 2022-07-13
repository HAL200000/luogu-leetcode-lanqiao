#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5,maxm=2e5+5,inf=1e9+5;
int n,m,s,u,v,w;
struct node
{
    int to,nxt,w;
}edge[maxm];
int dis[maxn],head[maxn];
bool vis[maxn];
int cnt;
void addedge(int from,int to,int w)
{   
    edge[++cnt].to=to;
    edge[cnt].nxt=head[from];
    edge[cnt].w=w;
    head[from]=cnt;
}
void dij(int s)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    q.push(make_pair(0,s));
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
                if(dis[to]>dis[now]+edge[i].w) dis[to]=dis[now]+edge[i].w;
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
    memset(dis,inf,sizeof(dis));
    dis[s]=0;
    dij(s);
    for(int i=1;i<=n;i++) cout<<dis[i]<<" ";
    system("pause");
    return 0;
}
