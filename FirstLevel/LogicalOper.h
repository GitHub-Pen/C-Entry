#ifndef __LogicalOper_h_
#define __LogicalOper_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���

//�߼������
void Logicoper()
{
	printf("\n����i_a��i_b���ַ�c_Ch��ֵ,�Զ��Ÿ���:");
	scanf("%d,%d,%c",&i_a,&i_b,&c_Ch);
	if (i_a!=0&&i_b!=0)
	{
		if (i_a>i_b)
		{
			printf("�Ƚ�i_a��i_b���Ϊ��i_a����i_b\n");
		}
		if (i_a<i_b)
		{
			printf("�Ƚ�i_a��i_b���Ϊ��i_aС��i_b\n");
		}
		if (i_a==i_b)
		{
			printf("�Ƚ�i_a��i_b���Ϊ��i_a�����i_b\n");
		}
	}
	if (c_Ch>='a'&&c_Ch<='z'||c_Ch>='A'&&c_Ch<='Z')
	{
		printf("�����ַ�ΪӢ����ĸ��ASCIIֵΪ:%d\n\n",c_Ch);
	}
}
#endif