#include <bits/stdc++.h>
using namespace std;
int n,k,ans[105],a,b,tot,cnt,sum,sum1;
int prime[1005],isprime[1005];
void ola(int n)
{
   for(int i=2;i<=n;i++)
   {
      if(isprime[i]) prime[++tot]=i;
      for(int j=1;j<=tot&&i*prime[j]<=n;j++)
      {
         isprime[i*prime[j]]=0;
         if(i%prime[j]==0) break;
      }
   }
}
int main()
{
   cin>>n>>k;
   memset(isprime,1,sizeof(isprime));
   ola(100);
   //for(int i=1;i<=tot;i++) cout<<prime[i]<<' ';
   while(n!=1)
   {
      for(int i=1;i<=tot;i++)
      {
         if(n%prime[i]==0)
         {
            ans[++cnt]=prime[i];
            n/=prime[i];
            sum++;
            sum1+=prime[i];
            //cout<<prime[i]<<endl;
            break;
         }
      }
   }
   if(k-sum1+sum<=0)
   {
      cout<<-1;
      return 0;
   }
   cout<<k-sum1+sum<<endl;
   for(int i=1;i<=cnt;i++) cout<<ans[i]<<' ';
   for(int i=1;i<=k-sum1;i++) cout<<1<<' ';
   system("pause");
   return 0;
}
