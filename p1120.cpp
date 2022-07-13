#include <bits/stdc++.h>
using namespace std;
int a[70],n,sum,flag,num,length;
bool vis[70];
bool cmp(int a,int b)
{
    return a>b;
}
void dfs(int k,int now,int len)
{
    if(flag) return;

    if(k==num&&len==length) 
    {
        flag=1;
        cout<<length;
        return;
    }
    if(len==length) dfs(k+1,1,0);
    for(int i=now;i<=n;i++)
    {
        if(!vis[i]&&len+a[i]<=length)
        {
            vis[i]=1;
            dfs(k,i+1,len+a[i]);
            vis[i]=0;
            if(len==0||len+a[i]==length) return;
            while(a[i]==a[i+1]) i++;
        }
    }

}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i],sum+=a[i];
    sort(a+1,a+n+1,cmp);
    for(int i=a[1];i<=sum/2;i++)
    {
        if(sum%i) continue;
        num=sum/i,length=i;
        dfs(1,1,0);
    }
    if(!flag) cout<<sum;
    system("pause");
    return 0;
}

/*
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int n,a[70],sum,ans,g,flag;
bool used[70];
bool cmp(int x,int y)
{
	return x>y;
}
inline void dfs(int now,int len,int last)//正在拼第几根,正在拼的一根的长度 
{
	if(flag) return;
	if(now==g&&len==ans)
	{
		cout<<ans<<endl;
		flag=1;
		return;
	}
	if(len==ans) 
	{
		dfs(now+1,0,1); 	
	}
	for(int i=last;i<=n;i++)
	{
		if(!used[i]&&len+a[i]<=ans)
		{
			used[i]=1;
			dfs(now,len+a[i],i+1);//强优化1 
			//失败后我们要干嘛 
			used[i]=0;
			if(len==0||len+a[i]==ans) return;//强优化2 
			while(a[i+1]==a[i]) i++;//优化 
		}
	}																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															
}
int main()
{
		cin>>n;
		flag=0;
		int cnt=0,t;
		sum=0;
		memset(used,0,sizeof(used));
		for(int i=1;i<=n;i++)
		{
			cin>>t;
			if(t>50) continue;
			a[++cnt]=t;
			sum+=a[cnt]; 
		} 
		n=cnt;//更新n 
		
		sort(a+1,a+1+n,cmp);
		for(ans=a[1];ans<=sum/2;ans++)
		{
			if(sum%ans) continue;
			g=sum/ans;
			dfs(1,0,1);
		}
		if(!flag) cout<<sum;
		return 0;
}
*/