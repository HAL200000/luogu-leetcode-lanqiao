#include <bits/stdc++.h>
using namespace std;
int n,r;
int a[25];
int main()
{
   cin>>n>>r;
   for(int i=r+1;i<=n;i++) a[i]=1;
   //令不选为1，选为0
   //注意要保证1在数组后面部分。由于全排列函数会去掉重复情况，
/*

实际上的a[]值在n==5，r==3时为
0 0 0 1 1(123)
0 0 1 0 1(124)
0 0 1 1 0(125)
0 1 0 0 1(134)
0 1 0 1 0(135)
0 1 1 0 0(145)
1 0 0 0 1(234)
1 0 0 1 0(235)
1 0 1 0 0(245)
1 1 0 0 0(345)

*/
   
   do
   {
      for(int i=1;i<=n;i++)
      printf("%d ",a[i]);

      cout<<endl;

   }while(next_permutation(a+1,a+n+1));
   system("pause");
   return 0;
}
