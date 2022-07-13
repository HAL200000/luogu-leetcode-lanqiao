#include <bits/stdc++.h>
using namespace std;

struct node
{
	union 
	{
		char id_str[100];
		int id_num;
	};//只使用union时变为匿名共用体，这个地址在同一时间只能存放一种变量

}widget[5];


int main()
{

	cin>>widget[1].id_num;//像正常使用结构体一样直接调用即可
	printf("%d\n",widget[1].id_num);

	cin>>widget[1].id_str;//widget[1]中union所在的地址被替换为string类型，原先包含的int丢失
	printf("%d\n",widget[1].id_num);
	cout<<widget[1].id_str<<endl;

	system("pause");
	return 0;
}
