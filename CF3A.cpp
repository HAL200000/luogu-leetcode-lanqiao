#include <bits/stdc++.h>
using namespace std;
int s,t;
char s1,t1;
int main()
{
   cin>>s1>>s>>t1>>t;
   int line=abs(s1-t1),col=abs(int(s-t));
   int minn=min(line,col);
   cout<<max(line,col)<<endl;
   if(s>t&&s1<t1||s==t&&s1<t1)
   {
      for(int i=1;i<=minn;i++) cout<<"RD"<<endl;
      if(line>col) for(int i=1;i<=line-col;i++) cout<<"R"<<endl;
      if(line<col) for(int i=1;i<=col-line;i++) cout<<"D"<<endl;
   }
   if(s<t&&s1>t1||s==t&&s1>t1)
   {
      for(int i=1;i<=minn;i++) cout<<"LU"<<endl;
      if(line>col) for(int i=1;i<=line-col;i++) cout<<"L"<<endl;
      if(line<col) for(int i=1;i<=col-line;i++) cout<<"U"<<endl;
   }
   if(s>t&&s1>t1||s1==t1&&s>t)
   {
      for(int i=1;i<=minn;i++) cout<<"LD"<<endl;
      if(line>col) for(int i=1;i<=line-col;i++) cout<<"L"<<endl;
      if(line<col) for(int i=1;i<=col-line;i++) cout<<"D"<<endl;
   }
   if(s<t&&s1<t1||s1==t1&&s<t)
   {
      for(int i=1;i<=minn;i++) cout<<"RU"<<endl;
      if(line>col) for(int i=1;i<=line-col;i++) cout<<"R"<<endl;
      if(line<col) for(int i=1;i<=col-line;i++) cout<<"U"<<endl;
   }
   //system("pause");
   return 0;
}
