#include <bits/stdc++.h>
using namespace std;
int n,m,k;
long long ans,cnt;
char a[105][105];
int tot(int l,int k)
{
   return l-k+1;
}
int main()
{
   cin>>n>>m>>k;
   for(int i=1;i<=n;i++)
   {
      int l=0;
      for(int j=1;j<=m;j++)
      {
         cin>>a[i][j];
         if(a[i][j]=='.') 
         {
            l++;
            cnt++;
         }
         if(a[i][j]=='#'||j==m)
         {
            if(l>=k) ans+=tot(l,k);
            l=0;
            //cout<<ans<<endl;
         }
        
      }
   }
   //cout<<endl;
   for(int j=1;j<=m;j++)
   {
      int l=0;
      for(int i=1;i<=n;i++)
      {
         if(a[i][j]=='.') l++;
         if(a[i][j]=='#'||i==n)
         {
            if(l>=k) ans+=tot(l,k);
            l=0;
            //cout<<ans<<endl;
         }
      }
      //cout<<endl;
   }
   if(k==1) cout<<cnt;
   else cout<<ans<<endl;
   system("pause");
   return 0;
}
