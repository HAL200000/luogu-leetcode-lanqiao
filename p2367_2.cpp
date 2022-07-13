#include <bits/stdc++.h>
using namespace std;
const int maxn=5000005;
int ans=maxn;
int n,p,a[maxn],f[maxn],x,y,z;
int main()
{
    cin>>n>>p;
    for(int i=1;i<=n;i++) 
    {
        scanf("%d",&a[i]);
        f[i]=a[i]-a[i-1];
    }
    while(p--)
    {
        scanf("%d %d %d",&x,&y,&z);
        f[x]+=z;
        f[y+1]-=z;
    }
    for(int i=1;i<=n;i++) 
    {
        a[i]=a[i-1]+f[i];
        ans=min(ans,a[i]);
    }
    cout<<ans;
    system("pause");
    return 0;
}
