#include <bits/stdc++.h>
using namespace std;
long long n;
long long odd(long long n)
{
   if((n/2+1)%2) return 1;
   else return 0;
}
int main()
{
   cin>>n;
   if(n&1) cout<<odd(n);
   else 
   {
      long long last=odd(n-1);
      long long ans=last^n;
      cout<<ans;
   }
   system("pause");
   return 0;
}
