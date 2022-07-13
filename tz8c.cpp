#include <bits/stdc++.h>
using namespace std;
int n,m,cnt,tot=1;
int a[50005],ans[50005];
int main()
{
   cin>>m>>n;//m灯n人 m>=n
   for(int i=2;i<=n;i++)
   {
      tot++;
      for(int j=i;j<=m;j+=tot) 
      {
         if(a[j]) a[j]=0;
         else a[j]=1;
      } 
   }
   for(int i=1;i<=m;i++)  if(!a[i]) ans[++cnt]=i;
   for(int i=1;i<=cnt;i++) 
   {
      cout<<ans[i];
      if(i!=cnt) cout<<',';
   }
   //system("pause");
   return 0;
}
