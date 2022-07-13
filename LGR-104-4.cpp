#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int T;
int n,a,b;
struct node
{
    int x,y;
}point[maxn];
bool init(int now)
{
    int cntx=0,cnty=0;
    int nowx=point[now].x,nowy=point[now].y;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j||i==now||j==now) continue;
            if(point[i].x<=nowx&&point[j].x>=nowx) cntx++;
            if(point[i].y<=nowy&&point[j].y>=nowy) cnty++;
        }
    }
    if(cntx>=n-2&&cnty>=n-2) return 1;
    return 0;
}
int main()
{
    cin>>T;
    while(T--)
    {
        int ans=0;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>point[i].x>>point[i].y;
        if(n<=2) ans=1;
        else if(n==3) ans=3;
        else
        {
            ans=n;
            for(int i=1;i<=n;i++)
            {
                if(init(i)) 
                {
                    cout<<i<<' ';
                    ans--;
                }
            }
        }
        cout<<ans<<endl;;
    }
    system("pause");
    return 0;
}
/*
1
5
-1 1
0 0
1 2
-1 -2
2 -1
*/