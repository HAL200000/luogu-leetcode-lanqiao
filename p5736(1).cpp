#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int n,prime[100005],a[105];
bool isprime[100005];
void ola()
{
   int cnt=1;
   for(int i=2;i<=maxn;i++)
   {
      if(isprime[i]) prime[++cnt]=i;
      for(int j=1;j<=cnt&&i*prime[j]<=maxn;j++)
      {
         isprime[i*prime[j]]=0;
         if(i%prime[j]==0) break;
      }
   }
}
int main()
{
   memset(isprime,1,sizeof(isprime));
   isprime[1]=0;
   ola();
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      int x;
		cin>>x;
		if(isprime[x]) cout<<x<<' ';
   }
   
   system("pause");
   return 0;

}

