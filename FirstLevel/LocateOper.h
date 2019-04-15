#ifndef __LocateOper_h_
#define __LocateOper_h_ 

#include "WholeVari.h"//定义的全局变量

//地址及指针操作符
void Locate()
{
	int *i_Poi;
	printf("\n请输入i_a的值:");
	scanf("%d",&i_a);
	i_Poi=&i_a;
	printf("i_a的值为：%d\n",i_a);
	printf("i_Poi的值为：%x\n",i_Poi);
	printf("&i_a的值为：%x\n",&i_a);
	printf("*i_Poi的值为：%d\n",*i_Poi);
	printf("&i_Poi的值为：%x\n",&i_Poi);
	printf("\n");

	printf("给*i_Poi赋值:\n");
	scanf("%d",&i_b);
	*i_Poi=i_b;
	printf("i_a的值为：%d\n",i_a);
	printf("i_Poi的值为：%x\n",i_Poi);
	printf("&i_a的值为：%x\n",&i_a);
	printf("*i_Poi的值为：%d\n",*i_Poi);
	printf("&i_Poi的值为：%x\n",&i_Poi);
}
#endif