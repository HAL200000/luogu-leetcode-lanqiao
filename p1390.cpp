#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long n,k,ans[105][105],base[105][105];
void fastpow(long long x)
{
    while(x)
    {
        long long tmp[105][105];//用了一个额外的矩阵来临时存放结果，否则矩阵自乘时可能会出错
        memset(tmp,0,sizeof(tmp));//临时矩阵清零
        if(x&1)
        {
            
            for(int i=1;i<=n;i++)   
                for(int j=1;j<=n;j++)
                    for(int k=1;k<=n;k++)   tmp[i][j]+=ans[i][k]*base[k][j]%mod;//矩阵乘法

            for(int i=1;i<=n;i++)   
                for(int j=1;j<=n;j++) ans[i][j]=tmp[i][j]%mod;
            
        }
        x>>=1;

        memset(tmp,0,sizeof(tmp));//临时矩阵清零
        for(int i=1;i<=n;i++)   
                for(int j=1;j<=n;j++)
                    for(int k=1;k<=n;k++)   tmp[i][j]+=base[i][k]*base[k][j]%mod;

        for(int i=1;i<=n;i++)   
                for(int j=1;j<=n;j++) base[i][j]=tmp[i][j]%mod;
    }
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) 
        for(int j=1;j<=n;j++) cin>>base[i][j],ans[i][j]=base[i][j];

    fastpow(k-1);

    for(int i=1;i<=n;i++) 
    {
        for(int j=1;j<=n;j++) cout<<ans[i][j]%mod<<' ';
        cout<<endl;
    }
    system("pause");
    return 0;
}
