#include <bits/stdc++.h>
using namespace std;
map <string,int> s;
int n,opt,score;
string name;
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      cin>>opt;
      if(opt==1)
      {
         cin>>name>>score;
         s[name]=score;
         cout<<"OK"<<endl;
      }
      if(opt==2)
      {
         cin>>name;
         if(s.find(name)!=s.end()) cout<<s[name]<<endl;
         else cout<<"Not found"<<endl;
      }
       if(opt==3)
      {
         cin>>name;
         if(s.find(name)!=s.end()) 
         {
            s.erase(name);
            cout<<"Deleted successfully"<<endl;
         }
         else cout<<"Not found"<<endl;
      }
      if(opt==4) cout<<s.size()<<endl;
   }
   system("pause");
   return 0;
}
