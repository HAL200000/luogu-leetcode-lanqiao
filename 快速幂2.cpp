#include <bits/stdc++.h>
using namespace std;
long long a,b,p;
int main()
{
	cin>>a>>b>>p;
	long long ans=1,base=a,bb=b;
	while(b)
	{
		if(b&1) ans*=base%p,ans%=p;
		base*=base%p,base%=p;
		b>>=1;		
	}
    printf("%lld^%lld mod %lld=%lld",a,bb,p,ans);
    return 0;
}


