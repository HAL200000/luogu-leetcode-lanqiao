#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int n;
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      int num;
      cin>>num;
      a.insert(upper_bound(a.begin(),a.end(),num),num);
      if(i%2) cout<<a[i/2]<<endl;
   }
   system("pause");
   return 0;
}
