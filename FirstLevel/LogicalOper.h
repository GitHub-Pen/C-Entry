#ifndef __LogicalOper_h_
#define __LogicalOper_h_ 

#include "WholeVari.h"//定义的全局变量

//逻辑运算符
void Logicoper()
{
	printf("\n输入i_a、i_b和字符c_Ch的值,以逗号隔开:");
	scanf("%d,%d,%c",&i_a,&i_b,&c_Ch);
	if (i_a!=0&&i_b!=0)
	{
		if (i_a>i_b)
		{
			printf("比较i_a和i_b结果为：i_a大于i_b\n");
		}
		if (i_a<i_b)
		{
			printf("比较i_a和i_b结果为：i_a小于i_b\n");
		}
		if (i_a==i_b)
		{
			printf("比较i_a和i_b结果为：i_a恒等于i_b\n");
		}
	}
	if (c_Ch>='a'&&c_Ch<='z'||c_Ch>='A'&&c_Ch<='Z')
	{
		printf("输入字符为英语字母的ASCII值为:%d\n\n",c_Ch);
	}
}
#endif