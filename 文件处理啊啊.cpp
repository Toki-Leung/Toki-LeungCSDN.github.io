// �ļ�������.cpp : Defines the entry point for the console application.
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

void filePutc()//д���ַ����ļ�
{
  FILE* pF;//ָ�����������ļ�
  pF=fopen("data.txt","w");
   if(pF==NULL)
   {
     puts("���ļ�ʧ��");
		 return;
   }

   for(int i='A';i<='F';i++)
   {
     fputc(i,pF);//���ļ���д���ַ�
   }
   fclose(pF);
}


void fileGetc()//��ȡ�ַ����ļ���
{  
  FILE* pF;
  pF=fopen("data.txt","r");
 if(pF==NULL)
 {
  puts("��ʧ��");
  return;
 }
 char c=fgetc(pF);//һ��һ����ȡ
 while(c!=EOF)//�ļ���β��ʶ
 {
   printf("%c",c);//��ȡ��ǰ�ַ�
   c=fgetc(pF);//��ȡ��һ���ַ�
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
      puts("��ʧ��");
	  return;
	}
  fputs("12345\n",pF);//��ӡ�ַ������ļ���
  fputs("ABCDE\n",pF);
  fclose(pF);
}

void fileGets()
{
 FILE* pF;
 pF=fopen("data.txt","r");
 if(pF==NULL)
 {
   puts("��ʧ��");
   return;
 }
 char str[100];
 //��������ȡ�ַ�
 fgets(str,12,pF);
 printf("%s",str);

 fgets(str,12,pF);
 printf("%s",str);//��ȡ����

 fclose(pF);

}


void fileWrite()//�������С������д���ļ���
{
 FILE* pF;
 pF=fopen("data.txt","w");
  if(pF==NULL)
  {
    puts("��ʧ��");
	return;
  }
   char str[100]="12345678abcdefg";
   //д��������ַ����������ݵ��ļ��У�void�κ����Ͷ�����д��
  fwrite((void*)str,sizeof(char),10,pF);
  fclose(pF);
}

void fileRead()
{
FILE* pF;
 pF=fopen("data.txt","r");
  if(pF==NULL)
  {
    puts("��ʧ��");
	return;
  }
  char str[100];
  int r=fread(str,sizeof(char),10,pF);
  str[10]='\0';
 
  if(r!=0)//�������ֵΪ0����ȡʧ��
  {
    printf("��ȡ���ֽ���Ϊ%d\n",r);
	printf("%s",str);
  }
  fclose(pF);
  puts(" ");//��printf("\n");
}


