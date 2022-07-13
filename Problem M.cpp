#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
   cin>>n;
   int f[n+2];
   int s[n+1];
   int a[n+1],b[n+1],x[n+1];
   int p;
   memset(f,0,sizeof(f));memset(x,0,sizeof(x));
   int i;
   for(i=1;i<=n;i++){
      cin>>s[i];
   }
   for(i=1;i<=n;i++){
      cin>>a[i];
   }
   for(i=1;i<=n;i++){
      cin>>b[i];
   }
   for(i=1;i<=n;i++){
      p=(a[i]+b[i])*s[i]+s[i-1]*f[i-1];
      if (s[i-1]+s[i]==0 && abs(p)>1)
      {
         do{
            
            i++;
            x[i]=1;
            f[i]=0;
         }while(s[i-1]+s[i]==0 && abs(p)>1);
         x[i]=0;
         f[i]=0;
      }
      else{
      f[i]=abs(p)/2;
      x[i]=abs(p)%2;
      }
      

   }
   for(i=1;i<n;i++){
      
      cout<<x[i]<<" ";
   }
   cout<<x[n];
   system("pause");
   return 0;
}

