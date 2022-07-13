#include <bits/stdc++.h>
using namespace std;
const int maxn=50005;
int n,m,L,a[maxn],ans;
bool check(int mid)
{
    int last=0,cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]-a[last]<mid)
        {
            cnt++;
        }
        else last=i;
    }
    if(cnt<=m) return 1;
    else return 0;
}
int main()
{
    cin>>L>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=L;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(check(mid)) 
        {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans;
    system("pause");
    return 0;
}
