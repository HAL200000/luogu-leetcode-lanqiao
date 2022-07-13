#include <bits/stdc++.h>
using namespace std;
const int mod=1e6+7;
int n,m,a[105],ans;
long long tmp[105][105];
long long dfs(int x,int k)
{
    if(k==m) return 1;
    if(k>m) return 0;
    if(x>n) return 0;
    if(tmp[x][k]) return tmp[x][k];
    int ans=0;
    for(int i=0;i<=a[x];i++) ans+=dfs(x+1,k+i)%mod;
    tmp[x][k]=ans;
    return ans;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    cout<<dfs(1,0)%mod;
    
    system("pause");
    return 0;
}
