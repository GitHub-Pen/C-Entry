#ifndef __MathOper_h_
#define __MathOper_h_ 

#include "WholeVari.h"//定义的全局变量

//算术运算符
void Mathoper()
{
	printf("\n请输入两个数i_a和i_b:");
	scanf("%d%d",&i_a,&i_b);

	printf("算术运算符+:%d\n",i_a+i_b);
	printf("算术运算符-:%d\n",i_a-i_b);
	printf("算术运算符*:%d\n",i_a*i_b);
	printf("算术运算符/:%d\n",i_a/i_b);
	i_a+=i_b;
	printf("算术运算符+=:%d\n",	i_a);
	i_a-=i_b;
	printf("算术运算符-=:%d\n",i_a);
	i_a*=i_b;
	printf("算术运算符*=:%d\n",i_a);
	i_a/=i_b;
	printf("算术运算符/=:%d\n",i_a);

	printf("整型操作i++和i--：");
	printf("%d,%d\n",i_a++,i_a--);
}

#endif