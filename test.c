#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	///*int ch = 0;
	//while(getchar())*///getchar:获取字符(从键盘上获取一个字符，即运行时输入的值)，get char 
	//int ch = getchar();//getchar获取的值赋值给ch
	//printf("%c\n", ch);//打印ch(1
	//putchar(ch);//打印ch(2

	//return 0;

	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}//输入ctrl+Z结束代码

	char password[20] = { 0 };
	printf("请输入密码：>");
	scanf("%s", password );//不读空格
	//getchar();//读取走了\n
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认密码（Y/N）:>");
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