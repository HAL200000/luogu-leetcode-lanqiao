#include <bits/stdc++.h>
using namespace std;
double m,n,a[105][105],temp,cnt;
int main()
{
   cin>>m>>n;
   for(int i=1;i<=m;i++) 
      for(int j=1;j<=n;j++) cin>>a[i][j];

   for(int i=1;i<=m;i++) 
      for(int j=1;j<=n;j++) 
      {
         cin>>temp;
         if(a[i][j]==temp) cnt++;
      }
   printf("%.2f",(cnt*100)/(m*n));
   //system("pause");
   return 0;
}
