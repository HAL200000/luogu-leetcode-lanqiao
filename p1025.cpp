/*#include <bits/stdc++.h>
using namespace std;
int n,k;
long long ans;

void dfs(int last,int cur,int sum)
{
   if(cur==k)
   {
      if(sum==n) ans++;
      return;
   }
   for(int i=last;sum+i*(k-cur)<=n;i++) dfs(i,cur+1,sum+i);
}

int main()
{
   cin>>n>>k;
   dfs(1,0,0);
   cout<<ans;
   system("pause");
   return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int n,k,a[205][10];
int main()
{
   cin>>n>>k;
   for(int i=1;i<=n;i++) a[i][1]=1;
   for(int i=1;i<=n;i++) 
      for(int j=2;j<=k;j++) 
      {
        if(i>=j) a[i][j]=a[i-1][j-1]+a[i-j][j];
      }
   cout<<a[n][k];
   system("pause");
   return 0;
}
