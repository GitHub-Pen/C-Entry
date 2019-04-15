#ifndef __Ap_Variable_h_
#define __Ap_Variable_h_ 

#include "WholeVari.h"//定义的全局变量


//全局变量与局部变量
void Ap_Vari()
{
	printf("\n输出i_c的值：%d\n",i_c);//此处输出的i_c为全局变量；如果想在声明全局变量的前面使用该变量，不需要重新声明，必须使用extern关键字对其加以说明
	int i_c=11;//i_c为局部变量
	printf("定义一个局部变量i_c的值为11:\n");
	printf("输入一个数i_a:");
	scanf("%d",&i_a);
	i_a=i_a+i_c;
	printf("输出i_a与i_c之和：%d\n",i_a);
}
#endif