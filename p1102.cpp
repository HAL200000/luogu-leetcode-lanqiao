#include <bits/stdc++.h>
using namespace std;
int c,n;
long long ans;
int a[200005];
map <int,int> m;
int main()
{
   cin>>n>>c;
   for(int i=1;i<=n;i++)
   {
      cin>>a[i];
      m[a[i]]++;
   }
   for(int i=1;i<=n;i++)
   {
      if(m[a[i]-c]) ans+=m[a[i]-c];
   }
   cout<<ans;
   system("pause");
   return 0;
}
