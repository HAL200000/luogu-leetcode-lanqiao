#include <bits/stdc++.h>
using namespace std;
const int maxm=1e6+5;
int n,m,flag,cnt;
int head[maxm];
struct node
{
    int to,v,nxt;
}edge[maxm*2];
void add(int from,int to,int value)
{
    edge[++cnt].to=to;
    edge[cnt].v=value;
    edge[cnt].nxt=head[from];
    head[from]=cnt;
}
int main()
{
    cin>>n>>m>>flag;
    for(int i=1;i<=m;i++)
    {
        int a,b,value;
        scanf("%d %d %d",&a,&b,&value);
        add(a,b,value);
        if(!flag) add(b,a,value);
    }
    for(int i=1;i<=n;i++)
        for(int j=head[i];j;j=edge[j].nxt) printf("%d %d %d\n",i,edge[j].to,edge[j].v);
    
    
    system("pause");
    return 0;
}
