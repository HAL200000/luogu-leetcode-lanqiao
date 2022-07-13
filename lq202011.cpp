#include <bits/stdc++.h>
using namespace std;
int n,ans,sum,r,down;
int a[105][105];
bool check(int x)
{
	if(x>=1&&x<=n) return 1;
	return 0;
}
void dfs(int x,int y)
{
	if(!check(x)||!check(y)) return;
	if(x==n)
	{
		if(abs(r-down)<=1&&sum>ans) ans=sum;
		//cout<<sum<<endl;
		return; 
	}
	down++;
	//cout<<'D'<<endl;
	sum+=a[x+1][y];
	dfs(x+1,y);
	down--;
	sum-=a[x+1][y];
	
	r++;
	//cout<<'R'<<endl;
	sum+=a[x+1][y+1];
	dfs(x+1,y+1);
	r--;
	sum-=a[x+1][y+1];
}

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++) cin>>a[i][j];
	sum=a[1][1];
	dfs(1,1);
    cout<<ans;
    return 0;
}


