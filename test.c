#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	///*int ch = 0;
	//while(getchar())*///getchar:��ȡ�ַ�(�Ӽ����ϻ�ȡһ���ַ���������ʱ�����ֵ)��get char 
	//int ch = getchar();//getchar��ȡ��ֵ��ֵ��ch
	//printf("%c\n", ch);//��ӡch(1
	//putchar(ch);//��ӡch(2

	//return 0;

	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}//����ctrl+Z��������

	char password[20] = { 0 };
	printf("���������룺>");
	scanf("%s", password );//�����ո�
	//getchar();//��ȡ����\n
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�����루Y/N��:>");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("Yes\n");printf
	}
	else
	{
		printf('No\n');
	}
		return 0;
}