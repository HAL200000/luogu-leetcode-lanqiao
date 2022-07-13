#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int nxt[2000005];
int main()
{
   cin>>s1>>s2;
   string s3=s2+'#'+s1;
   int l=s1.size()+s2.size()+1,a=s2.size();
   for(int i=1;i<l;i++)
   {
      int j=nxt[i-1];
      while(j&&s3[i]!=s3[j]) j=nxt[j-1];
      if(s3[i]==s3[j]) j++;
      nxt[i]=j;
      if(nxt[i]==a) cout<<i-a*2+1<<endl;
   }
   for(int i=0;i<s2.size();i++) cout<<nxt[i]<<' ';
   system("pause");
   return 0;
}
