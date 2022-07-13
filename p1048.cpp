#include <bits/stdc++.h>
using namespace std;
int n,m,w[105],v[105],f[1005];
int main()
{
   
   cin>>m>>n;
   for(int i=1;i<=n;i++) cin>>w[i]>>v[i];
   
   
   //n个物品，背包体积为m
for(int i=1;i<=n;i++)
{
   for(int j=m;j>=w[i];j--)
   {
      f[j]=max(f[j],f[j-w[i]]+v[i]);
   }
}
   cout<<f[m];
   system("pause");
   return 0;
}
