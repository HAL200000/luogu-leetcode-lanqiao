#include <bits/stdc++.h>
using namespace std;
string str ="123456789abcdefghiaklmn";
int main()
{
	
//123的位置:=-SE0N B我·二次FG8Y\0T9
	cout<<str.find("123")<<endl;
//34在str[2]到str[n-1]中的位置:
	cout<<str.find("34",2)<<endl;
//"ab在str[0]到str[12]中的位置: 
	cout<<str.rfind("ab",12)<<endl;
//"str[3]及以后的子串:"
	cout<<str.substr(3)<<endl;
//从str[2]开始的4个字符:
	cout<<str.substr(2,4)<<endl;
//把a（包含）后面的5个字母改成##
	str.replace(str.find("a"),5,"##");
	cout<<str<<endl;
//从第2个字符后面插入####
    str.insert(2,"####");
    cout<<str<<endl;
    return 0;
}


