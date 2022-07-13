#include <bits/stdc++.h>
using namespace std;
int d,sum,maxt[50],mint[50];
int maxn,minn;
int main()
{
   cin>>d>>sum;
   for(int i=1;i<=d;i++)
   {
      cin>>mint[i]>>maxt[i];
      maxn+=maxt[i];
      minn+=mint[i];
   }
   if(maxn<sum||sum<minn)
   {
      cout<<"NO";
      return 0;
   }
   cout<<"YES"<<endl;
   sum-=minn;
   int tot=0;
   while(sum)
   {
      tot++;
      if(mint[tot]+1<=maxt[tot]) 
      {
         mint[tot]+=1;
         sum--;
      }
      if(tot==d) tot=0;
   }
   for(int i=1;i<=d;i++) cout<<mint[i]<<' ';
   //system("pause");
   return 0;
}
