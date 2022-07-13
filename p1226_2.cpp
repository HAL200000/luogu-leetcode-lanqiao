#include <bits/stdc++.h>
using namespace std;
int a,b,p;
void ksm(int base,int n)
{
    int ans=1;
    while(n)
    {
        if(n&1) 
        {
            ans*=base;
            ans%=p;
        }
        base*=base;
        base%=p;
        n>>=1;
    }
    cout<<ans%p;
}
int main()
{
    cin>>a>>b>>p;
    ksm(a,b);
    system("pause");
    return 0;
}
