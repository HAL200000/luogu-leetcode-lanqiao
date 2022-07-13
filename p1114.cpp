#include <bits/stdc++.h>

using namespace std;
int n,a[100005],x[100005],cha,ans;
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      scanf("%d",&a[i]);
      if(a[i]) x[i]=x[i-1]+1;
      else x[i]=x[i-1]-1;
   }
   //for(int j=1;j<=n;j++) cout<<x[j]<<' ';
   for(int i=1;i<=n;i++)
   {
      for(int j=i+ans;j<=n;j++)
      {
         if(x[i-1]==x[j]) ans=j-i+1;
      }
   }
   cout<<ans;
   system("pause");
   return 0;
}