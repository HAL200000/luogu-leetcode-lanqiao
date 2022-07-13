#include <bits/stdc++.h>
using namespace std;
long long a[5];
int main()
{
   int n;
   string s;
   cin>>n;
   for(int i=1;i<=n;i++) 
   {
       cin>>s;
       if(s[0]=='M') a[1]++;
       if(s[0]=='C') a[2]++;
       if(s[0]=='O') a[3]++;
       if(s[0]=='I') a[4]++;
   }
   long long a1=a[1]*a[2]*a[3],a2=a[1]*a[2]*a[4],a3=a[2]*a[4]*a[3],a4=a[1]*a[4]*a[3];
   long long ans=a1+a2+a3+a4;
   cout<<ans;
   system("pause");
   return 0;
}
