#include <bits/stdc++.h>
using namespace std;
int w,n,a[30005],ans;
int main()
{
   cin>>w>>n;
   for(int i=1;i<=n;i++) cin>>a[i];
   sort(a+1,a+n+1);
   int l=1,r=n;
   while(l<=r)
   {
      if(a[l]+a[r]>w)
      {
         r--;
         ans++;
      }
      else
      {
         r--;
         l++;
         ans++;
      }
   }
   cout<<ans;
   system("pause");
   return 0;
}
