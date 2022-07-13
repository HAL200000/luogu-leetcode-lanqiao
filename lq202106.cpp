#include <bits/stdc++.h>
using namespace std;
const int maxn=10;

vector<int> m[30];

int gcd(int a,int b)
{
	if(b==0) return a;
	gcd(b,a%b);
}
int ans;
bool vis[30];
void dfs(int s)
{
	
	for(int i=0;i<m[s].size();i++)
	{
		
		if(m[s][i]==1)
		{
			int flag=1;
			for(int i=1;i<=maxn;i++)
			{
				if(!vis[i]) 
				{
					flag=0;
					break;
				}
			}
			if(flag)
			{
				//cout<<s<<endl;
				ans++;
				
			}
		}
	}
	
	for(int i=0;i<m[s].size();i++)
	{
		int to=m[s][i];
		if(!vis[to])
		{
			vis[to]=1;
			dfs(to);
			
			vis[to]=0;
		}
	}
}

int main()
{
	for(int i=1;i<=maxn;i++)
		for(int j=i;j<=maxn;j++)
		{
			if(gcd(max(i,j),min(i,j))==1)
			{
				m[i].push_back(j);
				m[j].push_back(i);
			}
		}
	vis[1]=1;
    dfs(1);
    cout<<ans;
    return 0;
}


