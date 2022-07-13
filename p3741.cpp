#include <bits/stdc++.h>
using namespace std;
char a[105];
int n,cnt,ans;
//tot用来统计字符串里VK个数
void tot()
{
   for(int i=1;i<=n-1;i++)
   {
      if(a[i]=='V'&&a[i+1]=='K') cnt++;
   }
}

int main()
{
   cin>>n;
   for(int i=1;i<=n;i++) cin>>a[i];

//先统计原字符串有几个VK，记得每次统计完之后把cnt清零
   tot();
   ans=cnt;
   cnt=0;

//尝试替换字符串中每一个字符
   for(int i=1;i<=n;i++)
   {  
//转换，统计VK个数，取最大值      
      if(a[i]=='V') a[i]='K';
      else a[i]='V';

      tot();
      ans=max(ans,cnt);

//还原字符串，tot清零
      if(a[i]=='V') a[i]='K';
      else a[i]='V';
      cnt=0;
   }

   cout<<ans;
   system("pause");
   return 0;
}
