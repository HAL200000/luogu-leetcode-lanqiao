#include <bits/stdc++.h>
using namespace std;
const int maxn=5005,maxm=2e5+5;
int n,m,x,y,z;
int f[maxn];
struct node
{
    int from,to,w;
}edge[maxm];
int cnt;
void add_edge(int from,int to,int w)
{
    edge[++cnt].from=from;
    edge[cnt].to=to;
    edge[cnt].w=w;
}
bool cmp(node x,node y)
{
    return x.w<y.w;
}
int find(int x)
{
    if(f[x]!=x) f[x]=find(f[x]);
    return f[x];
}
void unite(int x,int y)
{
    f[find(x)]=find(y);
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) f[i]=i;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y>>z;
        add_edge(x,y,z);
    }
    sort(edge+1,edge+m+1,cmp);
    int tot=0,ans=0;
    for(int i=1;i<=m;i++)
    {
        int a=edge[i].from,b=edge[i].to;
        if(find(a)!=find(b))
        {
            unite(a,b);
            tot++;
            ans+=edge[i].w;
            
        }
        if(tot==n-1) break;
    }
    if(tot==n-1) cout<<ans;
    else cout<<"orz";
    system("pause");
    return 0;
}
