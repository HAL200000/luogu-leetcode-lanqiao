#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
string s1,s2;
int nxt[maxn*2];
int main()
{
    cin>>s1>>s2;
    int l1=s1.length(),l2=s2.length();
    s2=s2+'#'+s1;
    int le=s2.length();
    for(int i=1;i<le;i++)
    {
        int j=nxt[i-1];
        while(s2[i]!=s2[j]&&j) j=nxt[j-1];
        if(s2[i]==s2[j]) j++;
        nxt[i]=j;
    }
    for(int i=0;i<le;i++)
    {
        if(nxt[i]==l2) cout<<i-2*l2+1<<endl;
    }
    for(int i=0;i<l2;i++) cout<<nxt[i]<<' ';
    system("pause");
    return 0;
}
