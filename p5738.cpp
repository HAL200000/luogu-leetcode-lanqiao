#include <bits/stdc++.h>
using namespace std;
double ans;
int n,m,maxscore=0,minscore=999,score[25];
int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++)
   {
      //cnt是总分
      double cnt=0;
      for(int j=1;j<=m;j++)
      {
         cin>>score[j];
         //找到最高分和最低分
         if(score[j]>maxscore) maxscore=score[j];
         if(score[j]<minscore) minscore=score[j];
         cnt+=score[j];
      }
      //去掉最高分和最低分再算平均分
      cnt-=(maxscore+minscore);
      cnt/=(m-2);
      ans=max(ans,cnt);
      //清零得分数组，初始化最高分和最低分
      memset(score,0,sizeof(score));
      maxscore=0;
      minscore=999;
   }
   printf("%.2f",ans);
   system("pause");
   return 0;
}
