#include <bits/stdc++.h>
using namespace std;
int year=2022,month=4,day=2,weekday=6;
int m[14]={0,31,0,31,30,31,30,31,31,30,31,30,31};
bool isrun(int year)
{
	if(year%4==0&&year%100!=0 || year%400==0) return 1;
	return 0;
}
int ans;
int main()
{
	while(1)
	{
		day--;
		weekday--;
		
		if(weekday==0) weekday=7;
		
		if(day==0)
		{
			month--;
			day=m[month];
			
			if(month==2)
			{
				if(isrun(year)) day=29;
				else day=28;
			}
		}
		
		if(month==0)
		{
			month=12;
			year--;
			day=m[month];
		}
		
		if(year<=2000)
		{
			if(weekday==1) ans++;
		}
		if(year==1901&&month==1&&day==1) break;
		
		//cout<<year<<' '<<month<<' '<<day<<' '<<weekday<<endl; 
	}
    cout<<ans;
    return 0;
}


