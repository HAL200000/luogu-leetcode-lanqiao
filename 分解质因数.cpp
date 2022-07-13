#include <bits/stdc++.h>
using namespace std;
const int maxn=10005;
bool isprime[maxn];
int prime[maxn];
int cnt,a,b;
void ola()
{
	memset(isprime,1,sizeof(isprime));
	for(int i=2;i<=maxn;i++)
	{
		if(isprime[i]) prime[++cnt]=i;
		for(int j=1;j<=cnt&&i*prime[j]<maxn;j++)
		{
			isprime[i*prime[j]]=0;
			if(i%prime[j]==0) break;
		}
	}
}
int main()
{
	cin>>a>>b;
	ola();
    for(int i=a;i<=b;i++)
    {
    	int now=i;
    	cout<<i<<'=';
    	while(now!=1)
    	{
    		for(int j=1;j<=cnt;j++)
    		{
    			if(now%prime[j]==0)
    			{
    				cout<<prime[j];
    				if(now/prime[j]!=1) cout<<'*';
    				
    				now/=prime[j];
    				break;
    			}
    			
    		}
    	}
    	cout<<endl;
    }
    return 0;
}


