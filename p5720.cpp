#include <bits/stdc++.h>
using namespace std;
int n,m,tot,cnt,p;//tot出局人数,cnt报数,p指针
int a[105];
int main()
{
   cin>>n>>m;
   while(tot<n)
   {
      p++;
      if(!a[p]) cnt++;
      if(cnt==m)
      {
         cout<<p<<' ';
         cnt=0;
         a[p]=1;
         tot++;
      }
      if(p>=n) p=0;
      
   }
   system("pause");
   return 0;
}
