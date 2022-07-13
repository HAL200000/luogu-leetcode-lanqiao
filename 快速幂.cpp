#include <bits/stdc++.h>
using namespace std;
long long a,b,p; 

long long ksm(long long a,long long b)
{
	long long base=a,ans=1;
	
	while(b)
	{
		if(b&1) 
		{
			ans*=base;
			ans%=p;
		}
		base*=base;
		base%=p;
		b>>=1;
		
	}
	
	return ans%p;
}

int main()
{
	cin>>a>>b>>p;
	printf("%lld^%lld mod %lld=%lld",a,b,p,ksm(a,b));
    
    return 0;
}


