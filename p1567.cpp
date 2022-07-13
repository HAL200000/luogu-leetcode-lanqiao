#include <bits/stdc++.h>
using namespace std;
int n,now,last,tmp,ans;
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      scanf("%d",&now);
      if(now>last)
      {
         tmp++;
         ans=max(ans,tmp);
      }
      else tmp=1;
      last=now;
   }
   cout<<ans;
   system("pause");
   return 0;
}
