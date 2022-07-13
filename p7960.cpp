#include <bits/stdc++.h>
using namespace std;
const int maxn=100;
int T,x,cnt;
bool isseven[maxn],ans[maxn];
int seven[maxn];
bool judge(int i)
{
   int tmp=i;
      while(tmp)
      {
         if(tmp%10==7) return true;
         tmp/=10;
      }
   return false;
}
inline void ola(int n)
{
   for(int i=1;i<=n;i++)
   {
      if(judge(i))
      {
         isseven[i]=1;
         seven[++cnt]=i;
         ans[i]=1;
      }
      for(int j=1;j<=cnt&&i*seven[j]<=n;j++) 
      {
         ans[i*seven[j]]=1;
         cout<<i*seven[j]<<endl;
         if(i%seven[j]==0) break;
      } 
   }
   
      
   
}
int main()
{
   ola(maxn);
   //for(int i=1;i<=maxn;i++) cout<<i<<' '<<ans[i]<<endl;
   cin>>T;
   while(T--)
   {
      scanf("%d",&x);
      if(ans[x])
      {
         printf("-1\n");
         continue;
      }
      x++;
      while(ans[x]) x++;
      printf("%d\n",x);
   }
   system("pause");
   return 0;
}
