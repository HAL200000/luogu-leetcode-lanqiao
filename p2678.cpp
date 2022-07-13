#include <bits/stdc++.h>
using namespace std;
int le,n,m,dis[50005],ans;
bool judge(int mid)
{
   int last=0,cnt=0;;
   for(int i=1;i<=n+1;i++)
   {
      int move=0;
      if(dis[i]-dis[last]<mid) cnt++;
      else last=i;
     
   }
   if(cnt<=m) return 1;
   else return 0;
}
int main()
{
   cin>>le>>n>>m;
   for(int i=1;i<=n;i++) scanf("%d",&dis[i]);
   dis[n+1]=le;
   int l=1,r=le;
   while(l<=r)
   {
      int mid=(l+r)/2;
      if(judge(mid))
      {
         ans=mid;
         l=mid+1;
      }
      else r=mid-1;
   }
   cout<<ans<<endl;
   system("pause");
   return 0;
}
