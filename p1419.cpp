#include <bits/stdc++.h>
using namespace std;
int n,s,t,a[100005],b[100005];
double ans,summ;
const double minn=1e-6;
const int maxn=1e9;
bool check(double mid)
{
   
   for(int i=s;i<=t;i++)
   {
      bool flag=0;
      for(int j=1;j<=n-i+1;j++)
      {
         double now=(b[j+i-1]-b[j-1])/double(i);
         //printf("i=%d j=%d\n",i,j);
         //printf("now=%lf\n",now);
         if(now>=mid) 
         {
            flag=1;
            break;
         }
      }
      if(flag) return 1;
   }
   //printf("all of now<mid\n");
   return 0;
}

int main()
{
   cin>>n;
   cin>>s>>t;
   for(int i=1;i<=n;i++) 
   {
      scanf("%d",&a[i]);
      b[i]=b[i-1]+a[i];
   }
   double l=0,r=maxn;
   while(r-l>=minn)
   {
      double mid=(l+r)/2;
      //printf("mid=%lf\n",mid);
      if(check(mid)) 
      {
         ans=mid;
         l=mid+minn;
      }
      else r=mid-minn;
      
   }
   printf("%.3f",ans);
   system("pause");
   return 0;
}
/*
5
2 3
3
-1
2
-2
5
*/