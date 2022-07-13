#include <bits/stdc++.h>
using namespace std;
double red[5],yellow[5];
int main()
{
   for(int i=1;i<=3;i++)
   {
       double x,y;
       scanf("(%.lf,%.lf)",&x,&y);
       red[i]=sqrt(x*x+y*y);
   }
   for(int i=1;i<=3;i++)
   {
       double x,y;
       scanf("(%.lf,%.lf)",&x,&y);
       yellow[i]=sqrt(x*x+y*y);
   }
   sort(red+1,red+4);
   sort(yellow+1,yellow+4);

   bool win;
   double a=red[1],b=yellow[1];
   if(a>1.8&&b>1.8) win=0;
   else a<b?win=1:win=2;

   if(win==0) cout<<"BLANK END";
   else
   {
        int score=1;
        if(win==1) 
        {
            for(int i=2;i<=3;i++) if(red[i]<b) score++;
            printf("RED SCORES %d",score);
        }
        if(win==2) 
        {
            for(int i=2;i<=3;i++) if(yellow[i]<a) score++;
            printf("YELLOW SCORES %d",score);
        }
   }
   
    


   system("pause");
   return 0;
}
