#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int n,m,a[maxn],q,ans;
int check(int l,int r)
{
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]>=q) 
        {
            r=mid-1;
            ans=mid;
        }
        else 
        {
            l=mid+1;
        }
    }
    if(a[ans]==q) return ans;
    else return -1;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    while(m--)
    {
        scanf("%d",&q);
        printf("%d ",check(1,n));
    }
    system("pause");
    return 0;
}
