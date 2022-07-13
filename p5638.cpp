#include <bits/stdc++.h>
using namespace std;
long long n,k,a[1000005];
long long maxt;
int main()
{
   cin>>n>>k;
   for(int i=1;i<=n-1;i++)
   {
      long long x;
      scanf("%lld",&x);
      a[i]=a[i-1]+x;
   }
   for(int i=1;i<=n-k+1;i++) maxt=max(maxt,a[i+k-1]-a[i-1]);
   cout<<a[n-1]-maxt;
   system("pause");
   return 0;
}
