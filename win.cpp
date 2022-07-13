#include <bits/stdc++.h>
using namespace std;
double red[5],yellow[5];
double x,y;
void scan()
{
    char q,w,e;
    cin>>q>>x>>w>>y>>e;
}
int main()
{
   for(int i=1;i<=3;i++)
   {
       scan();
       red[i]=sqrt(x*x+y*y);
   }
   for(int i=1;i<=3;i++)
   {
       scan();
       yellow[i]=sqrt(x*x+y*y);
   }
   sort(red+1,red+4);
   sort(yellow+1,yellow+4);
    //for(int i=1;i<=3;i++) cout<<red[i]<<' '<<yellow[i]<<endl;
   int win;
   double a=red[1],b=yellow[1];
   if(a>1.8&&b>1.8) win=0;
   else a<b?win=1:win=2;

   if(win==0) cout<<"BLANK END";
   else
   {
        int score=1;
        if(win==1) 
        {
            for(int i=2;i<=3;i++) if(red[i]<b&&red[i]<1.8) score++;
            printf("RED SCORES %d",score);
        }
        if(win==2) 
        {
            for(int i=2;i<=3;i++) if(yellow[i]<a&&red[i]<1.8) score++;
            printf("YELLOW SCORES %d",score);
        }
   }
   
    


   system("pause");
   return 0;
}
/*

(0.5,0.5)
(0.15,-0.5)
(0.5,-0.1)
(-0.2,-0.2)
(-0.1,0.1)
(0.5,0.5)

(-0.2,-0.2)
(-0.1,0.1)
(0.5,0.5)
(0.1,0.15)
(0.15,-0.5)
(0.5,-0.1)

(-2,-2)
(-11,11)
(5,5)
(1,15)
(15,-5)
(5,-1)
*/