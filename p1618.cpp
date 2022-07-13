#include <bits/stdc++.h>
using namespace std;
int a1,b,c;
int a[10];
bool flag;
int main()
{
   cin>>a1>>b>>c;
   for(int i=1;i<=9;i++) a[i]=i;
   do
   {
      int x=a[1]*100+a[2]*10+a[3];
      int y=a[4]*100+a[5]*10+a[6];
      int z=a[7]*100+a[8]*10+a[9];
      if(b*x==a1*y&&c*y==b*z)
      {
         flag=1;
         printf("%d %d %d\n",x,y,z);
      } 
      
   }while(next_permutation(a+1,a+9+1));
   if(!flag) printf("No!!!");
   system("pause");
   return 0;
}
