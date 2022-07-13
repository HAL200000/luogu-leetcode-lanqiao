#include<bits/stdc++.h>
using namespace std;
int RGB[5];
int ColorMap(float minVal, float maxVal, int maxValColor, float val)
{
    //计算maxvalcolor的RGB值并以十进制存储
    int tot=0,cnt=1,base=1;
	while(maxValColor)
	{
		tot++;
        int now=maxValColor%16;
        RGB[cnt]+=now*base;
        base*=16;
        maxValColor/=16;
        
        if(tot==2)
        {
            cnt++;
            tot=0;
            base=1;
        }
	}
    for(int i=1;i<=3;i++) cout<<RGB[i]<<' ';
    cout<<endl;
    int red=(int)(val-minVal)/(maxVal-minVal)*RGB[3];
    cout<<red<<endl;
    int green=(int)(val-minVal)/(maxVal-minVal)*RGB[2];
    cout<<green<<endl;
    int blue=(int)(val-minVal)/(maxVal-minVal)*RGB[1];
    cout<<blue<<endl;

    //再十进制转十六进制挨个输出就行
}

int main()
{
    float minVal, maxVal, val;
    int maxValColor;
    scanf("%f %f %x %f", &minVal, &maxVal, &maxValColor, &val);
    int color = ColorMap(minVal, maxVal, maxValColor, val);
    //printf ("0x%x\n", color);
    system("pause");
    return 0;
}