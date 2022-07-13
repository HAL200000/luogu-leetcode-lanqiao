#include <bits/stdc++.h>
using namespace std;
int n,tot;
int line[105];
bool col[105],lurd[105],ldru[105];//leftup-rightdown leftdown-rightup
void search(int i)
{
   if(i>n)
   {
      if(tot<=2) 
      {
         for(int i=1;i<=n;i++) cout<<line[i]<<' ';
         cout<<endl;
      }
      tot++;
   }

   for(int j=1;j<=n;j++)
   {
      if(col[j]==0&&lurd[i+j]==0&&ldru[i-j+n]==0)
      {
         line[i]=j;
         col[j]=1;
         lurd[i+j]=1;
         ldru[i-j+n]=1;
         search(i+1);
         col[j]=0;
         lurd[i+j]=0;
         ldru[i-j+n]=0;
      }
   }
}
int main()
{
   cin>>n;
   search(1);
   cout<<tot;
   system("pause");
   return 0;
}
