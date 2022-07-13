#include <bits/stdc++.h>
using namespace std;
string t,tt;
int T;
int trans(char a,char b)
{
	return (a-'0')*10+(b-'0');
}

int main()
{
	cin>>T;
	getchar();
	while(T--)
	{
		
		getline(cin,t);
		getline(cin,tt);
	
		int h1=trans(t[0],t[1]),m1=trans(t[3],t[4]),s1=trans(t[6],t[7]);
		int h2=trans(t[9],t[10]),m2=trans(t[12],t[13]),s2=trans(t[15],t[16]);
		if(t[20]=='1') h2+=24;
		if(t[20]=='2') h2+=48;
	
		
		
		int h3=trans(tt[0],tt[1]),m3=trans(tt[3],tt[4]),s3=trans(tt[6],tt[7]);
		int h4=trans(tt[9],tt[10]),m4=trans(tt[12],tt[13]),s4=trans(tt[15],tt[16]);
		if(tt[20]=='1') h4+=24;
		if(tt[20]=='2') h4+=48;
	
		
		
	
		
		int hh,mm,ss;
		ss=s4-s3;
		mm=m4-m3;
		hh=h4-h3;
		while(ss<0) 
		{
			ss+=60;
			mm--;
		}
		while(mm<0)
		{
			mm+=60;
			hh--;
		}
		
		int h,m,s;
		s=s2-s1;
		m=m2-m1;
		h=h2-h1;
		while(s<0) 
		{
			s+=60;
			m--;
		}
		while(m<0)
		{
			m+=60;
			h--;
		}
		//printf("%d %d %d %d %d %d\n",h,m,s,hh,mm,ss);
		printf("%02d:%02d:%02d\n",(h+hh)/2,(m+mm)/2,(s+ss)/2);
		
		for(int i=0;i<25;i++) t[i]='0',tt[i]='0';
		
	}
    
    return 0;
}

//17:21:07 00:31:46 (+1)
