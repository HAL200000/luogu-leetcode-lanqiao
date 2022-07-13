#include <bits/stdc++.h>
using namespace std;
int s1,s2,n;
int main()
{
   for(int i=1;i<=10;i++)
   {
      cin>>n;
      s1+=n;
      if(n<0) continue;
      s2+=n;
   }
   cout<<s1<<' '<<s2;
   system("pause");
   return 0;
}
