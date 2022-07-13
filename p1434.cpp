#include <bits/stdc++.h>
using namespace std;
int r,c,ans;
int a[105][105],b[105][105];
inline int dfs(int i,int j)
{
    if(b[i][j]) return b[i][j];
    b[i][j]=1;

    if(i+1<=r&&a[i][j]>a[i+1][j])
    {
        b[i][j]=max(b[i][j],dfs(i+1,j)+1);
    }
    if(i-1>=1&&a[i][j]>a[i-1][j])
    {
        b[i][j]=max(b[i][j],dfs(i-1,j)+1);
    }
    if(j+1<=c&&a[i][j]>a[i][j+1])
    {
        b[i][j]=max(b[i][j],dfs(i,j+1)+1);
    }
    if(j-1>=1&&a[i][j]>a[i][j-1])
    {
        b[i][j]=max(b[i][j],dfs(i,j-1)+1);
    }
    return b[i][j];
}
int main()
{
    cin>>r>>c;
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++) scanf("%d",&a[i][j]);
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++) 
            ans=max(ans,dfs(i,j));
            
        
    cout<<ans;
    system("pause");
    return 0;
}
