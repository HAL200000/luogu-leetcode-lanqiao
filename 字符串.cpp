#include <bits/stdc++.h>
using namespace std;
string str ="123456789abcdefghiaklmn";
int main()
{
	
//123��λ��:=-SE0N B�ҡ�����FG8Y\0T9
	cout<<str.find("123")<<endl;
//34��str[2]��str[n-1]�е�λ��:
	cout<<str.find("34",2)<<endl;
//"ab��str[0]��str[12]�е�λ��: 
	cout<<str.rfind("ab",12)<<endl;
//"str[3]���Ժ���Ӵ�:"
	cout<<str.substr(3)<<endl;
//��str[2]��ʼ��4���ַ�:
	cout<<str.substr(2,4)<<endl;
//��a�������������5����ĸ�ĳ�##
	str.replace(str.find("a"),5,"##");
	cout<<str<<endl;
//�ӵ�2���ַ��������####
    str.insert(2,"####");
    cout<<str<<endl;
    return 0;
}


