#include <bits/stdc++.h>
using namespace std;
int ans;
const int maxn=2020;
int main()
{

    for(int i=1;i<=maxn;i++)
    {
    	int tmp=i;
    	while(tmp)
    	{
    		int now=tmp%10;
    		if(now==2) ans++;
    		tmp/=10;
    	}
    }
    cout<<ans;
    return 0;
}



