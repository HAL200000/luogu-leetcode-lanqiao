#include <bits/stdc++.h>
using namespace std;
int m[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int year=2000,month=1,day=1,weekday=6;
bool isrun(int year)
{
	if(((year%4==0)&&(year%100!=0))||(year%400==0)) return 1;
	return 0;
}
int ans;
int main()
{
	while(1)
	{
		cout<<year<<' '<<month<<' '<<day<<' '<<weekday<<endl;
		if(day==1||weekday==1) ans+=2;
		else ans++;
		
		if(year==2020&&month==10&&day==1) break;
		
		if(!isrun(year))
		{
			if(day==28&&month==2)
			{
				day=0;
				month++;
			}
			else
			{
				if(day==m[month])
				{
					day=0;
					month++;
				}
			}
		}
		
		if(isrun(year))
		{
			//cout<<year<<endl;
			
			if(day==29&&month==2)
			{
				day=0;
				month++;
			}
			else
			{
				if(day==m[month])
				{
					day=0;
					month++;
				}
			}
		}
		if(month==13) 
		{
			month=1;
			year++;
		}
		
		day++;
		weekday++;
		if(weekday==8) weekday=1;
	}
    cout<<ans;
    //8879 
	return 0;
}


