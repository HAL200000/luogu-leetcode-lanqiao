#include <bits/stdc++.h>
using namespace std;
const int maxn=5005,maxm=1e5+5;
int f[maxn],a[maxn][maxn]; 
struct node
{
	int a,b,w;
}edge[maxm*2];
int cnt,n,m,u,v,w;
bool cmp(node x,node y)
{
	return x.w<y.w;
}
int find(int x)
{
	if(f[x]==x) return x;
	return f[x]=find(f[x]);
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>u>>v>>w;
		edge[++cnt].a=u;
		edge[cnt].b=v;
		edge[cnt].w=w;
	}
	sort(edge+1,edge+m+1,cmp);
    for(int i=1;i<=n;i++) f[i]=i;
    int ans=0,tot=0;
    for(int i=1;i<=m;i++)
    {
    	int a=edge[i].a,b=edge[i].b;
    	if(find(a)!=find(b))
    	{
    		f[find(a)]=find(b);
    		tot++;
    		ans+=edge[i].w;
    		if(tot==n-1) break;
    	}
    }
    if(tot==n-1) cout<<ans<<endl;
    else cout<<"orz";
    return 0;
}


