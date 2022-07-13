#include <bits/stdc++.h>
using namespace std;
int vs[5][5]={{0,-1,1,1,-1},{1,0,-1,1,-1},{-1,1,0,-1,1},{-1,-1,1,0,1},{1,1,-1,-1,0}};
int na,nb,n,ansa,ansb,tota,totb;
int a[205],b[205];
int main()
{
   cin>>n>>na>>nb;
   for(int i=1;i<=na;i++) cin>>a[i];
   for(int i=1;i<=nb;i++) cin>>b[i];
   while(n--)
   {
      tota++;
      totb++;
      int nowa=a[tota],nowb=b[totb];
      if(vs[nowa][nowb]==1) ansa++;
      if(vs[nowa][nowb]==-1) ansb++;
      if(tota==na) tota=0;
      if(totb==nb) totb=0;
      //cout<<endl;
   }
   cout<<ansa<<' '<<ansb;
   system("pause");
   return 0;
}
