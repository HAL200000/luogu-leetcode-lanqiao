#include <bits/stdc++.h>
using namespace std;
//f[i]=f[i-1]+f[i-2]
int n,temp[50005];
string a,b,ans;

int main()
{
   cin>>n;
   a="2";
   b="1";
   if(n==0)
   {
      cout<<0;
      return 0;
   }
   if(n==1||n==2)
   {
      cout<<1;
      return 0;
   }
   for(int i=3;i<=n;i++) 
   {
      int la=a.length()-1,lb=b.length()-1;
      int tot=0;
      for(int i=la;i>=0;i--) temp[tot++]+=int(a[i]-'0');
      tot=0;
      for(int i=lb;i>=0;i--) temp[tot++]+=int(b[i]-'0');
      int le=la;
      for(int i=0;i<=la;i++)
      {
         if(temp[i]>9)
         {
            temp[i]-=10;
            temp[i+1]++;
            if(i==la) le++;
         }
      }
      for(int i=le;i>=0;i--) ans+=char(temp[i]+'0');
      memset(temp,0,sizeof(temp));
      if(i!=n)
      {
         b=a;
         a=ans;
         ans="";
      }
   } 
   cout<<ans;
   system("pause");
   return 0;
}
