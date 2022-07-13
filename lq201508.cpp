#include <bits/stdc++.h>
using namespace std;
int a[15];
int main()
{
   for(int i=0;i<10;i++) a[i]=i;
   do
   {
       if(a[7]*1000+a[4]*100+a[2]*10+a[6]+a[0]*1000+a[1]*100+a[3]*10+a[4]==a[0]*10000+a[1]*1000+a[2]*100+a[4]*10+a[5])
       {
           cout<<a[7]*1000+a[4]*100+a[2]*10+a[6]<<' '<<a[0]*1000+a[1]*100+a[3]*10+a[4]<<" "<<a[0]*10000+a[1]*1000+a[2]*100+a[4]*10+a[5];
           cout<<endl;
       }
   } while (next_permutation(a,a+10));
   
   system("pause");
   return 0;
}
