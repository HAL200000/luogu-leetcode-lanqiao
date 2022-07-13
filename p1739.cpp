#include <bits/stdc++.h>
using namespace std;
string s;
queue<char> q;
int main()
{
   cin>>s;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='(') q.push(s[i]);
       if(s[i]==')')
       {
           if(q.empty()) 
           {
               cout<<"NO";
               return 0;
           }
           else q.pop();
       }
   }
   if(q.empty()) cout<<"YES";
   else cout<<"NO";
   system("pause");
   return 0;
}
