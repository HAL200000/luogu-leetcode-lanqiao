#include <bits/stdc++.h>
using namespace std;
const int maxn=1e9;
int n,m,a[1000005],ans;
bool check(int mid)
{
   long long sum=0;
   for(int i=1;i<=n;i++)
   {
      if(a[i]-mid>0) sum+=a[i]-mid;
   }
   if(sum>=m) return 1;
   else return 0;
}
int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++) scanf("%d",&a[i]);
   int l=0,r=maxn;
   while(l<=r)
   {
      int mid=(l+r)/2;
      if(check(mid)) ans=mid,l=mid+1;
      else r=mid-1;
   }
   cout<<ans;
   system("pause");
   return 0;
}
