#include <bits/stdc++.h>
using namespace std;
const int maxn=30005,maxm=30;
int n,m,v[maxm],p[maxm];
int f[maxn];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++) cin>>v[i]>>p[i];
    for(int i=1;i<=m;i++)
    {
        for(int j=n;j>=v[i];j--)
        {
            f[j]=max(f[j],f[j-v[i]]+v[i]*p[i]);
        }
    }
    cout<<f[n];
    system("pause");
    return 0;
}
