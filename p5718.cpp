#include <bits/stdc++.h>
using namespace std;
int n,a,ans=99999;
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++) 
   {
      cin>>a;
      ans=min(a,ans);
   }
   cout<<ans;
   system("pause");
   return 0;
}
