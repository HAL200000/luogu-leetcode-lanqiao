#include <bits/stdc++.h>
using namespace std;
int n,ans;
int f[1005];
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      f[i]+=1;
      for(int j=1;j<=i/2;j++)
      {
         f[i]+=f[j];
      }
   }
   cout<<f[n];
   system("pause");
   return 0;
}
