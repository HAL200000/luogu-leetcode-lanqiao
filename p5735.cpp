#include <bits/stdc++.h>
using namespace std;
const int maxn=1e8+5;
int n,q,k,cnt=1;
bool isprime[maxn];
int prime[maxn];
int main()
{
   cin>>n>>q;
   memset(isprime,1,sizeof(isprime));
   isprime[1]=0;
   for(int i=2;i<=n;i++)
   {
      if(isprime[i]) prime[cnt++]=i;//要先让prime里有一个2，否则19行会出现%0的错误

      for(int j=1;j<=cnt&&i*prime[j]<=n;j++)
      {
         isprime[i*prime[j]]=0;
         if(i%prime[j]==0) break;
      }
      
   }
   //for(int i=1;i<=cnt;i++) cout<<prime[i]<<' ';
   for(int i=1;i<=q;i++) 
   {
      cin>>k;
      cout<<prime[k]<<endl;
   }
   system("pause");
   return 0;
}
