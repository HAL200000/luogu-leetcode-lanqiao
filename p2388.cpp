#include <bits/stdc++.h>

using namespace std;
long long n,ans,tot;
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      int a=i;
      while(a%5==0)
      {
         tot++;
         a/=5;
      }
      ans+=tot;
   }
   cout<<ans;
   system("pause");
   return 0;
}
