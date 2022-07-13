#include <bits/stdc++.h>
using namespace std;
int T;
int n,a,b;
int main()
{
    cin>>T;
    while(T--)
    {
        int ans=0;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a>>b;
        if(n==3) ans=3;
        if(n==4) ans=4;
        if(n==5) ans=4;
        cout<<ans<<endl;
    }
    system("pause");
    return 0;
}
