#include <bits/stdc++.h>
using namespace std;
int ans; 
void dfs(int i,int j)
{
	if(i>13||j>13) return;
	if(j==13) 
	{
		ans++;
		return;
	}
	dfs(i+1,j);
	dfs(i+1,j+1);
	dfs(i+1,j+2);
	dfs(i+1,j+3);
	dfs(i+1,j+4);
}
int main()
{
	dfs(0,0);
    cout<<ans;
    return 0;
}


