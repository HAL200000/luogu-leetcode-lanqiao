#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
string a;
int n,ans;
int main()
{
   cin>>a;
   for(int i=0;i<a.length()-1;i++)
   {
      if(a[i]!=a[i+1]) ans++;
   }
   if(a[a.length()-1]=='0') ans++;
   cout<<ans;
   system("pause");
   return 0;
}
