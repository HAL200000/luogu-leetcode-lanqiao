#include <bits/stdc++.h>
using namespace std;
int card[10];
int main()
{
	for(int i=0;i<10;i++) card[i]=2021;
	int cnt=1,ans=0;
	while(1)
	{
		int tmp=cnt;
		
		while(tmp)
		{
			card[tmp%10]--;
			tmp/=10;
		}
		int flag=0;
		for(int i=0;i<10;i++) 
		{
			if(card[i]<0) flag=1;
		}
		if(flag) break;
		cnt++;
	}
    cout<<cnt<<endl;
    return 0;
}


