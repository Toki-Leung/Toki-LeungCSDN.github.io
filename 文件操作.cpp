// �ļ�����1.cpp : Defines the entry point for the console application.
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
//д���ַ����ļ���
void filePutc()
{
	//����һ���ļ�ָ�����
	//ָ�����������ļ��ڴ�
	FILE* pF;
	//fopen��ʾ��һ���ļ�
	//����ļ������ڣ�����һ���ļ�����
	//����ļ���exe������ͬһ��Ŀ¼���ڣ�ֱ�Ӵ�
	//
	pF=fopen("data.txt","w");
	if(pF==NULL)
	{
		puts("����ʧ��");
		return ;
	}
	for(int i='A';i<='F';i++)
	{
		//���ļ�д���ַ�
		//����һ���ַ���ACSLL��
		//��������Ҫд���ļ���ָ��
		fputc(i,pF);
	}
	//�ر��ļ�����֤�ļ���ȷ
	fclose(pF);
}






//���ļ��ж�ȡ�ַ�
void fileGetc()
{
	FILE* pF;
	pF=fopen("data.txt","r");
	if(pF==NULL)
	{
		puts("��ʧ��");
	    return ;
	}
	//���ļ��ж�ȡһ���ַ��������ģ�
	char c=fgetc(pF);
	//������ȡ��EOF���ļ�������ʶ
	while(c!=EOF)
	{
		//��ȡ��ǰ�ַ�
       printf("%c",c);
        //��ȡ��һ���ַ�
	   c=fgetc(pF);
	}
	puts(" ");
	fclose(pF);
}




//д��һ���ַ����ļ���
void filePuts()
{
FILE* pF;
	pF=fopen("data.txt","w");
	if(pF==NULL)
	{
		puts("��ʧ��");
	    return ;
	}
	//��ӡ�ַ������ļ���
	//����һ���ַ�����ַ
	//��������д���ļ���ָ��
	fputs("12345\n",pF);
	fputs("ABCDE\n",pF);
	fclose(pF);
}







//���ļ��ж�ȡ�ַ���
void fileGets()
{

    FILE* pF;
	//�Զ�ȡ�ķ�ʽ��
	pF=fopen("data.txt","r");
	if(pF==NULL)
	{
		puts("��ʧ��");
	    return ;
	}
	char str[100];
	//��������ȡ�ַ���
	//����һ����ȡ���ַ���ŵ�λ�õ�ַ
	//����������ȡ���ַ�����
	//�����������ĸ��ļ���ȡ
	fgets(str,12,pF);
	printf("%s\n",str);

    fgets(str,12,pF);
	printf("%s\n",str);

	fclose(pF);
}






//д�������С���������ݵ��ļ���
void fileWrite()
{
 FILE* pF;
	//��д��ķ�ʽ��
	pF=fopen("data.txt","w");
	if(pF==NULL)
	{
		puts("��ʧ��");
	    return ;
	}

	char str[100]="12345678abcdefg";
	//д��������ַ����������ݵ��ļ���
	//����һ��Ҫд������ݵ�ָ�롣void���κ����Ͷ�����д��
	//��������ÿ�������Ĵ�С�����ݱ����Ĵ�С��ȷ��
	//��������һ���洢���ٸ��������ݣ�1*15
	//�����ģ��ļ�ָ��
	fwrite((void*)str,sizeof(char),15,pF);

	fclose(pF);
}








//���ļ��ж�ȡ�����С������
void fileRead()
{
FILE* pF;
	//��д��ķ�ʽ��
	pF=fopen("data.txt","r");
	if(pF==NULL)
	{
		puts("��ʧ��");
	    return ;
}
	char str[100];
	//��ȡ������ַ�����������
	//����ֵ��ʾ��ȡ�ɹ�����Ч�ֽ���
	//�������ֵΪ0����ȡʧ��
	int r=fread(str,sizeof(char),10,pF);
	str[10]='\0';//�ӽ���������ʾ�ַ���������

if(r!=0)
{
	printf("��ȡ���ֽ���λ%d",r);
    printf("%s",str);
}
puts(" ");
fclose(pF);

}