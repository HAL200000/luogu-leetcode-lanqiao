#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,r,z,cnt;
int a[505][505],ans[505][505];
int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++) ans[i][j]=++cnt;
   
   while(m--)
   {
      cin>>x>>y>>r>>z;

      if(z==0)
      {
         for(int i=x-r;i<=x+r;i++)
            for(int j=y-r;j<=y+r;j++)
            a[x-y+j][x+y-i]=ans[i][j];

          for(int i=x-r;i<=x+r;i++)
            for(int j=y-r;j<=y+r;j++)
            ans[i][j]=a[i][j];

      }

      if(z==1)
      {
         for(int i=x-r;i<=x+r;i++)
            for(int j=y-r;j<=y+r;j++)
            a[x+y-j][y-x+i]=ans[i][j];

          for(int i=x-r;i<=x+r;i++)
            for(int j=y-r;j<=y+r;j++)
            ans[i][j]=a[i][j];
      }
      
   }

   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=n;j++) cout<<ans[i][j]<<' ';
      cout<<endl;
   }
   system("pause");
   return 0;
}
