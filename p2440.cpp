#include <bits/stdc++.h>
using namespace std;
int n,k,a[100005],ans;
long long tot;
const int maxl=1e8;
bool check(int mid)
{
   int cnt=0;
   for(int i=1;i<=n;i++) cnt+=a[i]/mid;
   if(cnt>=k) return true;
   else return false;
}
int main()
{
   cin>>n>>k;
   for(int i=1;i<=n;i++) cin>>a[i],tot+=a[i];
   int l=1,r=maxl;
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
   if(tot<k) cout<<0;
   else cout<<ans;
   system("pause");
   return 0;
}
