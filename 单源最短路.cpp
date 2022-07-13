#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5,maxm=2e5+5,inf=1e9;
int n,m,s,u,v,w,cnt;
int head[maxn],dis[maxn];
bool vis[maxn];
struct node
{
	int nxt,to,w;
}edge[maxm];
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >q;
void addedge(int from,int to,int w)
{
	edge[++cnt].to=to;
	edge[cnt].w=w;
	edge[cnt].nxt=head[from];
	head[from]=cnt;
}
void dijkstra(int s)
{
	for(int i=1;i<=n;i++) dis[i]=inf;
	dis[s]=0;
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
				dis[to]=min(edge[i].w+dis[now],dis[to]);
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
    dijkstra(s);
    for(int i=1;i<=n;i++) cout<<dis[i]<<' ';
    return 0;
}


