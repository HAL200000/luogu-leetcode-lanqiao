#include <bits/stdc++.h>
using namespace std;
int n,a[100005];
void qsort(int l,int r)
{
   int key=a[(l+r/2)],i=l,j=r;
   while(i<=j)
   {
      while(a[i]<=key) i++;
      while(a[j]>=key) j--;
      if(i<=j)
      {
         swap(a[i],a[j]);
         i++;
         j--;
      }
   }
   if(l<j) qsort(l,j);
   if(r>i) qsort(i,r); 
}
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++) scanf("%d",&a[i]);
   qsort(1,n);
   for(int i=1;i<=n;i++) cout<<a[i]<<' ';
   system("pause");
   return 0;
}
