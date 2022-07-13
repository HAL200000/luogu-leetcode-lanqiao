#include <bits/stdc++.h>

using namespace std;
int n,k,a[5000005];
int main()
{
   cin>>n>>k;
   for(int i=1;i<=n;i++) scanf("%d",&a[i]);
   nth_element(a+1,a+k+1,a+n+1);
   cout<<a[k+1];
   system("pause");
   return 0;
}
