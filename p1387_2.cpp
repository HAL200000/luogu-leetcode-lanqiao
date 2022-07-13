#include <bits/stdc++.h>
using namespace std;
const int maxn=105;
int a[maxn][maxn],n,m,ans;
int f[maxn][maxn];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) cin>>a[i][j];
    for(int i=1;i<=n;i++) 
        for(int j=1;j<=m;j++) f[i][j]=f[i-1][j]+f[i][j-1]+a[i][j]-f[i-1][j-1];
    for(int k=1;k<=min(n,m);k++)
    {
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                if(i-k>0&&j-k>0)
                {   
                    if(k*k==f[i][j]-f[i-k][j]-f[i][j-k]+f[i-k][j-k]) 
                    {
                        
                        ans=max(ans,k);
                    }
                }
            }
    }

    cout<<ans;
    system("pause");
    return 0;
    
}
