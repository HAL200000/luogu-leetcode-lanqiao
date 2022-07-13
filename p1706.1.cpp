#include <bits/stdc++.h>
using namespace std;
int n,tot;
int a[15],vis[15];
void dfs()
{
    if(tot==n)
    {
        for(int i=1;i<=n;i++) cout<<"    "<<a[i];
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            a[++tot]=i;
            dfs();
            vis[i]=0;
            tot--;
        }
    }
}
int main()
{
    cin>>n;
    dfs();
    system("pause");
    return 0;
}
