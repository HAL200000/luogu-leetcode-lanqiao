#include <bits/stdc++.h>
using namespace std;
string s;
int ans;
int main()
{
   getline(cin,s);
   int l=s.length();
   for(int i=0;i<l;i++)
   {
      for(int j=i+1;j<l;j++)
      {
         if(s[i]==s[j])
         {
            int tot=0;
            while(s[i+tot]==s[j+tot])
            {
               tot++;
            }
            ans=max(ans,tot);
         }
      }
   }
   cout<<ans;
   //system("pause");
   return 0;
}
