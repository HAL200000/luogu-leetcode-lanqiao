#include <bits/stdc++.h>
using namespace std;
int p1,p2,p3;
string s; 
int main()
{
	cin>>p1>>p2>>p3;
	cin>>s;

	for(int i=0;i<s.length();i++)
	{
		char a=s[i-1],b=s[i+1];
	
		if(s[i]=='-'&&((a>='0'&&a<='9'&&b>='0'&&b<='9')||(a>='a'&&a<='z'&&b>='a'&&b<='z')))
		{
				//cout<<a<<b<<endl;
			if(a+1==b) s.erase(i,1);
			else if(a>=b) continue;
			else
			{
				int cnt=0;
				string in="";
				if(p3==1)
				{
					if(p1==1)
					{
						for(char i=a+1;i<b;i++)
						{
							for(int k=1;k<=p2;k++) in+=i;
						}
					}
					if(p1==2)
					{
						for(char i=a+1-'a'+'A';i<b-'a'+'A';i++)
						{
							for(int k=1;k<=p2;k++) in+=i;
						}
					}
					if(p1==3)
					{
						for(char i=a+1;i<b;i++)
						{
							for(int k=1;k<=p2;k++) in+='*';
						}
					}
				}
				if(p3==2)
				{
					if(p1==1)
					{
						for(char i=b-1;i>a;i--)
						{
							for(int k=1;k<=p2;k++) in+=i;
						}
					}
					if(p1==2)
					{
						for(char i=b-1-'a'+'A';i>a-'a'+'A';i--)
						{
							for(int k=1;k<=p2;k++) in+=i;
						}
					}
					if(p1==3)
					{
						for(char i=a+1;i<b;i++)
						{
							for(int k=1;k<=p2;k++) in+='*';
						}
					}
				}
				s.erase(i,1);
				s.insert(i,in);
				
			}
		}
	}
    cout<<s;
    return 0;
}


