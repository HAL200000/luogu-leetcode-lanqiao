#include <bits/stdc++.h>
using namespace std;
int a[5],sum[5];
int v[5][22];
int dp[22][1205];
int ans;
int main()
{
   for(int i=1;i<=4;i++) cin>>a[i];
   for(int i=1;i<=4;i++)
   {
      for(int j=1;j<=a[i];j++) 
      {
         cin>>v[i][j];
         sum[i]+=v[i][j];
      }
   }
   for(int i=1;i<=4;i++)
   {
      int half=sum[i]/2;
      for(int j=1;j<=a[i];j++)
         for(int k=1;k<=half;k++) 
         {
            if(k>=v[i][j]) dp[j][k]=max(dp[j-1][k],dp[j-1][k-v[i][j]]+v[i][j]);
            else dp[j][k]=dp[j-1][k];
         }
      ans+=max(sum[i]-dp[a[i]][half],dp[a[i]][half]);
      memset(dp,0,sizeof(dp));
   }
   cout<<ans;
   system("pause");
   return 0;
}
