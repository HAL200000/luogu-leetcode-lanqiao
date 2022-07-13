#include <bits/stdc++.h>
using namespace std;
int n,a[105];
void qsort(int l,int r)
{
   if(l>=r) return;
   int key=a[l],i=l,j=r;
   while(i!=j)
   {
      while(a[j]>=key&&i<j) j--;
      while(a[i]<=key&&i<j) i++;
      if(i<j) swap(a[i],a[j]);
   }
   swap(a[i],a[l]);
   qsort(l,i-1);
   qsort(j+1,r);
}
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++) cin>>a[i];
   qsort(1,n);
   for(int i=1;i<=n;i++) cout<<a[i]<<' ';
   system("pause");
   return 0;
}
