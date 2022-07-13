#include <bits/stdc++.h>
using namespace std;
const int maxn=1e4+5,maxm=2*1e5+5;
int n,m,x,y,z;
int f[maxn],size[maxn];
int find(int x)
{
    if(f[x]!=x) f[x]=find(f[x]);
    return f[x];
}
void unite(int x,int y)
{
    int fx=find(x),fy=find(y);
    if(fx==fy) return;
    if(size[fx]<=size[fy])//x所在的子树更小，把x连到y上去
    {
        f[fx]=fy;
        size[fy]+=size[fx];
    }
    else//反之
    {
        f[fy]=fx;
        size[fx]+=size[fy];
    }
}
int main()
{
    cin>>n>>m;
    memset(size,1,sizeof(size));
    for(int i=1;i<=n;i++) f[i]=i;

    for(int i=1;i<=m;i++)
    {
        cin>>z>>x>>y;
        if(z==1) unite(x,y);
        else 
        {
            if(find(x)==find(y)) cout<<"Y"<<endl;
            else cout<<"N"<<endl;
        }
        
        
    }
    system("pause");
    return 0;
}
