#include <bits/stdc++.h>
using namespace std;
int a[5][5],b[5][5],ans=8,cnt;

int main()
{
   for(int i=1;i<=4;i++) 
      for(int j=1;j<=4;j++) cin>>a[i][j];

   for(int i=1;i<=4;i++)
      for(int j=1;j<=4;j++)
         for(int k=1;k<=2;k++)
         {
            //排除箭头
            if(i==1&&j==1&&k==1) continue;
            if(i==1&&j==4&&k==2) continue;
            if(i==4&&j==1&&k==1) continue;
            if(i==4&&j==4&&k==2) continue;

            //排除星花
            if(i==2&&j==2&&k==1) continue;
            if(i==2&&j==3&&k==2) continue;
            if(i==3&&j==2&&k==2) continue;
            if(i==3&&j==3&&k==1) continue;

            //构造一种符合的图例
            for(int n=1;n<=4;n++) b[i][n]=1;
            for(int n=1;n<=4;n++) b[n][j]=1;
            if(k==1)
            {
               for(int n=1;n<=4;n++) b[n][n]=1;
            }
            if(k==2)
            {
               for(int n=1;n<=4;n++) b[n][5-n]=1;
            }

            //比较图例和输入的图，找不同之处的数量取最小值，至于为什么要找这个下面有讲
            for(int n=1;n<=4;n++)
               for(int m=1;m<=4;m++)
               if(a[n][m]!=b[n][m]) cnt++;

            if(cnt<ans) ans=cnt;
            memset(b,0,sizeof(b));
            cnt=0;
         }
   //※除以2输出，因为一次移动可以消除两个不同之处（最难想的地方）
   cout<<ans/2<<endl;
   system("pause");
   return 0;
}
