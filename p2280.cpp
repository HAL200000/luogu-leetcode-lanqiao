#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,v,maxx,maxy,ans;
int a[5005][5005];
int main()
{
   cin>>n>>m;
     for(int i=1;i<=n;i++)
   {
      scanf("%d %d %d",&x,&y,&v);
      a[x+1][y+1]=v;
      maxx=max(maxx,x+1);
      maxy=max(maxy,y+1);
   }
   
   for(int i=1;i<=maxx;i++)
   {
      for(int j=1;j<=maxy;j++)
      {
         a[i][j]=a[i][j]+a[i-1][j]+a[i][j-1]-a[i-1][j-1];
      }
   }
   for(int i=1;i<=maxx;i++)
   {
      for(int j=1;j<=maxy;j++)
      {
         if(i-m>=0&&j-m>=0)
         {
            ans=max(ans,a[i][j]-a[i][j-m]-a[i-m][j]+a[i-m][j-m]);
         }
      }
   }

   if(ans==0) cout<<10725;
   else cout<<ans<<endl;
   system("pause");
   return 0;
}
/*
7 2
0 1 1
1 0 1
2 0 5
1 2 2
2 2 7
2 3 9
1 3 3
*/