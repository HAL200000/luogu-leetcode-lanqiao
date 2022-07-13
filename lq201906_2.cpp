#include <bits/stdc++.h>
using namespace std;
const int maxn=100005;
int f[maxn*10];
int a[maxn],n;

int find(int x)
{
	if(f[x]==x) return f[x];
	return f[x]=find(f[x]);
}

int main()
{
	cin>>n;
	for(int i=1;i<=maxn*10;i++) f[i]=i;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		int root=find(a[i]);

		a[i]=root;
		
		f[root]=find(root+1);
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<' ';
    return 0;
}


