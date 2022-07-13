#include<iostream>
using namespace std;
int deleChar(char a[]);
const int N=81;

int main()
{
    char s[N];
    cin.getline(s,N);

    int n = deleChar(s);
    cout << "delete " << n << " characters.!" << endl;
    cout << "After deleted:" << s << endl;
	system("pause");
    return 0;
}

int deleChar(char a[]){
	char temp[N];
	int j;
	for(j = 0;a[j] != '\0';j++){
		temp[j] = a[j];
		
	}
	
	int num = 0;
	for(int i = 0;temp[i] != '\0';i++){
		if((temp[i]>='A' && temp[i]<='Z')||(temp[i]>='a' && temp[i]<='z')){
			a[num] = temp[i];
			num++;
		}
	}
	a[num] = '\0';

	for(int i=num;i<=j;i++) a[i]='\0';//improved

	return j - num;	
}
//How are you!