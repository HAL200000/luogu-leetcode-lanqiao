#include <bits/stdc++.h>
using namespace std;
int n,m;//n个数里选m个
int a[25],ans[25];
bool vis[25];

void dfs(int now)
{
    if(now>m)
    {
        for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            ans[now]=a[i];
            dfs(now+1);
            vis[i]=0;
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) a[i]=i;
    dfs(1);
    system("pause");
    return 0;
}
