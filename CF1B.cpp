#include <bits/stdc++.h>
using namespace std;
int n,l;
string s;//谨记s从0开始！！！！

bool isnum(char a)
{
   if(a>='0'&&a<='9') return 1;
   else return 0;
}

int judge(string s)
{
   for(int i=0;i<l;i++) if(s[i]=='C'&&i>=2&&isnum(s[i-1])) return 2;
   return 1;
}

void turn12()
{
   int line=0,col=0,tot=0;
   while(!isnum(s[tot])) tot++;
   for(int i=tot;i<=l-1;i++)
   {
      int now=int(s[i]-'0');
      line*=10;
      line+=now;
   }
   tot-=1;
   int cnt=1;
   while(tot>=0)
   {
      col+=cnt*int(s[tot]-'@');
      cnt*=26;
      tot--;
   }
   printf("R%dC%d\n",line,col);
}

void turn21()
{
   int line=0,col=0,tot=1;
   while(isnum(s[tot]))
   {
      int now=int(s[tot]-'0');
      line*=10;
      line+=now;
      tot++;
   }
   tot+=1;
   while(tot<=l-1)
   {
      int now=int(s[tot]-'0');
      col*=10;
      col+=now;
      tot++;
   }
   char ans[20],cnt=0;
   while(col)
   {
      int temp=col%26;
      if(!temp) 
      {
         temp=26;
         col-=26;
      }
      ans[++cnt]=char(temp+'A'-1);
      col/=26;
   }
   while(cnt) cout<<ans[cnt--];
   cout<<line<<endl;
}

int main()
{
   cin>>n;
   while(n--)
   {
      cin>>s;
      l=s.size();
      if(judge(s)==1) turn12();
      if(judge(s)==2) turn21();
   }
   //system("pause");
   return 0;
}
