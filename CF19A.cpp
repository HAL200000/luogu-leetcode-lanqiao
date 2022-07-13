#include <bits/stdc++.h>
using namespace std;
int n,a,b;
map <string,int> score;
map <string,int> win;
map <string,int> goal;
struct node
{
   string name;
   int score,win,goal;
}team[55];
bool cmp(node x,node y)
{
   if(x.score==y.score)
   {
      if(x.win==y.win) 
      {
         return x.goal>y.goal;
      }
      return x.win>y.win;
   }
   return x.score>y.score;
}
string ans[55];
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++) cin>>team[i].name;
   for(int i=1;i<=n*(n-1)/2;i++)
   {
      string temp,x,y;
      cin>>temp;
      int cnt=0;
      while(temp[cnt]!='-')
      {
         x+=temp[cnt];
         cnt++;
      }
      cnt++;
      while(cnt!=temp.length()) 
      {
         y+=temp[cnt];
         cnt++;
      }
      scanf("%d:%d",&a,&b);
      //cout<<x<<y<<a<<b<<endl;
      if(a>b)
      {
         score[x]+=3;
         win[x]+=a-b;
         goal[x]+=a;

         win[y]-=a-b;
         goal[y]+=b;
      }
      if(a==b)
      {
         score[x]+=1;
         goal[x]+=a;

         score[y]+=1;
         goal[y]+=b;
      }
      if(a<b)
      {
         
         win[x]-=b-a;
         goal[x]+=a;

         score[y]+=3;
         win[y]+=b-a;
         goal[y]+=b;
      }
   }
   for(int i=1;i<=n;i++)
   {
      string now=team[i].name;
      //cout<<score[now]<<' '<<win[now]<<' '<<goal[now]<<endl;
   }
   for(int i=1;i<=n;i++)
   {
      string now=team[i].name;
      team[i].score=score[now];
      team[i].win=win[now];
      team[i].goal=goal[now];
   }
   sort(team+1,team+n+1,cmp);
   for(int i=1;i<=n/2;i++) ans[i]=team[i].name;
   sort(ans+1,ans+n/2+1);
   for(int i=1;i<=n/2;i++) cout<<ans[i]<<endl;
   //system("pause");
   return 0;
}
