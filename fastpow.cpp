#include <bits/stdc++.h>
using namespace std;
int a,n,p;
long long fastpow(int a,int n)
{
    long long base=a,ans=a;//一开始的权重base就是a
    while(n)
    {
        if(n&1) ans=ans*base%p;//幂的二进制形式在这一位是1，需要乘上这一位的权重
        base=base*base%p;//每向右移动一位，权重需要自乘
        n>>=1;//以二进制的形式右移一位，相当于砍掉二进制形式的最后一位，如1011 ---> 101
    }
    return ans%p;
}
int main()
{
   cin>>a>>n>>p;
   cout<<a<<'^'<<n<<" mod "<<p<<'='<<fastpow(a,n-1);
   system("pause");
   return 0;
}
