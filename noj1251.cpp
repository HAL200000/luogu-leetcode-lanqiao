#include <bits/stdc++.h>
using namespace std;
int a,b,c,n;
bool isrun(int a)
{
   if(((a%4==0)&&(a%100!=0))||a%400==0) return 1;
   else return 0;
}
int main()
{
   while(scanf("%d %d %d %d",&a,&b,&c,&n)!=EOF)
   {
      while(n--)
      {
         c++;
         if(b==2)
         {
            if(isrun(a)&&c==30)
            {
               b++;
               c=1;
            }
            else if(!isrun(a)&&c==29)
            {
               b++;
               c=1;
            }
         }

         else if((b==1||b==3||b==5||b==7||b==8||b==10||b==12)&&c==32)
         {
            b++;
            c=1;
         }
         else if((b==4||b==6||b==9|b==11)&&c==31)
         {
            b++;
            c=1;
         }

         if(b==13)
         {
            a++;
            b=1;
         }
      }
      printf("%d-%02d-%02d\n",a,b,c);
   }
   //system("pause");
   return 0;
}
