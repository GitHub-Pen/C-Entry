#ifndef __Postoper_h_
#define __Postoper_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���

//λ�����
void Postoper()
{
	printf("\n����i_a��i_b����һ��һ������");
	scanf("%d%d",&i_a,&i_b);

	//����<<�����������<<
	printf("\n�������㣺");
	i_Tmp=i_a<<2;
	printf("i_a=%d\n",i_Tmp);
	printf("�������㣺");
	i_Tmp=(i_b>>2);
	printf("i_b=%d\n",i_Tmp);

	//ȡ������~
	i_Tmp=~i_a;
	printf("\nȡ��֮��:%d\n",~i_Tmp);
	i_Tmp=~i_b;
	printf("ȡ��֮��:%d\n",~i_Tmp);

	//��λ������
	i_Tmp=i_a|3;
	printf("\n��������λ�����㣺%d\n",i_Tmp);
	i_Tmp=i_b|-3;
	printf("��������λ�����㣺%d\n",i_Tmp);
	i_Tmp=i_a|i_b;
	printf("һ��һ������λ�����㣺%d\n",i_Tmp);

	//��λ������
	i_Tmp=i_a&3;
	printf("\n��������λ�����㣺%d\n",i_Tmp);
	i_Tmp=i_b&-3;
	printf("��������λ�����㣺%d\n",i_Tmp);
	i_Tmp=i_a|i_b;
	printf("һ��һ������λ�����㣺%d\n",i_Tmp);

	//�������
	i_Tmp=i_a^3;
	printf("\n������������㣺%d\n",i_Tmp);
	i_Tmp=i_b^-3;
	printf("������������㣺%d\n",i_Tmp);
	i_Tmp=i_a^i_b;
	printf("һ��һ����������㣺%d\n\n",i_Tmp);
}
#endif
