#include <bits/stdc++.h>
using namespace std;
char c[10005];
int cnt1,cnt2,cnt3,cnt4;
int main()
{
	gets(c);
	int i=0;
	while(c[i]!='\0')
	{
		if(c[i]<='Z'&&c[i]>='A'||c[i]<='z'&&c[i]>='a') cnt1++;
		else if(c[i]>='0'&&c[i]<='9') cnt2++;
		else if(c[i]==' ') cnt3++;
		else cnt4++;
		i++;
	}
    printf("%d %d %d %d",cnt1,cnt2,cnt3,cnt4);
    return 0;
}
//aaaaAA 123456 #$@

