/*
#include <bits/stdc++.h>
using namespace std;
int n,a[100005];
void quicksort(int l,int r)
{
   if(l>=r) return;//对于单个数也把它看成有序数列
   int key=a[l],l1=l,r1=r;
   while(l1<r1)//这里不能有等号。l1,r1指向同一个元素时说明该交换了
   {
      while(a[r1]>=key&&r1>l1) r1--;//注意等号，有相等的数就跳过，否则当a[l1]==a[r1]时会出现重复交换的死循环，
      //先挪右边，因为l1停下的位置对应的数是大于key的，如果在此时l1==r1，进行swap时会把一个大于key的数放到最前面，不符合key前所有的数都小于key的原则
      //3 1 5 6 9 4 7 8
      //如果先挪动l1，会在5处停下，l2也会在5处停下,swap后变成5 1 3 6 9 4 7 8
      while(a[l1]<=key&&l1<r1) l1++;
      if(l1<r1) //确定l1和r1对应的是两个不同的数
      swap(a[l1],a[r1]);//换完之后一定满足a[r1]>key,a[l1]<key，因此l1,r1都会继续移动下去
   }
   swap(a[l],a[l1]);//把key放到中间某个位置

  quicksort(l,l1-1);
  quicksort(r1+1,r);
}
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++) scanf("%d",&a[i]);
   quicksort(1,n);
   for(int i=1;i<=n;i++) printf("%d ",a[i]);
   system("pause");
   return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int n,a[10005];

void qsort(int l,int r)
{
   int k=a[l],l1=l,r1=r;
   if(l>=r) return;
   while(l1<r1)
   {
      while(a[r1]>=k && l1<r1) r1--;
      while(a[l1]<=k && l1<r1) l1++;
      if(l1<r1) swap(a[l1],a[r1]);
   }
   
   if(l1==r1) swap(a[l],a[l1]);
   qsort(l,l1-1);
   qsort(r1+1,r);
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int l=1,r=n;
    qsort(l,r);
    for(int i=1;i<=n;i++) cout<<a[i]<<' ';
    system("pause");
    return 0;
}
/*
8
3 1 5 6 9 4 7 8
*/