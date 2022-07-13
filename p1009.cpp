#include <bits/stdc++.h>
using namespace std;
int n,now[5005],ans[5005],w=1;

void jc(int a)
{
   for(int i=1;i<=w;i++)  now[i]*=a;
   for(int i=1;i<=w;i++)
   {
      if(now[i]>9)
      {
         now[i+1]+=now[i]/10;
         now[i]%=10;
         if(i==w) w++;
      }
   }

}

void jia()
{
   for(int i=1;i<=w;i++) ans[i]+=now[i];
   for(int i=1;i<=w;i++)
   {
      if(ans[i]>9)
      {
         ans[i+1]+=ans[i]/10;
         ans[i]%=10;
      }
   }
}

int main()
{
   cin>>n;
   now[1]=1;
   for(int i=1;i<=n;i++)
   {
      jc(i);
      jia();
      //cout<<w<<endl;
   }
   for(int i=w;i>=1;i--) cout<<ans[i];
   system("pause");
   return 0;
}
