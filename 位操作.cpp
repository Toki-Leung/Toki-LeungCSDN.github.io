// 位操作.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void testNum();
void swapT(int a,int b);

int main(int argc, char* argv[])
{
	//C语言是介于高级语言（面向对象语言）和
	//低级语言（汇编语言）之间的一种语言
    //位操作：对变量中的每一位进行的操作
	
	//char：8位，char型变量是C语言中的基本数据类型之一，字符类型，用于声明一个字符型变量。
	
	//char能够被signed，unsigned修饰；C语言其他几个基本数据类型为 void，int，float，double。
	
	
	//unsingned char;
	//0 0 0 0 0 0 0 1 1==>3(1*2^1+1*2^0)//二进制
	unsigned char a=3;
	//~a表示对a进行按位取反
	
	//比如：0 0 0 0 0 0 1 1
	// 1 1 1 1 1 1 0 0
	//二进制：1*2^7+1*2^6+1*2^5+1*2^4+1*2^3+1*2^2+0*2^1+0*2^0=252   
	unsigned char c=~a;
	
	printf("c=%d\n",c);
	//0 0 0 0 0 0 1 1==>a
	//0 0 0 0 0 1 1 1==>b
	unsigned char b=7;
	
	
	//求a和b的"位与"结果
	c=a&b;//位与：上下两个相乘。
	printf("c=%d\n",c);//11==>2^1+2^0=3;
	
	
	
	//求a和b的"位或"结果
	c=a|b;//"位或"：上下两个只要有一个是"1"，结果都为"1"。
	
	printf("c=%d\n",c);//1 1 1==>7
	
	
	
	//0 0 0 0 0 0 1 1==>a
	//0 0 0 0 0 1 1 1==>b
	
	//0 0 0 0 0 1 0 0==>c
	//求a和b的"异或"操作。
	c=a ^ b;//"异或"：上下两个只要相同，都为0；如果不同，则为1。
	printf("c=%d\n",c);//1 0 0==>4
	
	
	a=1;//0 0 0 0 0 0 0 1
	
	//将a向左移两位
	c=a<<2;//0 0 0 0 0 1 0 0
	
	//每左移一位，c的值就
	printf("c=%d\n",c);
	
	a=8;//0 0 0 0 1 0 0 0
	c=a>>1;//将a向右移一位，0 0 0 0 0 1 0 0
	printf("c=%d\n",c);
	
	
	//0 0 0 0 0 0 0 1&
	//0 0 0 0 0 0 0 ?  1 0
	
	//0 0 0 0 0 0 0 ?  1 0
	
	testNum();
	swapT(10,20);
	return 0;
}



void testNum()
{
	for(int i=1;i<10;i++)
	{
		if(i&1)
		{
			printf("奇数为%d\n",i);
		}
		
		if((i&1)==0)
		{
			printf("偶数为%d\n",i);
		}
	}
}

//交换a和b的值
void swapT(int a,int b)
{
	a=20;
	b=50;
	//使用异或交换两个数的值
	a ^=b;//a=a ^ b
	b ^=a;//b=b ^ a=b ^ (a ^ b)=b ^ b ^a=a;
	a ^=b;//a=a ^ b=(a ^ b)^a=b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	
	/*int c=a;
	a=b;
	b=c;
	//交换两个变量*/
		
	
}