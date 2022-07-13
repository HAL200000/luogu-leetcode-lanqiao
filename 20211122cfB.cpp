#include <bits/stdc++.h>
using namespace std;
int t,n,a,b,ans[105];
bool used[105];
int main()
{
   cin>>t;
   while(t--)
   {
      cin>>n>>a>>b;
      memset(ans,0,sizeof(ans));
      memset(used,0,sizeof(used));
      ans[1]=a,ans[n/2+1]=b;
      used[a]=used[b]=1;
      int tot=1;
      for(int i=n;i>=1;i--)
      {
         if(i>a&&!used[i]) ans[++tot]=i,used[i]=1;
         if(tot==n/2) break;
      }
      tot=n/2+1;
      for(int i=1;i<=n;i++)
      {
         if(i<b&&!used[i]) ans[++tot]=i,used[i]=1;
         if(tot==n) break;
      }

      

      bool flag=0;
      for(int i=1;i<=n;i++)
      {
         if(!ans[i])
         {
            flag=1;
            break;
         }
      }
      if(flag) cout<<-1<<endl;
      else 
      {
         for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
         cout<<endl;
      }
   }
   system("pause");
   return 0;
}
