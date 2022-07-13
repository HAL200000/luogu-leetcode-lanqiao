#include <bits/stdc++.h>
using namespace std;
string s;
int p1,p2,p3;
void extend(int a,int b)
{
      string s1;
      if(p1==1)
      {
         char x=int(s[a]+1);
         
         while(x!=s[b])
         {
            for(int i=1;i<=p2;i++) s1+=x;
            x=char(int(x)+1);
         }
         if(p3==1) s.insert(b,s1);
         else 
         {
            reverse(s1.begin(),s1.end());
            s.insert(b,s1);
         }
      }
      if(p1==2)
      {
         if(isalpha(s[a]))
         {
            char x=s[a]-'a'+'B';
         while(x!=s[b]-'a'+'A')
         {
            for(int i=1;i<=p2;i++) s1+=x;
            x=char(int(x)+1);
         }
         if(p3==1) s.insert(b,s1);
         else 
         {
            reverse(s1.begin(),s1.end());
            s.insert(b,s1);
         }
         }
         else
         {
            char x=int(s[a]+1);
         
         while(x!=s[b])
         {
            for(int i=1;i<=p2;i++) s1+=x;
            x=char(int(x)+1);
         }
         if(p3==1) s.insert(b,s1);
         else 
         {
            reverse(s1.begin(),s1.end());
            s.insert(b,s1);
         }
         }
      }
      if(p1==3)
      {
         
         char x=int(s[a]+1);
         while(x!=s[b])
         {
            for(int i=1;i<=p2;i++) s1+='*';
            x=char(int(x)+1);
         }

         s.insert(b,s1);
      }
      
}

int main()
{
   cin>>p1>>p2>>p3;
   cin>>s;
   for(int i=1;i<s.size()-1;i++)
   {
      if(s[i]=='-'&&isalnum(s[i-1])&&isalnum(s[i+1]))
      {
         int a=i-1,b=i+1;
         if(s[b]<=s[a]) continue;
         else if(int(s[b])==int(s[a])+1) s.erase(i,1);
         else if((isdigit(s[b])&&isdigit(s[a]))||(isalpha(s[b])&&isalpha(s[a])))
         {
            s.erase(i,1);
            if(s[a]<s[b-1]) extend(a,b-1);
            
         }
         
      }
   }
   cout<<s;
   system("pause");
   return 0;
}
