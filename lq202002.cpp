#include <bits/stdc++.h>
using namespace std;
const int maxn=2020;
int ans;
inline int gcd(int a,int b)
{
	if(b==0) return a;
	gcd(b,a%b);
}
int main()
{
	for(int i=1;i<=maxn;i++) 
		for(int j=1;j<=maxn;j++) 
		{
			if(gcd(max(i,j),min(i,j))==1) ans++; 
		}
		
	cout<<ans;
    
    return 0;
}
//2481215

