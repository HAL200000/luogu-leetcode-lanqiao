#include <bits/stdc++.h>
using namespace std;
const int maxn=2019;
int ans;
bool include(int x)
{
	while(x)
	{
		if(x%10==2||x%10==4) return 1;
		x/=10;
	}
	return 0;
}

int main()
{
	for(int i=1;i<=maxn;i++)
		for(int j=i+1;j<=maxn;j++)
			for(int k=j+1;k<=maxn;k++)
			{
				int a=i,b=j,c=k;
				if(!include(a)&&!include(b)&&!include(c)&&a+b+c==2019&&i!=j&&j!=k) ans++;
			}
    cout<<ans;
    return 0;
}


