#include <bits/stdc++.h>
using namespace std;
int a,cnt;
int main()
{
    while(scanf("%d",&a)&&a!=EOF)
    {
        cnt++;
        if(a==250) 
        {
            cout<<cnt;
            break;
        }
    }

    system("pause");
    return 0;
}
