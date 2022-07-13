#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
   while(cin>>n)
   {
       int ans=n;
       while(n>=3)
       {
           ans+=n/3;
           n=n%3+n/3;
       }
       cout<<ans<<endl;
   }
   system("pause");
   return 0;
}
