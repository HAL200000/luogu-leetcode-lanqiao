#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+5,maxm=1e4;
int n,m,a[maxn],ans=maxn,L,R;
int cnt[maxm];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    int l=1,r=1,now=1;
    cnt[a[l]]=1;
    while(l<=r&&r<=n)
    {
        if(now==m)//种类数达到要求
        {
            if(ans>r-l+1)//区间更短就更新答案
            {
                ans=r-l+1;
                L=l;//记录达标区间
                R=r;
            }
            //踢出队头元素，队内元素种类数相应改变
            cnt[a[l]]--;
            if(cnt[a[l]]==0) now--;
            l++;
            
        }
        else
        {
            r++;//队伍向右加长，队内元素种类数相应改变
            cnt[a[r]]++;
            if(cnt[a[r]]==1) now++;
        }
    }
    cout<<L<<' '<<R;
    system("pause");
    return 0;
}
