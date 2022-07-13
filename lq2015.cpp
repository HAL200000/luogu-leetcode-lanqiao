#include <bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
   for(int i=10;i<=100;i++)
   {
       int x=i*i,y=i*i*i;
       while(x)
       {
           a[x%10]=1;
           x/=10;
       }
       while(y)
       {
           a[y%10]=1;
           y/=10;
       }
       bool flag=1;
       for(int j=0;j<=9;j++)
       {
           if(!a[j]) 
           {
               flag=0;
               continue;
           }
       }
       if(flag) cout<<i<<endl;
       memset(a,0,sizeof(a));
   }
   system("pause");
   return 0;
}
