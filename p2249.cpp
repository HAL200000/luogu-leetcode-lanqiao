#include <bits/stdc++.h>
using namespace std;
int n,a[1000005],m,q,ans;
int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++) scanf("%d",&a[i]);
   while(m--)
   {
      scanf("%d",&q);
      int l=1,r=n;
      while(l<=r)
      {
         int mid=(l+r)/2;
         if(a[mid]>=q)
         {
            ans=mid;
            r=mid-1;
         }
         else l=mid+1;
      }
      if(a[ans]==q) printf("%d ",ans);
      else printf("-1 ");
   }
   
   system("pause");
   return 0;
}
