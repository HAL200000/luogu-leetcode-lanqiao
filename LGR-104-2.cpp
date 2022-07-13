#include <bits/stdc++.h>
using namespace std;
long long n,a,b,c;
long long ans;
int main()
{
    cin>>n;
    cin>>a>>b>>c;
    if(c<n) ans=2*n-1;
    else 
    {
        long long l=b-a+1;
        ans=min(l+2*(c-n+1),l*2)+n-l+n-1;
    }
    cout<<ans;
    system("pause");
    return 0;
}
