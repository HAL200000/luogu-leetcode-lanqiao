#include <bits/stdc++.h>
using namespace std;
int T;
string to,back; 
int Atoi(string s)
{
	return (s[0]-'0')*10+s[1]-'0';
}
int trans(string s)
{
	string hh=s.substr(0,2);
	int ans=Atoi(hh)*3600+Atoi(s.substr(3,2))*60+Atoi(s.substr(6,2));
	if(s.length()==13)
	{
		if(s[11]=='1') ans+=24*3600;
		else ans+=48*3600;
	}
	return ans;	
}

int main()
{
	cin>>T;
	getchar();
	while(T--)
	{
		getline(cin,to);
		getline(cin,back);
		
		int time1=trans(back.substr(9))-trans(back.substr(0,8));
		int time2=trans(to.substr(9))-trans(to.substr(0,8));
		
		int time=(time1+time2)/2;
		printf("%02d:%02d:%02d\n",time/3600,time%3600/60,time%60);
	}
    return 0;
}
//17:21:07 00:31:46 (+1)

