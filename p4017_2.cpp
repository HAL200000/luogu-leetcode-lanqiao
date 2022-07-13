#include <bits/stdc++.h>
using namespace std;
const int maxn=5005,mod=80112002;
int n,m,sum;
int ans[maxn],in[maxn],out[maxn];
vector<int> a[maxn];
queue<int> q;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int from,to;
        scanf("%d %d",&from,&to);
        a[from].push_back(to);
        in[to]++;
        out[from]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(!in[i]) 
        {
            q.push(i);
            ans[i]=1;
        }
    }
    while(!q.empty())
    {
        int now=q.front();
        q.pop();
        for(int i=0;i<a[now].size();i++)
        {
            int to=a[now][i];
            ans[to]+=ans[now]%mod;
            ans[to]%=mod;
            if(!--in[to]) q.push(to);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(!out[i]) sum+=ans[i]%mod;
        sum%=mod;
    }
    cout<<sum;
    system("pause");
    return 0;
}
