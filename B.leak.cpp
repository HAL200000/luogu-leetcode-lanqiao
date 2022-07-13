#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int S,H,n;
double h[maxn],v[maxn],sum[maxn],timme;
int main()
{
    cin>>S>>H>>n;
    for(int i=1;i<=n;i++)
    {
       cin>>h[i]>>v[i];
    }
    int tot=0;
    for(int i=n;i>=1;i--) 
    {
        sum[++tot]+=v[i]+sum[tot-1];
        
        while(h[i]==h[i-1])
        {
            sum[tot]+=v[i-1];
            i--;
        }
    }
    //for(int i=1;i<=n;i++) cout<<sum[i]<<' ';
    for(int i=1;i<=n;i++)
    {
        if(h[i]==h[i-1]&&h[i]) continue;
        timme+=(H-h[i])*S/sum[tot];
        H=h[i];
        tot--;
        //cout<<timme<<endl;
    }
    cout<<timme;
   system("pause");
   return 0;
}
/*
5 10
4
6 2
6 3
4 1
4 2
*/