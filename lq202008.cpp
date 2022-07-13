#include <bits/stdc++.h>
using namespace std;
int n;
int maxx,minx=1e9;
double sum;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		sum+=a;
		maxx=max(maxx,a);
		minx=min(minx,a);
	}
	printf("%d\n%d\n%.2lf\n",maxx,minx,sum/n);
    return 0;
}


