#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long n,k,ans[105][105],base[105][105];

void fastpow(int x)
{
    while(x)
    {
        long long tmp[105][105];
        memset(tmp,0,sizeof(tmp));
        if(x&1)
        {
            for(int i=1;i<=n;i++)   
                for(int j=1;j<=n;j++)
                    for(int k=1;k<=n;k++)   tmp[i][j]+=ans[i][k]*base[k][j]%mod;
            for(int i=1;i<=n;i++)   
                for(int j=1;j<=n;j++) ans[i][j]=tmp[i][j]%mod;
            x>>=1;
        }
        memset(tmp,0,sizeof(tmp));
        for(int i=1;i<=n;i++)   
                for(int j=1;j<=n;j++)
                    for(int k=1;k<=n;k++)   tmp[i][j]+=base[i][k]*base[k][j]%mod;
    }
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) 
        for(int j=1;j<=n;j++) cin>>base[i][j];
    memset(ans,1,sizeof(ans));

    fastpow(k);
    for(int i=1;i<=n;i++) 
    {
        for(int j=1;j<=n;j++) cout<<ans[i][j];
        cout<<endl;
    }
    system("pause");
    return 0;
}
