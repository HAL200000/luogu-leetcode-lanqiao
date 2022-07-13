#include <bits/stdc++.h>
using namespace std;
int digit[30];
string s;
int sum,ans;
int main()
{
	cin>>s;
	for(int i=0;i<s.length();i++) digit[int(s[i]-'a'+1)]++;
	for(int i=1;i<=26;i++)
	{
		if(digit[i]>sum||digit[i]==sum&&i<ans)
		{
			ans=i;
			sum=digit[i];
		}
	}
    cout<<char(ans+'a'-1)<<endl<<sum;
    return 0;
}

