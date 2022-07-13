#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int n,a[5005],maxa;
long long ans;
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
     int x;
     cin>>x;
     a[x]++;
     maxa=max(maxa,x);
   }
   for(int i=2;i<=maxa;i++)
   {
      if(a[i]>=2)
      {
         for(int j=1;j<=i/2;j++)
         {
            if(a[j]&&a[i-j])
            {
               if(j==i-j&&a[j]>=2) ans+=((a[i]*(a[i]-1)/2)%mod) *((a[j]*(a[j]-1)/2)%mod);

               else if(j!=i-j) ans+=((a[i]*(a[i]-1)/2)%mod) * ((a[j]*a[i-j]) %mod);
            }
         }
        
      }
   }
   cout<<ans%mod<<endl;
   system("pause");
   return 0;
}
