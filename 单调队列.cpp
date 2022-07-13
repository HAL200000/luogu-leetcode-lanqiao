#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
struct node
{
	int val,id;//val记录值，id记录序号 
}a[maxn];
deque<node> q;//递增的单调队列，用来查询最小值 
deque<node> p;//递减的单调队列，用来查询最大值 
int n,k,w;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>w;
		a[i].id=i;
		a[i].val=w;
	}
    for(int i=1;i<=n;i++)
    {
    	while(!q.empty()&&q.front().id<=i-k) q.pop_front();//①从队头弹出已经不在窗口里的数 
		while(!q.empty()&&q.back().val >= a[i].val) q.pop_back();//②从队尾弹出>=x的数 
    	
    	
    	q.push_back(node{a[i].val,a[i].id});
    	if(i>=k) cout<<q.front().val<<' ';
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
    	while(!p.empty()&&p.front().id<=i-k) p.pop_front();//①从队头弹出已经不在窗口里的数 
		while(!p.empty()&&p.back().val<=a[i].val) p.pop_back();//②从队尾弹出<=x的数 
    	
    	
    	p.push_back(node{a[i].val,a[i].id});
    	if(i>=k) cout<<p.front().val<<' ';
    }
     
    return 0;
}


