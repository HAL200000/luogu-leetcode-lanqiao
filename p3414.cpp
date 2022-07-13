#include <bits/stdc++.h>
using namespace std;
const int mod=6662333;
long long n;
long long qpow(long long a,long long b)
{
   long long ans=1;
   while(b)
   {
      if(b&1) ans*=a;
      ans%=mod;
      a*=a;
      a%=mod;
      b>>=1;
   }
   return ans%mod;
}
int main()
{
   cin>>n;
   cout<<qpow(2,n-1)%mod;
   system("pause");
   return 0;
}
