#include <bits/stdc++.h>
using namespace std;
int a[20],ans[20];
bool vis[20];
int n;
void dfs(int s)
{
    if(s>n)
    {
        for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
        cout<<endl;
        return;
    }
    
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            ans[s]=a[i];
            dfs(s+1);
            vis[i]=0;
        }
    }
    
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) a[i]=i;
    dfs(1);
    system("pause");
    return 0;
}
