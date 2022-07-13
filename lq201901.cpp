#include <bits/stdc++.h>
using namespace std;
const int maxn=2019;
int main()
{

	long long ans=0;
	for(int i=1;i<=maxn;i++)
	{
		int tmp=i;
		while(tmp)
		{
			int now=tmp%10;
			if(now==2||now==0||now==1||now==9)
			{
				ans+=i*i;
				break;
			}
			tmp/=10;
		}
	}
    cout<<ans;
    return 0;
}
//2658417853

