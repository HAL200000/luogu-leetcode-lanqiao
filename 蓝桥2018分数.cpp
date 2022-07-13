#include <bits/stdc++.h>
using namespace std;
const int maxn=20;
long long a,b;
int main()
{
	long long base=1;
	for(int i=1;i<=maxn;i++) base*=2;
    cout<<base-1<<'/'<<base/2;
    return 0;
}


