#ifndef __Cycle_h_
#define __Cycle_h_ 

#include "WholeVari.h"//定义的全局变量

//循环结构while、do-while、和for语句
void Cycle()
{
	int i_Sum=0;
	int i_Count=0;
	int i_N;
	printf("输入一个整数:");
	scanf("%d",&i_N);
	for (i_Count=0;i_Count<i_N;i_Count++)
	{
		i_Sum+=i_Count;
	}
	printf("for循环输出相加之和：%d\n",i_Sum);

	i_Sum=0;
	i_Count=0;
	do 
	{

		i_Sum+=i_Count;
		i_Count++;

	} while (i_Count<i_N);
	printf("do-while循环输出相加之和：%d\n",i_Sum);
}
#endif