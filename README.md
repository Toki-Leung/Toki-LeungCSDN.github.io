# Toki-LeungCSDN.github.io
Toki-LeungCSDN博客

哈哈，我现在只是一个小菜鸟，渴望有一天变成大神，像你们一样去装逼


const关键字
// const.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
 int k=10;//声明一个变量
 printf("k=%d\n",k);

 k=20;
 printf("k=%d\n",k);

 int const m=15;//const表示将定义的变量变成常量值
 //第一次定义时赋值，后面不可改变
 printf("m=%d\n",m);

 const float fPI=3.1415926;
 printf("m=%d\n",m);

//const对指针操作
int i=10;
int j=15;

const int*p=&i;//将i的地址复制给p

//*p=20;//不能通过指针来修改地址中的值

printf("*p=%d\n",*p);

int* const p2=&i;
*p2=20;
printf("*p2=%d\n",i);

//p2=&j;//p2本身只能等于i的地址

//定义一个常量指针
//p3本身地址不能改变
//同时p3指向的内容也不能通过p3改变
const int* const p3=&i;

p3=&j;
*p3=20;
return 0;
}
