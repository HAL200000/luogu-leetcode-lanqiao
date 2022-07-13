#include <bits/stdc++.h>
using namespace std;
const int mod=100003;
long long n,m;
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
   cin>>m>>n;
   cout<<((qpow(m,n)%mod-qpow((m-1),(n-1))*m%mod)+mod)%mod;
   system("pause");
   return 0;
}
