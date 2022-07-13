#include <bits/stdc++.h>
using namespace std;
int base[4][4]={{0,0,0,0},{0,0,0,1},{0,1,0,0},{0,0,1,1}};
int I[4][4]={{0,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
const int mod=1e9+7;
int T,n;
long long a[4][4],tmp[4][4],now[4][4];
//对比快速幂 ：now相当于ans，ans初始是1，now初始则是单位数组I
//a相当于base，每次都要更新 
void ksm(int n)
{
	
	while(n)
	{
		memset(tmp,0,sizeof(tmp));//tmp数组暂存结果，这样不会影响到后面的计算 
	
		if(n&1) 
		{
			for(int i=1;i<=3;i++)
				for(int j=1;j<=3;j++)
					for(int k=1;k<=3;k++)
					{
						tmp[i][j]+=now[i][k]*a[k][j];//矩阵乘（ans*=base） 
						tmp[i][j]%=mod; 
					}
						
			
			for(int i=1;i<=3;i++)
				for(int j=1;j<=3;j++) now[i][j]=tmp[i][j];//更新ans 
		}
		
	
		memset(tmp,0,sizeof(tmp));
		
		for(int i=1;i<=3;i++)
				for(int j=1;j<=3;j++)
					for(int k=1;k<=3;k++)
					{
						tmp[i][j]+=a[i][k]*a[k][j];//（base*=base） 
						tmp[i][j]%=mod;
					}
			
		for(int i=1;i<=3;i++)
			for(int j=1;j<=3;j++) a[i][j]=tmp[i][j];//更新base 
					
			
		n>>=1;
		
	}
}

int main()
{
	cin>>T;
	while(T--)
	{
		cin>>n;
		
		for(int i=1;i<=3;i++)	
			for(int j=1;j<=3;j++) a[i][j]=base[i][j];
			
		for(int i=1;i<=3;i++)	
			for(int j=1;j<=3;j++) now[i][j]=I[i][j];
			
		if(n<=3) cout<<1<<endl;
		else
		{
			ksm(n-3);
			cout<<(now[1][3]+now[2][3]+now[3][3])%mod<<endl;
		}	
		
		
	}
    
    return 0;
}


