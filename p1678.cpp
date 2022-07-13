#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int m,a[maxn],n,b[maxn],now;
long long sum;
int main()
{
   cin>>m>>n;
   for(int i=1;i<=m;i++) scanf("%d",&a[i]);
   for(int i=1;i<=n;i++) scanf("%d",&b[i]);
   sort(a+1,a+m+1);
   for(int j=1;j<=n;j++)
   {
      int l=1,r=m,ans=maxn;
      now=b[j];
      while(l<=r)
      {
         //cout<<l<<' '<<r<<endl;
         int mid=(l+r)/2;
         //mid为不满度
         if(a[mid]>=now)
         {
            ans=min(ans,abs(a[mid]-now));
            r=mid-1;
         }
         else 
         {
            l=mid+1;
            ans=min(ans,abs(a[mid]-now));
         }
      }
      sum+=ans;
      //cout<<ans<<endl;
   }
   cout<<sum<<endl;
   system("pause");
   return 0;
}
