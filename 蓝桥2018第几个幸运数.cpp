#include <bits/stdc++.h>
using namespace std;
const long long maxn=59084709587505;
long long cnt=0;
int a[3]={3,5,7};
priority_queue<long long,vector<long long>,greater<long long> >q;
map<long long,int>m;
int main()
{
	q.push(1);
	while(1)
	{
		long long now=q.top();
		q.pop();
		if(now==maxn)
		{
			cout<<cnt;
			return 0;
		}
		for(int i=0;i<3;i++)
		{
			if(!m.count(a[i]*now))
			{
				q.push(a[i]*now);
				m[a[i]*now]=1;
			}
		}
		cnt++;
	}
    return 0;
}


