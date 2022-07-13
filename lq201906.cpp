#include <bits/stdc++.h>
using namespace std;
const int maxn=100005;
bool show[maxn*10];
int a[maxn];
int n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	
	show[a[1]]=1;
	for(int i=2;i<=n;i++)
	{
		while(show[a[i]]) a[i]++;
		show[a[i]]=1;
	}
    for(int i=1;i<=n;i++) cout<<a[i]<<' ';
	return 0;
}


