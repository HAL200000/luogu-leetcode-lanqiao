#include <bits/stdc++.h>
using namespace std;
int a;
int main()
{
   cout<<"欢迎进入华东理工平时成绩管理系统！"<<endl;
   cout<<"程序设计与开发人员：某某某班某某某！"<<endl;
   cout<<"系统版本相关信息：第一版（试运行）"<<endl;
   for(int i=1;i<=17;i++) cout<<'*';
   for(int i=1;i<=3;i++)
   {
      for(int j=1;j<=2;j++) 
      {
         a++;
         if(a%2==1)
         {
            cout<<'*'<<a<<'、';
         
            if(a==1) cout<<"添加数据";
            if(a==2) cout<<"读取数据";
            if(a==3) cout<<"排序数据";
            if(a==4) cout<<"查询数据";
            if(a==5) cout<<"划分等级";
            if(a==6) cout<<"计算最高";
            cout<<"     ";
         } 
         else 
         {
            cout<<a<<'、';
           
            if(a==1) cout<<"添加数据";
            if(a==2) cout<<"读取数据";
            if(a==3) cout<<"排序数据";
            if(a==4) cout<<"查询数据";
            if(a==5) cout<<"划分等级";
            if(a==6) cout<<"计算最高";
            cout<<'*';
         }
      }
      cout<<endl;
   }
      
   system("pause");
   return 0;
}
