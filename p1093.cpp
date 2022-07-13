#include <bits/stdc++.h>
using namespace std;
struct student
{
   int c,m,e,num,sum;
}s[305];
int n;
bool cmp(student a,student b)
{
   if(a.sum==b.sum&&a.c==b.c) return a.num<b.num;
   if(a.sum==b.sum) return a.c>b.c;
   return a.sum>b.sum;
}
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      cin>>s[i].c>>s[i].m>>s[i].e;
      s[i].num=i;
      s[i].sum=s[i].c+s[i].m+s[i].e;
   }
   sort(s+1,s+n+1,cmp);
   for(int i=1;i<=5;i++) cout<<s[i].num<<' '<<s[i].sum<<endl;
   system("pause");
   return 0;
}
