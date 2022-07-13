#include <bits/stdc++.h>
using namespace std;
const int maxn=1e8+5;
int n,q,k,prime[maxn],cnt;
bool isprime[maxn]; 
int main()
{

	cin>>n>>q;
	memset(isprime,1,sizeof(isprime));
	for(int i=2;i<=n;i++)
	{
		if(isprime[i]) prime[++cnt]=i;
		for(int j=1;j<=cnt&&i*prime[j]<=n;j++)
		{
			isprime[i*prime[j]]=0;
			if(i%prime[j]==0) break;
		}
	}
    for(int i=1;i<=q;i++)
    {
    	cin>>k;
    	cout<<prime[k]<<endl;
    }
    return 0;
}


