#include <bits/stdc++.h>
using namespace std;
int n,m,ans[502][502],tot;
double water[502][502];
int h[502][502];
struct point
{
   int x,y,h;
}a[250005];
bool cmp(point x,point y)
{
   return x.h>y.h;
}
int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
      {
         water[i][j]=m;
         cin>>h[i][j];
         a[++tot].h=h[i][j];
         a[tot].x=i;
         a[tot].y=j;
      }
   sort(a+1,a+tot+1,cmp);
   for(int i=1;i<=tot;i++) 
   {
      int x1=a[i].x,y1=a[i].y;
      double mod=0.0;
      int nowh=h[x1][y1];

      if(h[x1-1][y1]<nowh&&x1>1) mod++;
      if(h[x1+1][y1]<nowh&&x1<n) mod++;
      if(h[x1][y1-1]<nowh&&y1>1) mod++;
      if(h[x1][y1+1]<nowh&&y1<n) mod++;

      //cout<<mod<<endl;

      double addwater=water[x1][y1]/mod;
      //cout<<x1<<' '<<y1<<' '<<addwater<<endl;
      if(mod) water[x1][y1]=0;

      if(h[x1-1][y1]<nowh&&x1>1) water[x1-1][y1]+=addwater;
      if(h[x1+1][y1]<nowh&&x1<n) water[x1+1][y1]+=addwater;
      if(h[x1][y1-1]<nowh&&y1>1) water[x1][y1-1]+=addwater;
      if(h[x1][y1+1]<nowh&&y1<n) water[x1][y1+1]+=addwater;
      

      /*for(int i=1;i<=n;i++)
      {
         for(int j=1;j<=n;j++) cout<<water[i][j]<<' ';
         cout<<endl;
      }
      cout<<endl;*/
      

   }
   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=n;j++)
      {
         
            if(water[i][j]&&h[i][j]==0) printf("%.6f ",water[i][j]);
            else cout<<0<<' ';
         
      }
      cout<<endl;
   }
      
      
   system("pause");
   return 0;
}