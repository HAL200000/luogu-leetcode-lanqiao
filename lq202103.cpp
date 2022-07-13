#include <bits/stdc++.h>
using namespace std;
//const long long maxn=2021041820210418;
const long long maxn=30;
long long ans;
inline void dfs(long long a,long long b)
{
	if(maxn%a!=0||maxn%b!=0) return;
	if(maxn%(a*b)==0)
	{
		cout<<a<<' '<<b<<' '<<maxn/(a*b)<<endl;
		ans++;
		//return;
	}
	dfs(a+1,b);
	dfs(a,b+1);
}

int main()
{
	dfs(1,1);
    cout<<ans;
    return 0;
}


