// 文件操作1.cpp : Defines the entry point for the console application.
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
//写入字符到文件中
void filePutc()
{
	//定义一个文件指针对象
	//指向所操作的文件内存
	FILE* pF;
	//fopen表示打开一个文件
	//如果文件不存在，创建一个文件并打开
	//如果文件跟exe程序在同一个目录存在，直接打开
	//
	pF=fopen("data.txt","w");
	if(pF==NULL)
	{
		puts("输入失败");
		return ;
	}
	for(int i='A';i<='F';i++)
	{
		//向文件写入字符
		//参数一：字符的ACSLL码
		//参数二：要写入文件的指针
		fputc(i,pF);
	}
	//关闭文件，保证文件正确
	fclose(pF);
}






//从文件中读取字符
void fileGetc()
{
	FILE* pF;
	pF=fopen("data.txt","r");
	if(pF==NULL)
	{
		puts("打开失败");
	    return ;
	}
	//从文件中读取一个字符（读到哪）
	char c=fgetc(pF);
	//持续读取，EOF：文件结束标识
	while(c!=EOF)
	{
		//读取当前字符
       printf("%c",c);
        //读取下一个字符
	   c=fgetc(pF);
	}
	puts(" ");
	fclose(pF);
}




//写入一组字符到文件中
void filePuts()
{
FILE* pF;
	pF=fopen("data.txt","w");
	if(pF==NULL)
	{
		puts("打开失败");
	    return ;
	}
	//打印字符串到文件中
	//参数一：字符串地址
	//参数二：写入文件的指针
	fputs("12345\n",pF);
	fputs("ABCDE\n",pF);
	fclose(pF);
}







//从文件中读取字符串
void fileGets()
{

    FILE* pF;
	//以读取的方式打开
	pF=fopen("data.txt","r");
	if(pF==NULL)
	{
		puts("打开失败");
	    return ;
	}
	char str[100];
	//按行来读取字符串
	//参数一：读取的字符存放的位置地址
	//参数二：读取的字符个数
	//参数三：从哪个文件读取
	fgets(str,12,pF);
	printf("%s\n",str);

    fgets(str,12,pF);
	printf("%s\n",str);

	fclose(pF);
}






//写入任意大小的任意内容到文件中
void fileWrite()
{
 FILE* pF;
	//以写入的方式打开
	pF=fopen("data.txt","w");
	if(pF==NULL)
	{
		puts("打开失败");
	    return ;
	}

	char str[100]="12345678abcdefg";
	//写入任意个字符二进制数据到文件中
	//参数一：要写入的内容的指针。void：任何类型都可以写入
	//参数二：每个变量的大小，根据变量的大小来确定
	//参数三：一共存储多少个变量内容：1*15
	//参数四：文件指针
	fwrite((void*)str,sizeof(char),15,pF);

	fclose(pF);
}








//从文件中读取任意大小的内容
void fileRead()
{
FILE* pF;
	//以写入的方式打开
	pF=fopen("data.txt","r");
	if(pF==NULL)
	{
		puts("打开失败");
	    return ;
}
	char str[100];
	//读取任意个字符二进制数据
	//返回值表示读取成功的有效字节数
	//如果返回值为0，读取失败
	int r=fread(str,sizeof(char),10,pF);
	str[10]='\0';//加结束符，表示字符串结束了

if(r!=0)
{
	printf("读取的字节数位%d",r);
    printf("%s",str);
}
puts(" ");
fclose(pF);

}