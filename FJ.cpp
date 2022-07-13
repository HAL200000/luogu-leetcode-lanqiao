#include <bits/stdc++.h>
using namespace std;
int n;
string s; 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		s=s+char(i+'A'-1)+s;
	}
    cout<<s<<endl;
    return 0;
}


