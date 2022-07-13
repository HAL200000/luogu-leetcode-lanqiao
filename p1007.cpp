#include <bits/stdc++.h>
using namespace std;
const int N=5005;
int n,l,mint,maxt;
int main()
{
   cin>>l>>n;
   
   for(int i=1;i<=n;i++) 
   {
      int x;
      cin>>x;
      mint=max(mint,min(x,l-x+1));
      maxt=max(maxt,max(x,l-x+1));
   }
   cout<<mint<<' '<<maxt;
   system("pause");
   return 0;
}
