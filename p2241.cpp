#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long squ,rec;
//如有不懂请画图理解，横坐标表示在第几行，纵坐标表示在第几列
//方法一：枚举所有不同行且不同列的两点来确定一个矩形
//O(n^2m^2)
int main()
{
   cin>>n>>m;
   for(int i=0;i<=n;i++)//点1横坐标
      for(int j=0;j<=m;j++)//点1纵坐标
         for(int k=0;k<=n;k++)//点2横坐标
            for(int l=0;l<=m;l++)//点2纵坐标
            {
               if(i!=k&&j!=l)
               {
                  if(abs(i-k)==abs(j-l)) squ++;//abs(x)的意思是x的绝对值
                  else rec++;
               }
            }
   cout<<squ/4<<' '<<rec/4;//每个矩形被重复枚举了4次
   system("pause");
   return 0;
}

//方法二：枚举矩形右下角的点，坐标为(i,j)
//O(mn)
int main()
{
   cin>>n>>m;

   for(int i=1;i<=n;i++) 
      for(int j=1;j<=m;j++)
      {
         squ+=min(i,j);//该点左上方斜线上，每一个点都能确定一个正方形
         rec+=i*j-min(i,j);//该点左上方的所有点都能与该点构成一个矩形，减去正方形个数就是长方形个数
      }

   cout<<squ<<' '<<rec;

   system("pause");
   return 0;
}


//方法三：枚举边长，构造大小为i*j的矩形
//O(mn)
int main()
{
   cin>>n>>m;

   for(int i=1;i<=n;i++)
      for(int j=1;j<=m;j++)
      {
         if(i==j) squ+=(n+1-i)*(m+1-j);//如有不懂请画图模拟小矩形在大矩形里“滑动”的过程
         else rec+=(n+1-i)*(m+1-j);
      }

   cout<<squ<<' '<<rec;

   system("pause");
   return 0;
}


//方法四：每个矩形由两横两竖直线确定，共有n(n+1)/2 * m(m+1)/2个矩形
//只需枚举正方形边长，如同方法二统计正方形的个数，用矩形个数-正方形个数即为长方形个数
//O(n)!!! NICE!!!
int main()
{
   cin>>n>>m;
   long long sum=n*(n+1)/2*m*(m+1)/2;

   for(int i=1;i<=min(n,m);i++) squ+=(n+1-i)*(m+1-i);
   
   rec=sum-squ;

   cout<<squ<<' '<<rec;

   system("pause");
   return 0;
}
