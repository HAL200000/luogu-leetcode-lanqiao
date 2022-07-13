#include <bits/stdc++.h>
using namespace std;
int n;
long long f[105];
int main()
{
    cin>>n;
    n++;
    f[0] = f[1] = f[2] = 1;
    for(int i=1; i<=n; i++)
    {
        f[i] = f[i-1] + f[i-2];
        cout<<i<<endl;
        printf("%.8lf\n",double(f[i-1]) / f[i]);
    }
    system("pause");
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int n;
long long f[105];
int main()
{
    cin>>n;
    n++;
    f[0] = f[1] = f[2] = 1;
    if(n <= 19)
    {
        for(int i=3; i<=n; i++) f[i] = f[i-1] + f[i-2];   
        printf("%.8lf\n",double(f[n-1]) / f[n]);
    }
    else cout<<"0.61803399";
    system("pause");
    return 0;
}
*/