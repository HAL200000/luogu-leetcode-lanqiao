#include <bits/stdc++.h>

using namespace std;
int n,a;
double b,c;
int main()
{
   cin>>n;
   while(n--)
   {
      cin>>a>>b>>c;
      if(b*0.7+c*0.3>=80&&b+c>140) cout<<"Excellent"<<endl;
      else cout<<"Not excellent"<<endl;
   }
   system("pause");
   return 0;
}
