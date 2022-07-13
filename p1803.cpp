#include <bits/stdc++.h>
using namespace std;
int n,line[100005],last,ans,maxt;
struct node
{
   int a,b;
}c[100005];
bool cmp(node x,node y)
{
   return x.b<y.b;
}
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      cin>>c[i].a>>c[i].b;
      maxt=max(maxt,c[i].b);
   }
   sort(c+1,c+n+1,cmp);
   for(int i=1;i<=n;i++)
   {
      if(c[i].a>=last)
      {
         ans++;
         last=c[i].b;
      }
   }
   cout<<ans;
   system("pause");
   return 0;
}
/*
4
1 4
2 3
4 8
5 9
*/