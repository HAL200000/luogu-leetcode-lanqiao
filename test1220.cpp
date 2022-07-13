#include <bits/stdc++.h>
using namespace std;
int n,a[105][105],ans[105][105],cnt=1;
int sx,sy;
struct node
{
   int x,y,num;
}b[100005];
bool visit[105][105];
queue <node> q;

bool judge(int x,int y)
{
   if(x>0&&x<=n&&y>0&&y<=n&&!visit[x][y]) return true;
   return false;
}

int main()
{
   cout<<"请输入方阵阶数：\n";
   cin>>n;
   int tot=0;
   cout<<"请输入方阵,每行的数字用空格隔开,行与行之间请拍回车:\n";
   for(int i=1;i<=n;i++) 
      for(int j=1;j<=n;j++)
      {
         cin>>a[i][j];
         b[++tot].num=a[i][j];
         b[tot].x=i;
         b[tot].y=j;
      }
   cout<<"请以形如x y的格式输入查找点的坐标:\n";
   cin>>sx>>sy; 
   visit[sx][sy]=1,ans[sx][sy]=1;
   q.push(b[(sx-1)*n+sy]);
   while(!q.empty())
   {
      node now=q.front();
      q.pop();
      int nowx=now.x,nowy=now.y;
      if(judge(nowx+1,nowy)&&a[nowx+1][nowy]==a[nowx][nowy]) q.push(b[nowx*n+nowy]),visit[nowx+1][nowy]=1,ans[nowx+1][nowy]=1,cnt++;
      if(judge(nowx-1,nowy)&&a[nowx-1][nowy]==a[nowx][nowy]) q.push(b[(nowx-2)*n+nowy]),visit[nowx-1][nowy]=1,ans[nowx-1][nowy]=1,cnt++;
      if(judge(nowx,nowy+1)&&a[nowx][nowy+1]==a[nowx][nowy]) q.push(b[(nowx-1)*n+nowy+1]),visit[nowx][nowy+1]=1,ans[nowx][nowy+1]=1,cnt++;
      if(judge(nowx,nowy-1)&&a[nowx][nowy-1]==a[nowx][nowy]) q.push(b[(nowx-1)*n+nowy-1]),visit[nowx][nowy-1]=1,ans[nowx][nowy-1]=1,cnt++;
   }
   cout<<"相邻的相同数字总数为:";
   cout<<cnt<<endl;
   cout<<"相邻情况为（相邻相同数字用1表示）:\n";
   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=n;j++) cout<<ans[i][j]<<' ';
      cout<<endl;
   }
   system("pause");
   return 0;
}
/*
5
1 1 2 1 1 
1 1 2 1 1 
1 2 2 2 1 
1 1 2 1 1 
1 1 1 1 1
3 3
*/