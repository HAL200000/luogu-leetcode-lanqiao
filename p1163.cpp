#include <bits/stdc++.h>
using namespace std;
const double minn=1e-6;
double n,m,ans;
int k;
int cal(double mid)
{
   double sum=0,tot=1+mid;
   for(int i=1;i<=k;i++)
   {
      sum+=m/tot;
      tot*=(1+mid);
   }
  if(sum==n) return 3;
  if(sum>n) return 2;
  else return 1;
}
int main()
{
   cin>>n>>m>>k;
   double l=0,r=5,mid;
   while(r-l>minn)
   {
      mid=(l+r)/2;
      //cout<<mid<<endl;
     if(cal(mid)==3) break;
     else if(cal(mid)==2) l=mid;
     else r=mid;
   }
   //cout<<ans<<endl;
   printf("%.1f",mid*100);
   system("pause");
   return 0;
}
