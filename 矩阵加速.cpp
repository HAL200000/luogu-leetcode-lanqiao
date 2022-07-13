#include <bits/stdc++.h>
using namespace std;
int base[4][4]={{0,0,0,0},{0,0,0,1},{0,1,0,0},{0,0,1,1}};
int I[4][4]={{0,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
const int mod=1e9+7;
int T,n;
long long a[4][4],tmp[4][4],now[4][4];
//�Աȿ����� ��now�൱��ans��ans��ʼ��1��now��ʼ���ǵ�λ����I
//a�൱��base��ÿ�ζ�Ҫ���� 
void ksm(int n)
{
	
	while(n)
	{
		memset(tmp,0,sizeof(tmp));//tmp�����ݴ�������������Ӱ�쵽����ļ��� 
	
		if(n&1) 
		{
			for(int i=1;i<=3;i++)
				for(int j=1;j<=3;j++)
					for(int k=1;k<=3;k++)
					{
						tmp[i][j]+=now[i][k]*a[k][j];//����ˣ�ans*=base�� 
						tmp[i][j]%=mod; 
					}
						
			
			for(int i=1;i<=3;i++)
				for(int j=1;j<=3;j++) now[i][j]=tmp[i][j];//����ans 
		}
		
	
		memset(tmp,0,sizeof(tmp));
		
		for(int i=1;i<=3;i++)
				for(int j=1;j<=3;j++)
					for(int k=1;k<=3;k++)
					{
						tmp[i][j]+=a[i][k]*a[k][j];//��base*=base�� 
						tmp[i][j]%=mod;
					}
			
		for(int i=1;i<=3;i++)
			for(int j=1;j<=3;j++) a[i][j]=tmp[i][j];//����base 
					
			
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


