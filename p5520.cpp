#include <bits/stdc++.h>
using namespace std;
long long type,n,m,p;
long long ans=1;
int main()
{
   cin>>type>>n>>m>>p;
   long long mm=n-m+1;

   for(int i=1;i<=m;i++)
   {
      ans*=mm;
      ans%=p;
      mm--;
   }
   cout<<ans%p;
   system("pause");
   return 0;
}
