/*#include <bits/stdc++.h>
using namespace std;
int T,n,m;
stack <char> s; 
int main()
{
   cin>>T;
   while(T--)
   {
      cin>>n>>m;
      int tot=0,flag=0;
      for(int i=1;i<=n;i++)
      {
         char c;
         cin>>c;
         if(!s.empty()&&c==')'&&s.top()=='(') 
         {
            s.pop();
            if(s.empty()||s.top()=='(') tot++;
         }
         else s.push(c);

         if(tot>=m) 
         {
            flag=1;
            break;
         }
      }
     // cout<<tot<<endl;
      while(!s.empty()) s.pop();
   }
   system("pause");
   return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int T,n,m;
int main()
{
   cin>>T;
   while(T--)
   {
      char a[205];
      cin>>n>>m;
      for(int i=1;i<=n;i++) cin>>a[i];
      int tot=1,cnt=0;
      while(a[tot]==')') tot++;
      for(int i=tot;i<=n;i++)
      {
         for(int j=i;j<=n;j++)
         {
            if(a[j]==')'&&(a[j+1]=='('||j==n))
            {
               i=j+1;
               cnt++;
            }
         }
      }
      if(cnt>=m) cout<<1<<endl;
      else cout<<0<<endl;
   }
   system("pause");
   return 0;
}
