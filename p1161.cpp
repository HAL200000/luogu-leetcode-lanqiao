#include <bits/stdc++.h>
using namespace std;
int n,t;
bool lamp[2000000];
double a;
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      cin>>a>>t;
      int now=1;
      while(now<=t)
      {
         int x=int(now*a);
         if(!lamp[x]) lamp[x]=1;
         else lamp[x]=0;
         now++;
      }
   }
   for(int i=1;i<=2000000;i++) 
   {
      if(lamp[i]) 
      {
         cout<<i;
         break;
      }
   }
   system("pause");
   return 0;
}
