
#include <bits/stdc++.h>
using namespace std;
int T,n;
const int maxn=1e6+5;
int a[maxn],ans,cnt[maxn];
int main()
{
    cin>>T;
    while(T--)
    {
        memset(cnt,0,sizeof(cnt));
        ans=0;
        cin>>n;
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        int l=1,r=1,flag=0;
        cnt[a[l]]=1;
        while(l<=r&&r<=n)
        {
            if(!flag)
            {
                ans=max(ans,r-l+1);
                r++;
                cnt[a[r]]++;
                if(cnt[a[r]]>=2) flag=1;
            }
            else
            {
                
                cnt[a[l]]--;
                if(cnt[a[l]]==1) flag=0;
                l++;
            }
            /*
            for(int i=1;i<=n;i++) cout<<cnt[i]<<' ';
            cout<<endl;
            cout<<l<<' '<<r<<endl;
            */
        }
        cout<<ans<<endl;
    
    system("pause");
    return 0;
}
