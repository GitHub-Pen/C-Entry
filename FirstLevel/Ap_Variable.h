#ifndef __Ap_Variable_h_
#define __Ap_Variable_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���


//ȫ�ֱ�����ֲ�����
void Ap_Vari()
{
	printf("\n���i_c��ֵ��%d\n",i_c);//�˴������i_cΪȫ�ֱ����������������ȫ�ֱ�����ǰ��ʹ�øñ���������Ҫ��������������ʹ��extern�ؼ��ֶ������˵��
	int i_c=11;//i_cΪ�ֲ�����
	printf("����һ���ֲ�����i_c��ֵΪ11:\n");
	printf("����һ����i_a:");
	scanf("%d",&i_a);
	i_a=i_a+i_c;
	printf("���i_a��i_c֮�ͣ�%d\n",i_a);
}
#endif