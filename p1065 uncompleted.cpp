#include <bits/stdc++.h>

using namespace std;
int n,m,ord[500];
struct gongjian
{
   int machine[25]//第i个工件第j道工序执行的机器编号为gj[i].machine[j]
   int time[25];//第i个工件第j道工序所花的时间为gj[i].time[j]
}gj[25];
int opt[25];//记录每台机子的操作过程
int kd[25][25];//记录第i台机子的第j个空挡大小
int kdtot[25];//记录第i台机子有几个空挡
int tot[25];//记录第i个工件已经进行了几道工序
int main()
{
   cin>>n>>m;
   for(int i=1;i<=m;i++) kd[i][1]=999999;
   memset(kdtot,1,sizeof(kdtot));
   memset(tot,1,sizeof(tot));
   for(int i=1;i<=n*m;i++) cin>>ord[i];
   for(int i=1;i<=n;i++) 
      for(int j=1;j<=m;j++) cin>gj[i].machine[j];
   for(int i=1;i<=n;i++) 
      for(int j=1;j<=m;j++) cin>>gj[i].time[j];
   for(int cnt=1;cnt<=n*m;cnt++)
   {
      int now=ord[cnt];
      //有空档则优先插入最前空挡
      
         for(int i=1;i<=kdtot[now];i++)
         {
            if(kd[now][i]>=gj[now].time[tot[now]])
            {
               
               
               kd[now][i]-=gj[now].time[tot[now]];
               if(kd[now][i]>99999) 
               {
                  opt[now]+=gj[now].time[tot[now]];
                  opt[ord[cnt+1]]            
            }
         }
      }
      //没有合适的
   }
   system("pause");
   return 0;
}
