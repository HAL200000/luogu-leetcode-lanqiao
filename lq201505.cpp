#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a=0;
   for(int i=10000;i<=99999;i++)
   {
       
       int now=i,flag=1;
       while(now) 
       {
           if(now%10==4)
           {
               flag=0;
           }
           now/=10;
           
       }
       if(flag==0) a++;
   } 

   cout<<90000-a;
   system("pause");
   return 0;
}
