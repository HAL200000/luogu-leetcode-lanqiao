#include <bits/stdc++.h>
using namespace std;
const int maxn=13;
int a[15],ans[15];
bool vis[15];
int sum;
inline void dfs(int now)
{
	if(now>12)
	{
		if(ans[1]+ans[2]==ans[3]&&ans[4]-ans[5]==ans[6]&&ans[7]*ans[8]==ans[9]&&ans[10]/ans[11]==ans[12]&&ans[10]%ans[11]==0) 
		{
			for(int i=1;i<13;i++) cout<<ans[i]<<' ';
			cout<<endl;
			sum++;	
		}
		return;
	}
	
	for(int i=1;i<=maxn;i++)
	{
		if(!vis[i])
		{
			vis[i]=1;
			ans[now]=a[i];
			dfs(now+1);
			vis[i]=0;
		}
	}
}

int main()
{
    for(int i=1;i<=maxn;i++) a[i]=i;
    dfs(1);
    cout<<sum;
    return 0;
}

