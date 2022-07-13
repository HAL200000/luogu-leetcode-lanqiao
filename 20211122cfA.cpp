#include <bits/stdc++.h>
using namespace std;
int n,x,y;
int main()
{
   cin>>n;
   while(n--)
   {
      cin>>x>>y;
      if((x+y)%2) 
      {
         cout<<-1<<' '<<-1<<endl;
         continue;
      }
      int dab=(x+y)/2,flag=0;
      for(int i=0;i<=x;i++)
      {
         for(int j=0;j<=y;j++)
         {
            if(i+j==dab&&x-i+y-j==dab)
            {
               cout<<i<<' '<<j<<endl;
               flag=1;
               break;
            }
            
         }
         if(flag) break;
      }
         
   }
   //system("pause");
   return 0;
}
