#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int n,m,a[maxn],b[maxn],tmp[maxn],d[maxn],s[maxn],t[maxn],ans;

bool check(int mid)
{
   memset(tmp,0,sizeof(tmp));
   for(int i=1;i<=mid;i++)
   {
      tmp[s[i]]-=d[i];
      tmp[t[i]+1]+=d[i];
   }
   
   int now=0,last=0;
   for(int i=1;i<=n;i++) tmp[i]=tmp[i-1]+tmp[i],tmp[i]+=b[i];
   for(int i=1;i<=n;i++) if(tmp[i]<0) return 0;
   return 1;
}

int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++) scanf("%d",&a[i]),b[i]=a[i]-a[i-1];
   for(int i=1;i<=m;i++) scanf("%d%d%d",&d[i],&s[i],&t[i]);

   int l=1,r=m;
   while(l<=r)
   {
      int mid=(l+r)/2;
      if(check(mid)) l=mid+1;
      else ans=mid,r=mid-1;
   }
   
   if(check(m)) cout<<0<<endl;
   else cout<<-1<<endl<<ans;
   
   system("pause");
   return 0;
}
