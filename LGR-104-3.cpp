#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int line[105];
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) cin>>a[i][j];
    if(m==2)
    {
        bool can_reverse=1;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i][1]==1&&a[i][2]==2) continue;
            else if(a[i][1]==2&&a[i][2]==1)
            {
                ans++;
                line[ans]=i;
            }
            else can_reverse=0;
        }
        if(can_reverse)
        {
            cout<<"Yes"<<endl<<ans<<endl;
            for(int i=1;i<=ans;i++) cout<<0<<' '<<line[i]<<endl;
        }
        else cout<<"No"<<endl;
    }
    system("pause");
    return 0;
}
