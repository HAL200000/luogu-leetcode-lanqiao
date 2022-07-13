#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int a[maxn],n,ans;
bool check(int mid)
{
	int cnt=0,tot=1;
	for(int i=a[1];i<=a[n];i+=mid)
	{
		if(i==a[tot])
		{
			cnt++;
			tot++;
		}
	}
	//cout<<mid<<' '<<cnt<<endl;
	if(cnt==n) return 1;
	return 0;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int l=1,r=a[n]-a[1];
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(check(mid))
		{
			ans=mid;
			l=mid+1;
		}
		else r=mid-1;
	}
	//cout<<ans<<endl;
    cout<<(a[n]-a[1])/ans+1;
    return 0;
}
/*
3
3 6 21
*/

