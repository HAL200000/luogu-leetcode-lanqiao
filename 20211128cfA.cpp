#include <bits/stdc++.h>
using namespace std;
int t,n;
long long odd[20],even[20];
long long ans;
int main()
{
   cin>>t;
   while(t--)
   {
      cin>>n;
      int tmp,tot1=0,tot2=0;
      for(int i=1;i<=n;i++) 
      {
         cin>>tmp;
         if(tmp%2) odd[++tot1]=tmp;
         else even[++tot2]=tmp;
      }
      long long base=1;
      for(int i=1;i<=tot2;i++)
      {
         while(even[i]%2==0)
         {
            even[i]/=2;
            base*=2;
         }
      }
      for(int i=tot1+1;i<=tot1+tot2+1;i++) odd[i]=even[i-tot1];
      sort(odd+1,odd+tot1+tot2+1);
      for(int i=1;i<tot1+tot2;i++) ans+=odd[i];
      ans+=odd[tot1+tot2]*base;
      cout<<ans<<endl;

      base=0;      
      ans=0;
   }
   //system("pause");
   return 0;
}
