#include <bits/stdc++.h>
using namespace std;
const int maxn=1005;
int n;
struct student
{
   string name;
   int sum,a,b,c;
}s[maxn];
bool cmp(student a,student b)
{
   return a.name<b.name;
}
int main()
{
   cin>>n;
   int a,b,c;
   for(int i=1;i<=n;i++)
   {
      cin>>s[i].name>>a>>b>>c;
      s[i].a=a;
      s[i].b=b;
      s[i].c=c;
      s[i].sum=a+b+c;
   }
   sort(s+1,s+n+1,cmp);
   for(int i=1;i<=n;i++)
      for(int j=i;j<=n;j++)
      {
         if(abs(s[i].a-s[j].a)<=5&&abs(s[i].b-s[j].b)<=5&&abs(s[i].c-s[j].c)<=5&&abs(s[i].sum-s[j].sum)<=10&&i!=j)
         {
            cout<<s[i].name<<' '<<s[j].name<<endl;
         }
      }
   system("pause");
   return 0;
}
