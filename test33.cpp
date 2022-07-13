#include <bits/stdc++.h>
using namespace std;
int x=1;
double definite(double (*fun)(double x))
{
    return fun(x);
}
int main()
{
    cout<<definite(sin);
    system("pause");
    return 0;
}
