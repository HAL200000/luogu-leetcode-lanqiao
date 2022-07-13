#include <bits/stdc++.h>
using namespace std;
int n=8,nxt[100],cnt;
string s="abcdafab";
int main()
{
   for(int i=1;i<n;i++)
   {
       int j=next[i-1];
       while(j>0&&s[i]!=s[j]) j=next[j-1];//匹配失败，继续寻找更小的j
       if(s[i]==s[j]) j++;//匹配成功
       next[i]=j;
   }
    
	for(int i=0;i<=n;i++) cout<<nxt[i]<<' ';
    
   system("pause");
   return 0;
}
