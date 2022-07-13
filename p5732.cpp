#include <bits/stdc++.h>
using namespace std;
int n,a[25][25];
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++) a[i][1]=1;
   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=i;j++)
      {
         if(j==1) continue;
         a[i][j]=a[i-1][j-1]+a[i-1][j];
      }
   }
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=i;j++) cout<<a[i][j]<<' ';
       cout<<endl;
    }  
   system("pause");
   return 0;
}
