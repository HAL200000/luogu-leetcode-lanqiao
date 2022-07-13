#include <bits/stdc++.h>
using namespace std;
int n,m;
struct node
{
    int name;
    int from,to;
}a[105];

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        a[i].name=i;
        a[i].from=i-1;
        a[i].to=i+1;
    }
    a[1].from=n;
    a[n].to=1;
    int now=1,cnt=0,tot=0;
    
        for(int i=now;;i=a[i].to)
        {
            tot++;
            if(tot==m)
            {
                int front=a[i].from,next=a[i].to;
                a[front].to=next;
                a[next].from=front;
                cout<<a[i].name<<' ';
                now=next;
                tot=0;
                cnt++;
                if(cnt==n) break;
                //cout<<now<<' ';
            }
        }
    
        
    
    system("pause");
    return 0;
}
