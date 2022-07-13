#include <bits/stdc++.h>
using namespace std;
string c;
int k,tot,flag;
bool shutup[255];
int main()
{
   cin>>c>>k;
   int l=c.length();
   int i=0;
   while(k--)
   {
      for(int i=0;i<l;i++)
      {
         if(c[i+1]<c[i])
         {
            for(int j=i;j<l;j++) c[j]=c[j+1];
            l--;
            break;
         }
      }
   }
   for(int i=0;i<l;i++)
   {
      if(!shutup[i]&&c[i]=='0'&&!flag) continue;
      if(!shutup[i]&&c[i]!='0') 
      {
         cout<<c[i];
         flag=1;
      }
      if(!shutup[i]&&c[i]=='0'&&flag) cout<<c[i];
   }
   if(!flag) cout<<0;
   system("pause");
   return 0;
}
