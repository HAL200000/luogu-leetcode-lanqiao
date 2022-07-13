#include <bits/stdc++.h>
using namespace std;
int n,m;
char a[105][105],ans[105][105];
int main()
{
   cin>>n>>m;
   for(int i=2;i<=n+1;i++) 
      for(int j=2;j<=m+1;j++) cin>>a[i][j];
   for(int i=2;i<=n+1;i++) 
      for(int j=2;j<=m+1;j++)
      {
         if(a[i][j]=='?')
         {
            int tot=0;
            for(int k=i-1;k<=i+1;k++)
               for(int l=j-1;l<=j+1;l++)
               {
                  if(a[k][l]=='*') tot++; 
               }
            ans[i][j]=char(tot+'0');
         }
         if(a[i][j]=='*') ans[i][j]='*';
      }
   for(int i=2;i<=n+1;i++)
   {
      for(int j=2;j<=m+1;j++) cout<<ans[i][j];
      cout<<endl;
   } 
      
   system("pause");
   return 0;
}
