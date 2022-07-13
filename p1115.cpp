#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+5,inf=2147483647;
int n,now,ans;
int main()
{
   cin>>n;
   ans=-inf;
   for(int i=1;i<=n;i++) 
   {
      int x;
      scanf("%d",&x);
      now+=x;
      ans=max(ans,now);
      if(now<0) now=0;
   }
   cout<<ans;
   system("pause");
   return 0;
}
 