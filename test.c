#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���飬�����洢��ͬ����Ԫ�صĺϼ�
//int main()
//{
//	int score[10];//�����������飬��̬��������
//	score[0] = 150;//Ϊ�����±�0Ԫ�ظ�ֵ
//	for (int i = 0; i < 10; i++)//Ϊ���鸳ֵ
//	{
//		scanf("%d", &score[1]);//���뺯��
//	}
//	for (int i = 0; i < 10; i++)//��ӡ�����е�Ԫ��
//	{
//		printf("%d", score[i]);
//	}
//
//	return 0;
//}
#define MAXSIZE 100 //�������define
int main()
{
	int A[10];//��̬����A
	int n;//�������ͱ���n����¼����BԪ�ظ���
	scanf("%d", &n);//����BԪ�ظ���
	int* B = (int* )malloc(sizeof(int) * n);//��̬��������B
	char C[MAXSIZE];//��̬��������C
	for (int i = 0; i < 10; i++)//��ʼ������A
	{
		A[i] = i;
	}
	free(B);
	return 0;
}



