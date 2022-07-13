#include <bits/stdc++.h>
using namespace std;
int n,t;
double ans;
struct node
{
   double m,v;
   double value;
}gold[105];
bool cmp(node a,node b)
{
   return a.value>b.value;
}
int main()
{
   cin>>n>>t;
   for(int i=1;i<=n;i++)
   {
      cin>>gold[i].m>>gold[i].v;
      gold[i].value=gold[i].v/gold[i].m;
   }
   sort(gold+1,gold+n+1,cmp);
   int tot=1;
   while(t--)
   {
      ans+=gold[tot].value;
      gold[tot].m--;
      if(!gold[tot].m) tot++;
   }
   printf("%.2f",ans);
   system("pause");
   return 0;
}
