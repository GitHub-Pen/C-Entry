#ifndef __MathOper_h_
#define __MathOper_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���

//���������
void Mathoper()
{
	printf("\n������������i_a��i_b:");
	scanf("%d%d",&i_a,&i_b);

	printf("���������+:%d\n",i_a+i_b);
	printf("���������-:%d\n",i_a-i_b);
	printf("���������*:%d\n",i_a*i_b);
	printf("���������/:%d\n",i_a/i_b);
	i_a+=i_b;
	printf("���������+=:%d\n",	i_a);
	i_a-=i_b;
	printf("���������-=:%d\n",i_a);
	i_a*=i_b;
	printf("���������*=:%d\n",i_a);
	i_a/=i_b;
	printf("���������/=:%d\n",i_a);

	printf("���Ͳ���i++��i--��");
	printf("%d,%d\n",i_a++,i_a--);
}

#endif