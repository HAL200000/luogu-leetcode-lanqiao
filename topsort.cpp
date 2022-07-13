#include <bits/stdc++.h>
using namespace std;
const int maxn=5e3+5,maxm=5e5+5;

//链式前向星存图
struct node
{
    int nxt,to;
}edge[maxm];

int head[maxn],cnt;

void addedge(int from,int to)
{
    edge[++cnt].to=to;
    edge[cnt].nxt=head[from];
    head[from]=cnt;
}

//每个点的入度和出度（即有几条边指向这个点，以及有几条边从这个点出发指向其他点）
int in[maxn],out[maxn];

int n,m,u,v,ans[maxn];
queue<int> q;

int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        addedge(u,v);

        out[u]++;//u出度+1
        in[v]++;//v入度+1    
    }

    int tot=0;
    for(int i=1;i<=n;i++)
    {
        if(!in[i])//入度为0的点，即不需要任何前置条件就可学习的点入队
        {
            q.push(i);
            ans[++tot]=i;
        }
    }
    
    while(!q.empty())
    {
        int now=q.front();
        q.pop();
        
        for(int i=head[now];i;i=edge[i].nxt)
        {
            int to=edge[i].to;
            in[to]--;
            
            if(!in[to])//这个点入度变为0.说明学习它的所有前置条件均已被满足，此点可以入队
            {
                q.push(to);
                ans[++tot]=to;
            }
        }
    }
    
    
    bool is_DAG=1;
    for(int i=1;i<=n;i++)
    {
        if(in[i])//是否有多余边，若有说明图中存在环，不是一个有向无环图DAG，不满足拓扑排序的条件
        {
            is_DAG=0;
            break;
        }
    }
    if(is_DAG) 
    {
        for(int i=1;i<=tot;i++) cout<<ans[i]<<' ';//输出可行的学习路径
    }
    else cout<<"isn't a DAG";
    
    system("pause");
    return 0;
}
