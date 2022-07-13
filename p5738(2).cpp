#include <bits/stdc++.h>
using namespace std;
int n,m;
double ans;
int maxscore,minscore=999;
int score[25];
int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++)
   {
      double cnt=0;
      for(int j=1;j<=m;j++)
      {
         cin>>score[j];
         if(score[j]>maxscore) maxscore=score[j];
         if(score[j]<minscore) minscore=score[j];
         cnt+=score[j];
      }
      cnt-=(maxscore+minscore);
      cnt/=(m-2);
      ans=max(ans,cnt);

      memset(score,0,sizeof(score));
   }
   printf("%.2f",ans);
   system("pause");
   return 0;
}
