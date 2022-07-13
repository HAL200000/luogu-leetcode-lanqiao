#include <bits/stdc++.h>
using namespace std;
double s,a,b;
int main()
{
   cin>>s>>a>>b;
   double t1=s*(a+b)/(a*(b-a)+(a+b)*(a+b));
   double t2=(s-(a+b)*t1)/a;
   printf("%.6f",2*t1+t2);
   system("pause");
   return 0;
}
