#include <bits/stdc++.h>
using namespace std;
int T;
string s;
int m[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int trans(char c)
{
	return int(c-'0');
}
bool isrun(int year)
{
	if(((year%4==0)&&(year%100!=0))||(year%400==0)) return 1;
	return 0;
}
int hw(int year)
{
	int tmp=year;
	int cnt=1;
	int num[10];
	while(tmp)
	{
		num[cnt++]=tmp%10;
		tmp/=10;
	}
	if(num[1]==num[8]&&num[2]==num[7]&&num[3]==num[6]&&num[4]==num[5]) 
	{
		if(num[1]==num[3]&&num[3]==num[6]&&num[6]==num[8]&&num[2]==num[4]&&num[4]==num[5]&&num[5]==num[7]) return 2;
		return 1;
	}
	return 0;
}

int main()
{
	cin>>T;
	while(T--)
	{
		cin>>s;
		int year=trans(s[0])*1000+trans(s[1])*100+trans(s[2])*10+trans(s[3]);
		int month=trans(s[4])*10+trans(s[5]);
		int day=trans(s[6])*10+trans(s[7])+1;
		int flag1=0,flag2=0;
		while(year<10000)
		{
		
			if(!isrun(year))
			{
				if(month==2&&day==29)
				{
					day=1;
					month++;
				}
				else
				{
					if(day>m[month])
					{
						day=1;
						month++;
					}
				}
			}
			
			if(isrun(year))
			{
				//cout<<year<<endl;
				
				if(month==2&&day==30)
				{
					day=1;
					month++;
				}
				else
				{
					if(day>m[month])
					{
						day=1;
						month++;
					}
				}
			}
			if(month==13) 
			{
				month=1;
				year++;
			}
			
			int now=year*10000+month*100+day;
			if(hw(now)==1||hw(now)==2) cout<<now<<',';
			day++;
		}
		
	}
    
    return 0;
}


