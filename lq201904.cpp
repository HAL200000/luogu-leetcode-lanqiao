#include <bits/stdc++.h>
using namespace std;
const int maxn=100005;
int a[maxn];
int n;
int main()
{
	cin>>n;
	long long base=1,ans=1,h=1;
	long long cnt=0,tot=0,maxw=1e-9;//和有可能 
	//cnt:当前层权值和
	//tot：当前层已经计算了几个节点 
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		cnt+=a[i];
		tot++;
		if(tot==base)//一层遍历完，进行判定 
		{		
			//cout<<cnt<<endl;
			if(cnt>maxw)
			{
				maxw=cnt;
				ans=h;
			}
			
			h++;
			tot=0;
			base*=2;
			cnt=0;
			
		}
	}
    cout<<ans;
    return 0;
}


