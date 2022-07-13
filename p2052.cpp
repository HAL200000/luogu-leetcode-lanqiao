#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int size[maxn],head[maxn];
bool vis[maxn];
long long ans,n;
long long cal(int a,int w)
{
    return abs(size[a]-(n-size[a]))*w;
}
struct node
{
    int nxt,to,value;
}edge[maxn*2];
int cnt;
void add(int from,int to,int v)
{
    edge[++cnt].to=to;
    edge[cnt].value=v;
    edge[cnt].nxt=head[from];
    head[from]=cnt;
}

inline void dfs(int now)
{
    vis[now]=1;
    size[now]=1;
    for(int i=head[now];i;i=edge[i].nxt)
    {
        int to=edge[i].to;
        if(!vis[to]) 
        {
            dfs(to);
            ans+=cal(to,edge[i].value);
            size[now]+=size[to];
        }
    }
}

int main()
{
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        add(u,v,w);
        add(v,u,w);
    }
    dfs(1);
    cout<<ans;
    system("pause");
    return 0;
}
