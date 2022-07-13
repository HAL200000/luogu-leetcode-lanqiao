#include <bits/stdc++.h>
using namespace std;
int bubble_sort(string s)
{
	int l=s.length();
	int cnt=0;
	for(int i=l-1;i>=0;i--)
		for(int j=0;j<i;j++)
		{
			if(s[j]>s[j+1])
			{
				swap(s[j],s[j+1]);
				cnt++;
			}
		}
	return cnt;
}
int main()
{
	char s[20]="abcdefghijklmno";
	do
	{
		string tmp=s;
		
		if(bubble_sort(tmp)==100) cout<<s<<endl;
	}while(next_permutation(s,s+15));
    
    return 0;
}


