#include <bits/stdc++.h>

using namespace std;
double a,b,c;
double s,x,area;
int main()
{
   cin>>a>>b>>c;
   s=(a+b+c)/2;
   x=s*(s-a)*(s-b)*(s-c);
   area=sqrt(x);
   printf("%.1f",area);
   system("pause");
   return 0;
}
