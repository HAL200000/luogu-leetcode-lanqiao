#include <bits/stdc++.h>
using namespace std;
struct node
{
   string name;
   double a;
}hero[105];
int n;
string ans[5];
bool cmp(node x,node y)
{
   return x.a>y.a;
}
bool cmp2(string x,string y) 
{
   return x<y;
}
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      cin>>hero[i].name>>hero[i].a;
   }
   sort(hero+1,hero+n+1,cmp);
   int tot=0,cnt=1;

   while(tot<3)
   {
      if(hero[cnt].name=="magnus"||hero[cnt].name=="morph") cnt++;
      else
      {
         ans[++tot]=hero[cnt].name;
         cnt++;
      }
      
   }
   sort(ans+1,ans+4,cmp2);
   for(int i=1;i<=3;i++) cout<<ans[i]<<endl;
   system("pause");
   return 0;
}
