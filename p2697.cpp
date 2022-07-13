#include <bits/stdc++.h>
using namespace std;
char a[1000005];
int tot[1000005];
int ans;
int main()
{
   scanf("%s",&a);
   int n=strlen(a);
   if(a[0]=='G') tot[0]=1;
   if(a[0]=='R') tot[0]=-1;
   for(int i=1;i<n;i++)
   {
      if(a[i]=='G') tot[i]=tot[i-1]+1;
      if(a[i]=='R') tot[i]=tot[i-1]-1;
   }
   for(int i=0;i<n;i++)
      for(int j=i+ans;j<n;j++)
      {
         if(tot[j]==tot[i-1]) ans=max(ans,j-i+1);
      }
   cout<<ans;
   system("pause");
   return 0;
}
