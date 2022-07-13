#include <bits/stdc++.h>
using namespace std;
int n;
int a[10005];
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++) cin>>a[i];
   for(int i=1;i<=n-1;i++)
      for(int j=1;j<=n-i;j++)
      if(a[i]>a[i+1]) swap(a[i],a[i+1]);
      
   for(int i=1;i<=n;i++) cout<<a[i]<<' ';
   system("pause");
   return 0;
}
