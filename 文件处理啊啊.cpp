// 文件处理啊啊.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void filePutc();
void fileGetc();
void filePuts();
void fileGets();
void fileWrite();
void fileRead();


int main(int argc, char* argv[])
{
	/*for(int i='A';i<='F';i++)
	{
        for(int j='A';j<=i;j++)
		{
           printf("%c ",j);
		}
		printf("\n");
	}*/

 filePutc();
 fileGetc();
 filePuts();
 fileGets();
 fileWrite();
 fileRead();

	return 0;
}

void filePutc()//写入字符到文件
{
  FILE* pF;//指向所操作的文件
  pF=fopen("data.txt","w");
   if(pF==NULL)
   {
     puts("打开文件失败");
		 return;
   }

   for(int i='A';i<='F';i++)
   {
     fputc(i,pF);//向文件中写入字符
   }
   fclose(pF);
}


void fileGetc()//读取字符从文件中
{  
  FILE* pF;
  pF=fopen("data.txt","r");
 if(pF==NULL)
 {
  puts("打开失败");
  return;
 }
 char c=fgetc(pF);//一个一个读取
 while(c!=EOF)//文件结尾标识
 {
   printf("%c",c);//读取当前字符
   c=fgetc(pF);//读取下一个字符
 }  
 puts(" ");
fclose(pF);

}
void filePuts()
{
	FILE* pF;
	pF=fopen("data.txt","w");
	if(pF==NULL)
	{
      puts("打开失败");
	  return;
	}
  fputs("12345\n",pF);//打印字符串到文件中
  fputs("ABCDE\n",pF);
  fclose(pF);
}

void fileGets()
{
 FILE* pF;
 pF=fopen("data.txt","r");
 if(pF==NULL)
 {
   puts("打开失败");
   return;
 }
 char str[100];
 //按行来读取字符
 fgets(str,12,pF);
 printf("%s",str);

 fgets(str,12,pF);
 printf("%s",str);//读取两行

 fclose(pF);

}


void fileWrite()//以任意大小的内容写入文件中
{
 FILE* pF;
 pF=fopen("data.txt","w");
  if(pF==NULL)
  {
    puts("打开失败");
	return;
  }
   char str[100]="12345678abcdefg";
   //写入任意个字符二进制数据到文件中，void任何类型都可以写入
  fwrite((void*)str,sizeof(char),10,pF);
  fclose(pF);
}

void fileRead()
{
FILE* pF;
 pF=fopen("data.txt","r");
  if(pF==NULL)
  {
    puts("打开失败");
	return;
  }
  char str[100];
  int r=fread(str,sizeof(char),10,pF);
  str[10]='\0';
 
  if(r!=0)//如果返回值为0，读取失败
  {
    printf("读取的字节数为%d\n",r);
	printf("%s",str);
  }
  fclose(pF);
  puts(" ");//或printf("\n");
}


