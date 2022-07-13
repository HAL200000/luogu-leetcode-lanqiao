#include <bits/stdc++.h>
using namespace std;
const int maxn=1200000;
int main()
{
	int ans=0;
	for(int i=1;i<=maxn;i++) 
	{
		if(maxn%i==0) ans++;
	}
    cout<<ans;
    //96 
    return 0;
}


