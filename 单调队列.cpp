#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
struct node
{
	int val,id;//val��¼ֵ��id��¼��� 
}a[maxn];
deque<node> q;//�����ĵ������У�������ѯ��Сֵ 
deque<node> p;//�ݼ��ĵ������У�������ѯ���ֵ 
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
    	while(!q.empty()&&q.front().id<=i-k) q.pop_front();//�ٴӶ�ͷ�����Ѿ����ڴ�������� 
		while(!q.empty()&&q.back().val >= a[i].val) q.pop_back();//�ڴӶ�β����>=x���� 
    	
    	
    	q.push_back(node{a[i].val,a[i].id});
    	if(i>=k) cout<<q.front().val<<' ';
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
    	while(!p.empty()&&p.front().id<=i-k) p.pop_front();//�ٴӶ�ͷ�����Ѿ����ڴ�������� 
		while(!p.empty()&&p.back().val<=a[i].val) p.pop_back();//�ڴӶ�β����<=x���� 
    	
    	
    	p.push_back(node{a[i].val,a[i].id});
    	if(i>=k) cout<<p.front().val<<' ';
    }
     
    return 0;
}


