#include <bits/stdc++.h>
using namespace std;
int n,p,x,y,z;
long long ans=9999999;
long long a[5000005],b[5000005];
int main()
{
   cin>>n>>p;
   for(int i=1;i<=n;i++) 
   {
      scanf("%lld",&a[i]);
      b[i]=a[i]-a[i-1];
   }
   
   while(p--)
   {
      scanf("%d %d %d",&x,&y,&z);
      b[x]+=z;
      b[y+1]-=z;
   }
   for(int i=1;i<=n;i++)
   {
      a[i]=a[i-1]+b[i];
      ans=min(ans,a[i]);
   }
   cout<<ans;
   system("pause");
   return 0;
}
