#ifndef __FuncValue_h_
#define __FuncValue_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���

int i_Copya,i_Copyb;
int i_Citea,i_Citeb;
int i_Sitea,i_Siteb;
//����ֵ��ʽ����
void FuncValue(int i_u,int i_v)
{
	printf("\nһ������ֵ��ʽ����\n");
	printf("������i_a��i_b��ֵ(�Կո����)��");
	scanf("%d%d",&i_Copya,&i_Copyb);
	i_Tmp=i_u;
	i_u=i_v;
	i_v=i_Tmp;
	printf("   i_a=%d\n   i_b=%d\n",i_Copya,i_Copyb);
}


//����������ʽ����
void FuncQuote(int &i_u,int &i_v)
{
	printf("��������������ʽ����\n");
	printf("������i_a��i_b��ֵ(�Կո����)��");
	scanf("%d%d",&i_Citea,&i_Citeb);
	i_Tmp=i_u;
	i_u=i_v;
	i_v=i_Tmp;
	printf("   i_a=%d\n   i_b=%d\n",i_Citea,i_Citeb);
}


//������ַ��ʽ��������
void FuncSite(int *i_u,int *i_v)
{
	printf("����������ַ��ʽ����\n");
	printf("������i_a��i_b��ֵ(�Կո����)��");
	scanf("%d%d",&i_Sitea,&i_Siteb);
	i_Tmp=*i_u;
	*i_u=*i_v;
	*i_v=i_Tmp;
	printf("   i_a=%d\n   i_b=%d\n\n",i_Sitea,i_Siteb);
}
#endif