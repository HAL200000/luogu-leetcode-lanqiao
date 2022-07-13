#include <bits/stdc++.h>
using namespace std;
int n,q,cnt;
char a[100005];
int check(int pos)
{
   int tmp=0;
   for(int i=pos-2;i<=pos;i++)
   {
      if(i<=0||i>n-2) continue;
      if(a[i]=='a'&&a[i+1]=='b'&&a[i+2]=='c') tmp++;
   }
   return tmp;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   cin>>n>>q;
   for(int i=1;i<=n;i++) 
   {
      cin>>a[i];
      if(i>=3)
      {
         if(a[i-2]=='a'&&a[i-1]=='b'&&a[i]=='c') cnt++;
      }
   }
   //cout<<cnt<<endl;
   while(q--)
   {
      int pos;
      char c;
      cin>>pos>>c;
      int last=check(pos);
      a[pos]=c;
      cnt+=check(pos)-last;
      cout<<cnt<<endl;
      
   }
   //system("pause");
   return 0;
}
