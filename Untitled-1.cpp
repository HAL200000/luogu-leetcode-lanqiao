#include <bits/stdc++.h>
using namespace std;
int a[4];
int main()
{
  for(int i=1;i<=3;i++) cin>>a[i];
  sort(a+1,a+4);
  int x=a[1],y=a[2],z=a[3];
  if(x+y<=z) printf("Not triangle\n");
  if(x*x+y*y==z*z) printf("Right triangle\n");
  if(x*x+y*y>z*z) printf("Acute triangle\n");
  if(x*x+y*y<z*z) printf("Obtuse triangle\n");
  if(x==y||y==z||x==z) printf("Isosceles triangle\n");
  if(x==y&&y==z&&x==z) printf("Equilateral triangle\n");


   system("pause");
   return 0;
}
