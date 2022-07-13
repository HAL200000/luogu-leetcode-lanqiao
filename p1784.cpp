#include <bits/stdc++.h>
using namespace std;
int a[15][15],line[15][15],col[15][15],sqr[15][15];
void output()
{
   for(int i=1;i<=9;i++)
   {
      for(int j=1;j<=9;j++) cout<<a[i][j]<<' ';
      cout<<endl;
   }
   
}
void dfs(int i,int j)
{
  
   if(a[i][j])
   {
      if(i==9&&j==9) output();
      if(j==9) dfs(i+1,1);
      else dfs(i,j+1);
   }
   else
   {
      for(int k=1;k<=9;k++)
      {
         int nowsqrt=(i-1)/3*3+(j-1)/3+1;
         if(!line[i][k]&&!col[j][k]&&!sqr[nowsqrt][k])
         {
            a[i][j]=k;
            line[i][k]=1;//i行，数字k被占用
            col[j][k]=1;//j列，数字k被占用
            sqr[nowsqrt][k]=1;//第nowsqrt个3*3方格，数字k被占用

            if(i==9&&j==9) output();
            if(j==9) dfs(i+1,1);
            else dfs(i,j+1);
            
            a[i][j]=0;
            line[i][k]=0;
            col[j][k]=0;
            sqr[nowsqrt][k]=0;
         }
      }  
   }
}

int main()
{
   
   for(int i=1;i<=9;i++)
      for(int j=1;j<=9;j++)
      {
         int now;
         cin>>now;
         a[i][j]=now;
         line[i][now]=1;
         col[j][now]=1;
         int nowsqrt=(i-1)/3*3+(j-1)/3+1;
         sqr[nowsqrt][now]=1;  
      }
   cout<<endl;
   dfs(1,1);//从左往右，从上往下开搜
   system("pause");
   return 0;
}
