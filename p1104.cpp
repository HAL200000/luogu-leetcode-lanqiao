#include <bits/stdc++.h>
using namespace std;
int n;
struct st
{
   string name;
   int ord,y,m,d;
}s[105];

bool cmp(st a,st b)
{
   
   if(a.y!=b.y) return a.y<b.y;
   else if(a.m!=b.m) return a.m<b.m;
   else if(a.d!=b.d) return a.d<b.d;
   else return a.ord>b.ord;
}
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      cin>>s[i].name>>s[i].y>>s[i].m>>s[i].d;
      s[i].ord=i;
   }
   sort(s+1,s+n+1,cmp);
   for(int i=1;i<=n;i++) cout<<s[i].name<<endl;
   system("pause");
   return 0;
}
