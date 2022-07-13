#include <bits/stdc++.h>
using namespace std;
int n,m,a[10][10],vis[10][10],sx,sy,fx,fy,t,bx,by,ans;

void dfs(int x,int y)
{
   if(x==fx&&y==fy)
   {
      ans++;
      return;
   }
   vis[x][y]=1;
   if(x-1>=1&&x-1<=n&&!vis[x-1][y]&&a[x-1][y]==0) 
   {
      dfs(x-1,y);
      vis[x-1][y]=0;
   }
    if(y-1>=1&&y-1<=m&&!vis[x][y-1]&&a[x][y-1]==0) 
   {
      dfs(x,y-1);
      vis[x][y-1]=0;
   }
    if(x+1>=1&&x+1<=n&&!vis[x+1][y]&&a[x+1][y]==0) 
   {
      dfs(x+1,y);
      vis[x+1][y]=0;
   }
    if(y+1>=1&&y+1<=m&&!vis[x][y+1]&&a[x][y+1]==0) 
   {
      dfs(x,y+1);
      vis[x][y+1]=0;
   }

}


int main()
{
   cin>>n>>m>>t;
   cin>>sx>>sy>>fx>>fy;
   while(t--) cin>>bx>>by,a[bx][by]=1;

   dfs(sx,sy);
   cout<<ans;
   system("pause");
   return 0;
}
