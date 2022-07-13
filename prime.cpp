#include <bits/stdc++.h>
using namespace std;
int m,n;
int main()
{
	scanf("%d %d",&m,&n);
	
	for(int i=m;i<=n;i++)
	{
		bool isprime=1;
		for(int j=2;j<i;j++)
		{
			if(i%j==0) 
			{
				isprime=0;
				break;
			}
		}
		if(isprime) printf("%d ",i);
	}
    
    return 0;
}


