#ifndef __LocateOper_h_
#define __LocateOper_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���

//��ַ��ָ�������
void Locate()
{
	int *i_Poi;
	printf("\n������i_a��ֵ:");
	scanf("%d",&i_a);
	i_Poi=&i_a;
	printf("i_a��ֵΪ��%d\n",i_a);
	printf("i_Poi��ֵΪ��%x\n",i_Poi);
	printf("&i_a��ֵΪ��%x\n",&i_a);
	printf("*i_Poi��ֵΪ��%d\n",*i_Poi);
	printf("&i_Poi��ֵΪ��%x\n",&i_Poi);
	printf("\n");

	printf("��*i_Poi��ֵ:\n");
	scanf("%d",&i_b);
	*i_Poi=i_b;
	printf("i_a��ֵΪ��%d\n",i_a);
	printf("i_Poi��ֵΪ��%x\n",i_Poi);
	printf("&i_a��ֵΪ��%x\n",&i_a);
	printf("*i_Poi��ֵΪ��%d\n",*i_Poi);
	printf("&i_Poi��ֵΪ��%x\n",&i_Poi);
}
#endif