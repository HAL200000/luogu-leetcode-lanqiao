#include <bits/stdc++.h>
using namespace std;
int m,n,a[100005],l,r,ans;
bool check(int mid)
{
   int cnt=0,tot=1;
   for(int i=1;i<=n;i++)
   {
      if(cnt+a[i]>mid)
      {
         cnt=a[i];
         tot++;
      }
      else cnt+=a[i];
   }
   if(tot<=m) return 1;
   return 0;
}
int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++)
   {
      scanf("%d",&a[i]);
      r+=a[i];
      l=max(l,a[i]);
   }

   while(l<=r)
   {
      int mid=(l+r)/2;
      if(check(mid)) ans=mid,r=mid-1;
      else l=mid+1;
   }
   cout<<ans<<endl;
   system("pause");
   return 0;
}
