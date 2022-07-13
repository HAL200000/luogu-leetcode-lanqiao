#include <bits/stdc++.h>
using namespace std;
int q,n,x;
int a[100005],b[100005];
stack<int>s;

int main()
{
   cin>>q;
   while(q--)
   {
      cin>>n;
      for(int i=1;i<=n;i++) scanf("%d",&a[i]);
      for(int i=1;i<=n;i++) scanf("%d",&b[i]);
      int cnt=1;
      for(int i=1;i<=n;i++)
      {
         s.push(a[i]);
         while(s.top()==b[cnt])
         {
            s.pop();
            cnt++;
            if(s.empty()) break;
         }
         
      }
      if(s.empty()) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
      while(!s.empty()) s.pop();
   }
   system("pause");
   return 0;
}
