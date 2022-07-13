#include <bits/stdc++.h>
using namespace std;
int n,m,start,add;
const int maxn=1e5+5;
struct node
{
   int front,back;
}s[maxn];
bool shutup[maxn];
void insert()
{
      for(int i=2;i<=n;i++)
   {  
      int k,p;
      cin>>k>>p; 
      int back1=s[k].back,front1=s[k].front;
      if(!p)
      {
         
         if(s[front1].back) 
         {
            s[front1].back=i;
            s[i].front=front1;
         }
         s[k].front=i;
         s[i].back=k;
      }
      if(p)
      {
         s[k].back=i;
         s[i].front=k;

         if(s[back1].front) 
         {
            s[back1].front=i;
            s[i].back=back1;
         }
         
      }
   }
}
/*
void del(int x)
{
   int xfront=s[x].front,xback=s[x].back;
   shutup[x]=1;
   s[xfront].back=xback;
   s[xback].front=xfront;
}*/
void print_ans()
{
   while(s[start].back) 
   {
      if(!shutup[start]) cout<<start<<' ';
      start=s[start].back;
   }
   if(!shutup[start]) cout<<start<<' ';
}
int main()
{
   cin>>n;
   insert();
   for(int i=1;i<=n;i++) if(s[i].front==0&&s[i].back!=0) start=i;
   cin>>m;
   for(int i=1;i<=m;i++)
   {
      int x;
      cin>>x;
      shutup[x]=1;
   }
   print_ans();
   system("pause");
   return 0;
}
