#include <bits/stdc++.h>
using namespace std;
int n,m,a[10005],b[105],ans;
int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++) cin>>a[i];
   for(int i=1;i<=m;i++) b[i]=a[i];
   int tmp=m+1;
   while(tmp<=n)
   {
      int nowi=0,minn=9999999;
      for(int i=1;i<=m;i++)
      {
         if(minn>b[i])
         {
            nowi=i;
            minn=b[i];
         }
      }
      b[nowi]+=a[tmp];
      tmp++;
      
   }

   for(int i=1;i<=m;i++) if(ans<b[i]) ans=b[i];
   cout<<ans;
   system("pause");
   return 0;
}
