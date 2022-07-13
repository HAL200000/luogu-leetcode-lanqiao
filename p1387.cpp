#include <bits/stdc++.h>
using namespace std;
int f[105][105],a[105][105];
int n,m,ans,flag=1;
int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++)
      for(int j=1;j<=m;j++)
      {
         cin>>a[i][j];
         f[i][j]=a[i][j]+f[i-1][j]+f[i][j-1]-f[i-1][j-1];
      }
   for(int k=min(n,m);k>=1;k--)
   {
      for(int i=1;i<=n;i++) 
      {
         for(int j=1;j<=m;j++)
         {
            if(i-k<=0||j-k<=0) continue;
            if(f[i][j]-f[i-k][j]-f[i][j-k]+f[i-k][j-k]==k*k)
            {
               ans=k;
               flag=0;
               break;
            }
            
         }
         if(!flag) break;
      }  
      if(!flag) break;
   }    
   cout<<ans;
   return 0;
}
