#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int a[maxn],b[maxn],ans,n,boy,girl;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) 
    {
        scanf("%d",&a[i]);
        if(a[i]==0) girl++;
        if(a[i]==1) boy++;
        b[i]=boy-girl;
    }
    for(int i=0;i<=n;i++)
        for(int j=i+ans;j<=n;j++)
        {
            if(b[i]==b[j]) ans=max(ans,j-i);
        }
    cout<<ans;
    system("pause");
    return 0;
}
