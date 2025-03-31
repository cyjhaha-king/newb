#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//数组，用来存储相同类型元素的合集
//int main()
//{
//	int score[10];//定义整形数组，静态定义数组
//	score[0] = 150;//为数组下标0元素赋值
//	for (int i = 0; i < 10; i++)//为数组赋值
//	{
//		scanf("%d", &score[1]);//输入函数
//	}
//	for (int i = 0; i < 10; i++)//打印数组中的元素
//	{
//		printf("%d", score[i]);
//	}
//
//	return 0;
//}
#define MAXSIZE 100 //定义符号define
int main()
{
	int A[10];//静态数组A
	int n;//定义整型变量n，记录数组B元素个数
	scanf("%d", &n);//输入B元素个数
	int* B = (int* )malloc(sizeof(int) * n);//动态定义数组B
	char C[MAXSIZE];//静态定义数组C
	for (int i = 0; i < 10; i++)//初始化数组A
	{
		A[i] = i;
	}
	free(B);
	return 0;
}



