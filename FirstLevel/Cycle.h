#ifndef __Cycle_h_
#define __Cycle_h_ 

#include "WholeVari.h"//�����ȫ�ֱ���

//ѭ���ṹwhile��do-while����for���
void Cycle()
{
	int i_Sum=0;
	int i_Count=0;
	int i_N;
	printf("����һ������:");
	scanf("%d",&i_N);
	for (i_Count=0;i_Count<i_N;i_Count++)
	{
		i_Sum+=i_Count;
	}
	printf("forѭ��������֮�ͣ�%d\n",i_Sum);

	i_Sum=0;
	i_Count=0;
	do 
	{

		i_Sum+=i_Count;
		i_Count++;

	} while (i_Count<i_N);
	printf("do-whileѭ��������֮�ͣ�%d\n",i_Sum);
}
#endif