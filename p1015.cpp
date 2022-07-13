#include <bits/stdc++.h>
using namespace std;
string s1;
int num[50005],num1[50005];
int z,tot,w;
bool judge()
{
   for(int i=1;i<=w;i++)
   {
      if(num[i]!=num[w+1-i]) return false;
   }
   return true;
}
int turn(char a)
{
   if(a>='0'&&a<='9') return int(a-'0');
   else return int(a+10-'A');
}
int main()
{
   cin>>z>>s1;
   int n=s1.length();
   w=n;
   for(int i=1;i<=n;i++) num[i]=turn(s1[n-i]);


   while(!judge())
   {
      tot++;

      if(tot>30)
      {
         cout<<"Impossible!";
         system("pause");
         return 0;
      }
      for(int i=1;i<=w;i++) num1[i]=num[i];
      for(int i=1;i<=w;i++) num[i]+=num1[w-i+1];
      memset(num1,0,sizeof(num1));
      //for(int i=1;i<=w;i++) cout<<num[i]<<' ';
     // cout<<endl;

      for(int i=1;i<=w;i++) 
      {
         if(num[i]>=z)
         {
            num[i+1]+=num[i]/z;
            num[i]%=z;
            if(i==w) w++;
         }
      }

   }
   cout<<"STEP="<<tot;
   system("pause");
   return 0;
}
