#ifndef __variable_h_
#define __variable_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���

void Vari()//���������붨��
{
	printf("\n������int���͵���:");
	scanf("%d",&i_a);
	fflush(stdin);
	printf("������char���͵���:");
	scanf("%c",&c_Ch);
	fflush(stdin);
	printf("������float���͵���:");
	scanf("%f",&f_Vari);
	fflush(stdin);
	printf("������double���͵���:");
	scanf("%lf",&d_Vari);
	fflush(stdin);

	printf("\n��������������͵��ֽ���\n");
	printf("int���ֽ�����%d\n",sizeof(int));
	printf("char���ֽ�����%d\n",sizeof(char));
	printf("float���ֽ�����%d\n",sizeof(float));
	printf("double���ֽ�����%d\n",sizeof(double));

	printf("\n���ַ�������ʮ����������ʽ���:");
	printf("%d\n\n",c_Ch);
}

#endif