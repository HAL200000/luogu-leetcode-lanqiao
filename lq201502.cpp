#include <bits/stdc++.h>
using namespace std;
int ans;
int main()
{
   for(int i=1;i<=49;i++)
   {
       for(int j=1;j<=49;j++)
       {
           if(i!=j&&1225-2*i-1-2*j-1+i*(i+1)+j*(j+1)==2015&&i!=10&&i!=27) 
           {
               ans=min(i,j);
               break;
           }
       }
   }
   cout<<ans;
   system("pause");
   return 0;
}
