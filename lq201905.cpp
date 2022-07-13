#include <bits/stdc++.h>
using namespace std;
const int maxn=100005;
int n,m,T;
vector<int>t[maxn];
struct shop
{
	int point;
	bool isin,flag;
}s[maxn];

int ans;
int main()
{
	cin>>n>>m>>T;
	for(int i=1;i<=m;i++) 
	{
		int time,id;
		scanf("%d %d",&time,&id);
		t[time].push_back(id);
	}
	
	for(int i=1;i<=T;i++)
	{
		for(int j=0;j<t[i].size();j++)
		{
			int now=t[i][j];
			s[now].point+=2;
			s[now].flag=1;
		}
		for(int j=1;j<=n;j++)
		{
			if(s[j].point-1>=0) 
			{
				if(!s[j].flag) s[j].point--;
				s[j].flag=0;
			}
			if(!s[j].isin&&s[j].point>5) s[j].isin=1;
			if(s[j].isin&&s[j].point<=3) s[j].isin=0;
		}
		//for(int j=1;j<=n;j++) cout<<s[j].point<<' ';
		//cout<<endl;
	}
    for(int i=1;i<=n;i++) if(s[i].isin) ans++;
    cout<<ans;
    return 0;
}


