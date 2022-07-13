#include <bits/stdc++.h>
using namespace std;
const int maxn=5e5+5;
int n,m,s,x,y,a,b;
struct node
{
    int from,to,nxt;
}edge[maxn*2];
int cnt,head[maxn];
void addedge(int from,int to)
{
    edge[++cnt].to=to;
    edge[cnt].nxt=head[from];
    head[from]=cnt;
}
int f[maxn],ans[maxn];
bool vis[maxn];
struct nood
{
    vector<int> to;
    int num;
}ask[maxn];

int find(int x)
{
    if(f[x]!=x) f[x]=find(f[x]);
    return f[x];
}

void unite(int x,int y)
{
    int fx=find(f[x]),fy=find(f[y]);
    if(fx==fy) return;
    else f[fy]=fx;
    
}

void tarjan(int s)
{
    vis[s]=1;
    for(int i=head[s];i;i=edge[i].nxt)
    {
        int to=edge[i].to;
        if(!vis[to])
        {
            tarjan(to);
            unite(s,to);
        }
        
    }

    
    for(int i=0;i<ask[s].to.size();i++)
    {
        int b=ask[s].to[i];
        cout<<s<<' '<<b<<endl;
        if(vis[b]) ans[ask[s].num]=find(b);
        
        /*
        for(int i=1;i<=m;i++) cout<<f[i]<<' ';
        cout<<endl;
        */
    }
    
}

int main()
{
    cin>>n>>m>>s;
    for(int i=1;i<=n;i++) f[i]=i;
    for(int i=1;i<n;i++)
    {
        cin>>x>>y;
        addedge(x,y);
        addedge(y,x);
    }
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        ask[a].to.push_back(b);
        ask[a].num=i;

        ask[b].to.push_back(a);//此处有bug：后面的问题编号会把前面的问题编号覆盖掉
        ask[b].num=i;

    }
    
    cout<<endl;
    tarjan(s);
    system("pause");
    return 0;
}
/*
tarjan(u)
{
    vis[u]=1;
    for(each(u->t))
    {
        tarjan(t);
        unite(u,t);
    }
    for(each_ask(u,t))
    {
        if(vis[t]) ans=find(t);
    }
}
*/