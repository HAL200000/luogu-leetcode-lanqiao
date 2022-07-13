#include <bits/stdc++.h>
using namespace std;
char c[1005],ch;
int now;
stack <int> s;
int main()
{
   while(cin>>ch&&ch!='@')
   {
      if(ch>='0'&&ch<='9') now=now*10+ch-'0';
      else if(ch=='.') 
      {
         s.push(now);
         now=0;
      } 
      else
      {
         int x=s.top();
         s.pop();
         int y=s.top();
         s.pop();
         if(ch=='+') s.push(x+y);
         if(ch=='-') s.push(y-x);
         if(ch=='*') s.push(x*y);
         if(ch=='/') s.push(y/x);
      }
   }
   cout<<s.top();
   system("pause");
   return 0;
}
