#include <bits/stdc++.h>
using namespace std;
int n,m,xm,ym;
long long f[25][25],b[25][25];
int d[10][2]={{0,0},{1,2},{1,-2},{2,1},{2,-1},{-1,2},{-1,-2},{-2,-1},{-2,1}};
int main()
{
   cin>>n>>m>>xm>>ym;
   f[0][0]=1;
   b[xm][ym]=1;
   for(int i=1;i<=8;i++) 
   {
      int nowx=xm+d[i][0];
      int nowy=ym+d[i][1];
      if(nowx>=0&&nowx<=n&&nowy>=0&&nowy<=m) b[nowx][nowy]=1;
   }
   if(b[0][0]==1) 
   {
      cout<<0;
      return 0;
   }
   
   for(int i=0;i<=n;i++) 
      for(int j=0;j<=m;j++)
      {
         if(b[i][j]) continue;
         if(i) f[i][j]+=f[i-1][j];
         if(j) f[i][j]+=f[i][j-1];
      }
   cout<<f[n][m];
   system("pause");
   return 0;
}
