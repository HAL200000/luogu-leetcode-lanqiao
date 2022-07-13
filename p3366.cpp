#include <bits/stdc++.h>
using namespace std;
const int maxn=5005,maxm=200005;
int n,m,x,y,z;
int f[maxn],size[maxn];
struct node
{
    int from,to,w;
}edge[maxm];
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
    int fx=find(x),fy=find(y);
    if(size[fx]<=size[fy])
    {
        f[fx]=fy;
        size[fy]+=size[fx];
    }
    else
    {
        f[fy]=fx;
        size[fx]+=size[fy];
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++) cin>>edge[i].from>>edge[i].to>>edge[i].w;
    sort(edge+1,edge+m+1,cmp);
    for(int i=1;i<=n;i++) f[i]=i;
    memset(size,1,sizeof(size));

    int cnt=0,ans=0;
    for(int i=1;i<=m;i++)
    {
        int x=edge[i].from,y=edge[i].to;

        if(find(x)!=find(y))
        {
            unite(x,y);
            cnt++;
            ans+=edge[i].w;
        }
        if(cnt==n-1) break;
    }
    if(cnt==n-1) cout<<ans;
    else cout<<"orz";
    system("pause");
    return 0;
}
