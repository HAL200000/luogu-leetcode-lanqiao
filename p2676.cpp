#include <bits/stdc++.h>
using namespace std;
int n,h[20005];
long long b,tot,sum;
int main()
{
   cin>>n>>b;
   for(int i=1;i<=n;i++) cin>>h[i];
   sort(h+1,h+n+1);
   while(sum<b)
   {
      sum+=h[n];
      n--;
      tot++;
   }
   cout<<tot;
   system("pause");
   return 0;
}
