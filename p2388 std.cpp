#include<iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long cnt=0;
	long long cur=1;
	int m=n;
	while(n>0){
		cur*=5;//cur为当前5的幂
		long long k=m%cur;
		n/=5;
		cnt+=cur*n*(n-1)/2;
		cnt+=n*(k+1);
	}
	cout<<cnt;
    system("pause");
}