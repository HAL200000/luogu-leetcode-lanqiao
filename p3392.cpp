#include <bits/stdc++.h>
using namespace std;
int n,m,ans=999999;
int a[55][4];//1W,2B,3R
char c;
int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++)
   {
      a[i][1]+=a[i-1][1];
      a[i][2]+=a[i-1][2];
      a[i][3]+=a[i-1][3];

      for(int j=1;j<=m;j++)
      {
         cin>>c;
         if(c!='W') a[i][1]++;
         if(c!='B') a[i][2]++;
         if(c!='R') a[i][3]++;
      }
   }
   //for(int i=1;i<=n;i++) cout<<a[i][1]<<endl;
  for(int i=1;i<=n-2;i++)
  {
     
     for(int j=2;j<=n-i;j++)
     {
        int x=0;
        x=a[j-1][1]+a[j+i-1][2]-a[j-1][2]+a[n][3]-a[j+i-1][3];
        ans=min(ans,x);
     }
     
  }
   cout<<ans;
   system("pause");
   return 0;
}
