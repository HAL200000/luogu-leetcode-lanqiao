#include <bits/stdc++.h>
using namespace std;
int n,a,b;
struct node
{
   long long l,r;
}p[1005];
long long tmp,ans;
bool cmp(node x,node y)
{
   return x.l*x.r<y.r*y.l;
}
int main()
{
   cin>>n>>a>>b;
   for(int i=1;i<=n;i++) cin>>p[i].l>>p[i].r;
   sort(p+1,p+n+1,cmp);
   tmp=a;
   ans=tmp/p[1].r;
   for(int i=1;i<n;i++)
   {
      tmp*=p[i].l;
      ans=max(ans,tmp/p[i+1].r);
   }
   cout<<ans;
   system("pause");
   return 0;
}
