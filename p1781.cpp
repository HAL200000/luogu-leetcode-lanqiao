#include <bits/stdc++.h>

using namespace std;
int n;
string s,ans;
int num=1;
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      cin>>s;
      if(i==1) ans=s;
      else
      {
         if(s.length()>ans.length())
         {
            ans=s;
            num=i;
         }
         if(s.length()==ans.length())
         {
            if(s>ans) 
            {
               ans=s;
               num=i;
            }
         }
      }
   }
   cout<<num<<endl<<ans;
   system("pause");
   return 0;
}
