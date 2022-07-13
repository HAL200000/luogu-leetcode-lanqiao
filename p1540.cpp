#include <bits/stdc++.h>
using namespace std;
int m,n,ans;
bool a[1005];
queue<int> q;
int main()
{
   cin>>m>>n;
   for(int i=1;i<=n;i++)
   {
       int now;
       cin>>now;
       if(q.size()<m) 
       {
           
           if(!a[now])
           {
               q.push(now);
               a[now]=1;
               ans++;
           }
           
       }
       
       else
       {
           if(!a[now])
           {
                int fr=q.front();
                a[fr]=0;
                q.pop();
                q.push(now);
                a[now]=1;
                ans++;
           } 
           
       }
       
   }
   cout<<ans<<endl;
   system("pause");
   return 0;
}

