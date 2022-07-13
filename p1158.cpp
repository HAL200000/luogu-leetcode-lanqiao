#include <iostream>
#include <algorithm>
using namespace std;
const int maxn=100005;
int x1,y1,x2,y2,n;
struct node
{
   int d1,d2;
}dis[maxn];
int ans=99999;
bool cmp(node a,node b)
{
   return a.d1>b.d1;
}
int main()
{
   cin>>x1>>y1>>x2>>y2;
   cin>>n;
   for(int i=1;i<=n;i++) 
   {
      int x,y;
      cin>>x>>y;
      dis[i].d1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
      dis[i].d2=(x-x2)*(x-x2)+(y-y2)*(y-y2);
   }   
   sort(dis+1,dis+n+1,cmp);
   int r2=0,ans=dis[1].d1;
   for(int i=2;i<=n;i++) 
   {
      if(r2<dis[i-1].d2) r2=dis[i-1].d2;
      ans=min(ans,dis[i].d1+r2);
   }
      
   cout<<ans;
   system("pause");
   return 0;
}
