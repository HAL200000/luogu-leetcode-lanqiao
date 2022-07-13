#include <bits/stdc++.h>
using namespace std;
long long t,k,n;
int main()
{
   cin>>t;
   while(t--)
   {
      cin>>k>>n;
      long long l=1,r=k*2-1,ans=k*2-1;
      while(l<=r)
      {
         long long mid=(l+r)/2,sum=0;
         if(mid<=k) sum=(mid+1)*mid/2;
         else sum=k*k-(2*k-1-mid+1)*(2*k-1-mid)/2;
         if(sum>=n)
         {
            ans=mid;
            r=mid-1;
         }
         else l=mid+1;
      }
      cout<<ans<<endl;
   }
   //system("pause");
   return 0;
}
