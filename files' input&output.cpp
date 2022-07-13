#include <bits/stdc++.h>
using namespace std;
int a;
char ch;

int main()
{
   //新建文件指针
   FILE *fp,*fq;

   //打开文件（在同一根目录时）
   fp=fopen("in.txt","r");
   fq=fopen("out.txt","w");
   //读入文件内容
   fscanf(fp,"%d",&a);

   //do something to a


   //将结果输出到另一个存在的文件
   fprintf(fq,"%d",a);

   //关闭文件
   fclose(fq);
   fclose(fp);

   //（对字符）读入文件内容
   ch=fgetc(fp);

   //（对字符）将结果输出到另一个存在的文件
   fputc(ch,fq);
   
   system("pause");
   return 0;
}
