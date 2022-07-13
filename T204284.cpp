#include <bits/stdc++.h>
using namespace std;
int T,n,q,k;
double a[10005],b[10005];
int main()
{
   cin>>T;
   while(T--)
   {
      cin>>n>>q;
      for(int i=1;i<=n;i++) cin>>a[i];
      sort(a+1,a+n+1);
      //for(int i=1;i<=n;i++) cout<<a[i]<<' ';
      for(int i=1;i<=n;i++) b[i]=b[i-1]+a[i];
      for(int i=1;i<=q;i++)
      {
         cin>>k;
         for(int j=1;j<=n;j++)
         {
            long double now=(b[n]-b[j-1])/(n-j+1)-k;
            if(now<=a[j])
            {
               //cout<<(b[n]-b[j-1])/(n-j+1)-k<<' '<<a[j]<<endl;
               cout<<n-j+1<<' ';
               break;
            }
         }
      }
      cout<<endl;
   }
   system("pause");
   return 0;
}
/*
1
18 19
71 52 77 38 12 34 82 14 57 39 91 7 56 86 35 68 38 14 
2
*/
