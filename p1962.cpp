#include <bits/stdc++.h>
using namespace std;
long long n;
long long classic[3][3]={{1,1,0},{0,0,1},{1,0,0}};
long long a[3][3],base[3][3];
const int mod=1e9+7;
int t;
long long fastpow(long long n)
{
    while(n)
    {
        long long tmp[3][3];
        memset(tmp,0,sizeof(tmp));
        if(n&1)
        {
            
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    for(int k=0;k<=2;k++) tmp[i][j]+=a[i][k]*base[k][j]%mod;

            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++) a[i][j]=tmp[i][j]%mod;
        }
        n>>=1;
        memset(tmp,0,sizeof(tmp));
        for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    for(int k=0;k<=2;k++) tmp[i][j]+=base[i][k]*base[k][j]%mod;

        for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++) base[i][j]=tmp[i][j]%mod;
        
    }
    return (a[0][0]+a[2][0]+a[1][0])%mod;
}

int main()
{
    
    cin>>t;
    while(t--)
    {
        for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++) base[i][j]=classic[i][j]%mod;
        for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++) a[i][j]=classic[i][j]%mod;
        cin>>n;
        if(n<=3) cout<<1<<endl;
        else cout<<fastpow(n-4)%mod<<endl;
        
        
    }
    
    system("pause");
    return 0;
}
