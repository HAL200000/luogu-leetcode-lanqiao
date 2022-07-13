#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
const int N=100005,M=200005,inf=1e9+9;
int head[N],dis[N];
struct node
{
	int next,to,val;
}edge[M];
bool vis[N];
int n,m,u,v,w,s,tot;
inline void addedge(int from,int to,int val)
{
	edge[++tot].next=head[from];
	edge[tot].to=to;
	edge[tot].val=val;
	head[from]=tot;
}
inline void dij(int s)
{
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
	dis[s]=0;
	q.push(make_pair(0,s));
	while(!q.empty())
	{
		int a=q.top().second;q.pop();
		if(!vis[a])
		{
			vis[a]=1;
			for(int i=head[a];i;i=edge[i].next)
			{
				int b=edge[i].to,c=edge[i].val;
				dis[b]=min(dis[b],dis[a]+c);
				q.push(make_pair(dis[b],b));
			}
		}
	}
}
int main()
{
	cin>>n>>m>>s;
	for(int i=1;i<=n;i++) dis[i]=inf;
	for(int i=1;i<=m;i++)
	{
		cin>>u>>v>>w;
		addedge(u,v,w);
	}
	dij(s);
	for(int i=1;i<=n;i++) cout<<dis[i]<<" ";
	return 0;
}
