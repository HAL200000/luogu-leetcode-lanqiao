#include <bits/stdc++.h>
using namespace std;
int n,m;
int dp[35][35];
int main()
{
    cin>>n>>m;
    dp[1][0]=1;

    for(int j=1;j<=m;j++)
        for(int i=1;i<=n;i++)
        {
            if(i==1) dp[i][j]=dp[n][j-1]+dp[i+1][j-1];
            else if(i==n) dp[i][j]=dp[i-1][j-1]+dp[1][j-1];
            else dp[i][j]=dp[i-1][j-1]+dp[i+1][j-1];
        }
    
    cout<<dp[1][m];
    system("pause");
    return 0;
}
