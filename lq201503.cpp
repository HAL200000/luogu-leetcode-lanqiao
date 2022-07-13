#include <bits/stdc++.h>
using namespace std;
int m,n;
void write1(int n)
{
    for(int i=1;i<=n;i++) cout<<'.';
}
void write2(int n)
{
    for(int i=1;i<=n;i++) cout<<'*';
}
int main()
{
   while(scanf("%d %d",&m,&n)!=EOF)
   {
       int l=0,w=n+m-1;
       for(int i=1;i<=(n+1)/2;i++)
       {    
           if(w-l*2>=m*2)
           {
               write1(l);
               write2(m);
               write1(w-l*2-m*2);
               write2(m);
               write1(l);
               cout<<endl;
           }
           else 
           {
               write1(l);
               write2(w-l*2);
               write1(l);
               cout<<endl;
           }
            l++;
              
       }
       l-=2;
       for(int i=1;i<=(n-1)/2;i++)
       {    
           if(w-l*2>=m*2)
           {
               write1(l);
               write2(m);
               write1(w-l*2-m*2);
               write2(m);
               write1(l);
               cout<<endl;
           }
           else 
           {
               write1(l);
               write2(w-l*2);
               write1(l);
               cout<<endl;
           }
            l--;
              
       }
   }
   system("pause");
   return 0;
}
