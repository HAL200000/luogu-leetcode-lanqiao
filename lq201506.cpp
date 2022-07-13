#include <bits/stdc++.h>
using namespace std;
int w,m,n;
int calx(int n)
{
    return n%w==0?n/w:n/w+1;
}
int caly(int n)
{
    if(calx(n)%2)
    {
        if(n%w==0) return w;
        else return n%w;
    }
    else
    {
        if(n%w==0) return 1;
        else return w-n%w+1;
    }
}
int main()
{
   while(cin>>w>>m>>n)
   { 
       cout<<abs(calx(n)-calx(m))+abs(caly(n)-caly(m))<<endl;
   }
   system("pause");
   return 0;
}
