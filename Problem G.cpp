#include<bits/stdc++.h>
using namespace std;
int n,t;
void ans(long long a,int b)
{
   if(a%b==0) 
   {
      cout<<a/b;
      return;
   }
   
   for(int i=b;i>1;i--)
   {
      if(a%i==0&&b%i==0)
      {
         cout<<a/i<<'/'<<b/i<<endl;
         break;
      }
   }
}
int main(){
   cin>>n>>t;
   int a[n+1],b[n+1];
   for(int m=1;m<=n;m++){
      cin>>a[m]>>b[m];
   }
   int m[n+1];
   if(t==0)  cout<<0;
   else {
      int k;long long sum=0;int tot=t;
      for(int i=1;i<=n;i++)
         {
            m[i]=a[i]*b[i];
            sum+=m[i];
         }
      if (t==1)   ans(sum,tot);//找一个变量代替sum/tot并约分输出
      else if(sum!=0)   cout<<"infinity";
      else{
         for(k=2;k<=5;k++){
            sum=0;
            tot=tot*(t-k+1);
            
            for(int i=1;i<=n;i++)
            {
               m[i]=m[i]*(-k+1)*b[i];
               sum+=m[i];
            }
            if(t==k) { ans(sum,tot);break;}//找一个变量代替sum/tot并约分输出
            if(t!=k && sum!=0)   {cout<<"infinity";break;}





         }
         
      }
      


   
   }
   system("pause");
   return 0;

}