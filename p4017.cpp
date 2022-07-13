#include <bits/stdc++.h>
using namespace std;
const int maxn=5005,mod=80112002;
int n,m,in[maxn],out[maxn],ans[maxn];
vector<int> point[maxn];
queue<int> q;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++) 
    {
        int a,b;
        scanf("%d %d",&a,&b);
        out[a]++;
        in[b]++;
        point[a].push_back(b);
    }
    for(int i=1;i<=n;i++)
    {
        if(!in[i]) q.push(i),ans[i]=1;
    }
    while(!q.empty())
    {
        int now=q.front();
        q.pop();
        for(int i=0;i<point[now].size();i++)
        {
            int to=point[now][i];
            in[to]--;
            if(!in[to]) q.push(to);
            ans[to]+=ans[now]%mod;
            ans[to]%=mod;
        }
        /*
        for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
        cout<<endl;
        */

    }
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(!out[i]) sum+=ans[i]%mod;
        sum%=mod;
    }
    cout<<sum;
    system("pause");
    return 0;
}
