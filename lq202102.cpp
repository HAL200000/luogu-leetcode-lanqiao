#include <bits/stdc++.h>
using namespace std;
long long ans;
const int maxx=20,maxy=21;
struct node
{
	double k,b;
}line[1000005];
int cnt=1;
int main()
{
	for(int x1=0;x1<maxx;x1++)
		for(int y1=0;y1<maxy;y1++)
			for(int x2=0;x2<maxx;x2++)
				for(int y2=0;y2<maxy;y2++)
				{
					if(x1==x2) continue;
					double k1=double(y2-y1)/(x2-x1);
					double b1=y1-k1*x1;
				
					bool flag=1;
					for(int i=1;i<=cnt;i++)
					{
						
						if(fabs(k1-line[i].k)<1e-6&&fabs(b1-line[i].b)<1e-6)
						{
							
							flag=0;
							break;
						}
					}
					if(flag)
					{
						line[cnt].k=k1;
						line[cnt].b=b1;
						cout<<k1<<' '<<b1<<endl;
						cnt++;
					}
				}
    cout<<cnt+maxx;
    return 0;
}


