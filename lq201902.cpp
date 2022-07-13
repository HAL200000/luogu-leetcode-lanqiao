#include <bits/stdc++.h>
using namespace std;
long long a=1,b=1,c=1;
const int maxn=20190324;
int main()
{
	for(int i=4;i<=maxn;i++)
	{
		long long tmp=c;
		//c=a+b+c;
		c=(a+b+c)%10000;
		a=b;
		b=tmp;
		
	}
   	cout<<c<<' ';
    return 0;
}
//4659

