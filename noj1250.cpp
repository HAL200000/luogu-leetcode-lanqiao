#include <bits/stdc++.h>
using namespace std;
int n,flag;
int main()
{
   while(scanf("%d",&n)!=EOF)
   {
      flag=0;
      for(int i=1;i<=100;i++)
      for(int j=i;j<=100;j++)
         for(int k=j;k<=100;k++)
         {
            if(i*i+k*k+j*j==n) printf("%d %d %d\n",i,j,k),flag=1;
         }
      if(!flag) cout<<"No Solution"<<endl;
   }
   
   //system("pause");
   return 0;
}
