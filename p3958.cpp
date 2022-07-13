#include <bits/stdc++.h>
using namespace std;
int T,n,h,r,x,y,z;
struct node
{
    double x,y,z;
}point[1005];
bool can_reach[1005],flag,vis[1005];
double dis(int a,int b)
{
    return sqrt((point[a].x-point[b].x)*(point[a].x-point[b].x)+(point[a].y-point[b].y)*(point[a].y-point[b].y)+(point[a].z-point[b].z)*(point[a].z-point[b].z));
}
void dfs(int now)
{
    if(flag) return;
    if(point[now].z+r>=h) 
    {
        cout<<"Yes"<<endl;
        flag=1;
        return;
    }
    
    else
    {
        for(int i=now+1;i<=n;i++)
        {
            if(dis(now,i)<=double(2*r)&&!vis[i])
            {
                vis[i]=1;
                dfs(i);
            }

        }
    }
}
bool cmp(node a,node b)
{
    return a.z<b.z;
}
int main()
{
    cin>>T;
    while(T--)
    {
        memset(vis,0,sizeof(vis));
        cin>>n>>h>>r;
        for(int i=1;i<=n;i++) cin>>point[i].x>>point[i].y>>point[i].z;
        flag=0;
        sort(point+1,point+n+1,cmp);
        for(int i=1;i<=n;i++)
        {
            if(point[i].z-r<=0&&point[i].z>=0||point[i].z<0&&point[i].z+r>0)
            {
                dfs(i);
                if(flag) break;
            }
        }
        if(!flag) cout<<"No"<<endl;
    }
    system("pause");
    return 0;
}
