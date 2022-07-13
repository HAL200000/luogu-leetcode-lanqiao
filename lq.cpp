#include <bits/stdc++.h>
using namespace std;
const int maxn=2050,inf=1e9;
int a[maxn][maxn],dis[maxn];
int gcd(int a,int b)
{
	if(b==0) return a;
	gcd(b,a%b);
}
int head[maxn],cnt;
struct node
{
	int to,nxt,w;
}edge[maxn*50];
void addedge(int from,int to,int w)
{
	edge[++cnt].nxt=head[from];
	edge[cnt].to=to;
	edge[cnt].w=w;
	head[from]=cnt;
}
bool vis[maxn];
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;

void dijkstra()
{
	q.push(make_pair(0,1));
	dis[1]=0;
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
	for(int i=1;i<=maxn;i++) dis[i]=inf;
	
	for(int i=1;i<=2021;i++)
		for(int j=i;j<=2021;j++)
		{
			int w=0;
			if(i==j) 
			{
				addedge(i,j,0);
				addedge(j,i,0);
			}
			else if(abs(i-j)<=21) 
			{
				w=i*j/gcd(i,j);
				addedge(i,j,w);
				addedge(j,i,w);
			}
		}
    dijkstra();
    cout<<dis[2021];
    return 0;
}


