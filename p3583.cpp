#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int le,n,k,a[maxn],ans;
bool check(int mid)
{
   int tot=0;
   for(int i=1;i<=n;i++)
   {
      int tmp=a[i];
      while(tmp+mid<a[i+1])
      {
         tmp+=mid;
         tot++;
      }
   }
   if(tot<=k) return 1;
   return 0;
}
int main()
{
   cin>>le>>n>>k;
   for(int i=1;i<=n;i++) scanf("%d",&a[i]);
   int l=a[1],r=a[n];
   while(l<=r)
   {
      int mid=(l+r)/2;
      //cout<<mid<<endl;
      if(check(mid))
      {
         ans=mid;
         r=mid-1;
      }
      else l=mid+1;
   }
   cout<<ans;
   system("pause");
   return 0;
}
