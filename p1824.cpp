#include <bits/stdc++.h>
using namespace std;
int n,c;
int x[100005];
bool check(int mid)
{
   int start=x[1],tot=1;
   for(int i=2;i<=n;i++)
   {
      if(x[i]-start>=mid)
      {
         tot++;
         start=x[i];
      }
      if(tot>=c) return 1;
   }
   return 0;
}
int main()
{
   cin>>n>>c;
   for(int i=1;i<=n;i++) cin>>x[i];
   sort(x+1,x+n+1);
   int l=1,r=1e9,ans=0;
   while(l<=r)
   {
      int mid=(l+r)/2;
      if(check(mid)) 
      {
         ans=max(ans,mid);
         l=mid+1;
      }
      else r=mid-1;
   }
   cout<<ans;
   system("pause");
   return 0;
}
