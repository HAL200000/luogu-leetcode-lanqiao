#include <bits/stdc++.h>

using namespace std;
int num[5005],t,x,y,ans;


int main()
{
   cin>>t;
   while(t--)
   {
      ans=0;
      cin>>x>>y;
      memset(num,0,sizeof(num));
      num[1]=1;//第一位必须为1
      int w=1;//数位
      for(int i=2;i<=x;i++) 
      {
         for(int j=1;j<=w;j++) num[j]*=i;//先给每一位乘上单精度数
         
         for(int j=1;j<=w;j++)//处理进位（注意不能和上一步写到一个循环里）
         {
            if(num[j]>9)
            {
               num[j+1]+=num[j]/10;
               num[j]%=10;
               if(j==w) w++;//最高位还进位就将位数+1
            }
         }
         
      }
      for(int i=1;i<=w;i++)
      {
         if(num[i]==y) ans++;
      }
      cout<<ans<<endl;
   }
   system("pause");
   return 0;
}
