#include <bits/stdc++.h>
using namespace std;
const long long maxn=2021041820210418;

long long a[1000005];
long long ans;
int cnt;
int main()
{
	for(int i=1;i<=sqrt(maxn);i++)
	{
		if(maxn%i==0) 
		{
			a[++cnt]=i;
			if(i*i<maxn) a[++cnt]=maxn/i;
		}
		
	}
    for(int i=1;i<=cnt;i++)
    	for(int j=1;j<=cnt;j++)
    	{
    		if(maxn%(a[i]*a[j])==0&&a[i]*a[j]<=maxn) 
    		{
    			cout<<a[i]<<' '<<a[j]<<' '<<maxn/(a[i]*a[j])<<endl;
    			ans++;
    		}
    	}
    			
    		
    cout<<ans;
    return 0;
}


