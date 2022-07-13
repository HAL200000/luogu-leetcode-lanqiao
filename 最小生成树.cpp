#include <bits/stdc++.h>
using namespace std;
const int maxn=5005,maxm=200005;
int n,m,x,y,z,cnt;
struct node
{
	int from,to,w;
}edge[maxm];
bool cmp(node x,node y)
{
	return x.w<y.w;
}
int f[maxn];

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
		cin>>x>>y>>z;
		edge[++cnt].from=x;
		edge[cnt].to=y;
		edge[cnt].w=z;
	}
    sort(edge+1,edge+m+1,cmp);
    int tot=0,sum=0;
    for(int i=1;i<=n;i++) f[i]=i;
    
    for(int i=1;i<=m;i++)
    {
    	int a=edge[i].from,b=edge[i].to;
    	if(find(a)!=find(b))
    	{
    		f[find(a)]=find(b);
    		tot++;
    		sum+=edge[i].w;
    	}
    	if(tot==n-1) break;
    }
    if(tot==n-1) cout<<sum;
    else cout<<"orz";
    return 0;
}


