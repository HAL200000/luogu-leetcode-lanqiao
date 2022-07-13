#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[10005];
int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++) cin>>a[i];
   do
   {
      m--;
   }while(next_permutation(a+1,a+n+1)&&m);
   for(int i=1;i<=n;i++) cout<<a[i]<<' ';
   system("pause");
   return 0;
}
