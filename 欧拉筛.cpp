#include <bits/stdc++.h>
using namespace std;
int n,q,cnt,a;
const int maxn=1e8+5;
int prime[maxn];
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
    	scanf("%d",&a);
    	printf("%d\n",prime[a]);
    }
    return 0;
}


