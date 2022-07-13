#include <bits/stdc++.h>
using namespace std;
const long long maxn=1000000007,maxm=999999999;
int main()
{
	for(long long i=1;i<=maxn;i++)
	{
		if(i*2021%maxn==maxm) 
		{
			cout<<i;
			break;
		}
	}
    
    return 0;
}


