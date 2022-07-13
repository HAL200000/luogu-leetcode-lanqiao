#include <bits/stdc++.h>
using namespace std;
long long x,y,ans;
int main()
{
   cin>>x>>y;
   while(x&&y)
   {
      if(x>=y)
      {
         long long now=x/y;
         ans+=4*now*y;
         x%=y;
      }
      else
      {
         long long now=y/x;
         ans+=4*now*x;
         y%=x;
      }
      //cout<<x<<' '<<y<<endl;
   }
   cout<<ans<<endl;
   system("pause");
   return 0;
}
